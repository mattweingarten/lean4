/-
Copyright (c) 2020 Marc Huisinga. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Marc Huisinga, Wojciech Nawrocki
-/
import Lean.Data.Json

/-! Defines most of the 'Basic Structures' in the LSP specification
(https://microsoft.github.io/language-server-protocol/specifications/specification-current/),
as well as some utilities.

Since LSP is Json-based, Ints/Nats are represented by Floats on the wire. -/

namespace Lean
namespace Lsp

open Json

abbrev DocumentUri := String

/-- We adopt the convention that zero-based UTF-16 positions as sent by LSP clients
are represented by `Lsp.Position` while internally we mostly use `String.Pos` UTF-8
offsets. For diagnostics, one-based `Lean.Position`s are used internally.
`character` is accepted liberally: actual character := min(line length, character) -/
structure Position := (line : Nat) (character : Nat)

instance : Inhabited Position := ⟨⟨0, 0⟩⟩

instance : FromJson Position := ⟨fun j => do
  let line ← j.getObjValAs? Nat "line"
  let character ← j.getObjValAs? Nat "character"
  pure ⟨line, character⟩⟩

instance : ToJson Position := ⟨fun o =>
  mkObj [
    ⟨"line", o.line⟩,
    ⟨"character", o.character⟩]⟩

instance : ToString Position := ⟨fun p =>
  "(" ++ toString p.line ++ ", " ++ toString p.character ++ ")"⟩

structure Range := (start : Position) («end» : Position)

instance : FromJson Range := ⟨fun j => do
  let start ← j.getObjValAs? Position "start"
  let «end» ← j.getObjValAs? Position "end"
  pure ⟨start, «end»⟩⟩

instance : ToJson Range := ⟨fun o =>
  mkObj [
    ⟨"start", toJson o.start⟩,
    ⟨"end", toJson o.«end»⟩]⟩

structure Location := (uri : DocumentUri) (range : Range)

instance : FromJson Location := ⟨fun j => do
  let uri ← j.getObjValAs? DocumentUri "uri"
  let range ← j.getObjValAs? Range "range"
  pure ⟨uri, range⟩⟩

instance : ToJson Location := ⟨fun o =>
  mkObj [
    ⟨"uri", toJson o.uri⟩,
    ⟨"range", toJson o.range⟩]⟩

structure LocationLink :=
  (originSelectionRange? : Option Range)
  (targetUri : DocumentUri)
  (targetRange : Range)
  (targetSelectionRange : Range)

instance : FromJson LocationLink := ⟨fun j => do
  let originSelectionRange? := j.getObjValAs? Range "originSelectionRange"
  let targetUri ← j.getObjValAs? DocumentUri "targetUri"
  let targetRange ← j.getObjValAs? Range "targetRange"
  let targetSelectionRange ← j.getObjValAs? Range "targetSelectionRange"
  pure ⟨originSelectionRange?, targetUri, targetRange, targetSelectionRange⟩⟩

instance : ToJson LocationLink := ⟨fun o => mkObj $
  opt "originSelectionRange" o.originSelectionRange? ++ [
    ⟨"targetUri", toJson o.targetUri⟩,
    ⟨"targetRange", toJson o.targetRange⟩,
    ⟨"targetSelectionRange", toJson o.targetSelectionRange⟩]⟩

-- NOTE: Diagnostic defined in Diagnostics.lean

/- NOTE: No specific commands are specified by LSP, hence
possible commands need to be announced as capabilities. -/
structure Command :=
  (title : String)
  (command : String)
  (arguments? : Option (Array Json) := none)

instance : FromJson Command := ⟨fun j => do
  let title ← j.getObjValAs? String "title"
  let command ← j.getObjValAs? String "command"
  let arguments? := j.getObjValAs? (Array Json) "arguments"
  pure ⟨title, command, arguments?⟩⟩

instance : ToJson Command := ⟨fun o => mkObj $
  opt "arguments" o.arguments? ++ [
    ⟨"title", o.title⟩,
    ⟨"command", o.command⟩]⟩

structure TextEdit :=
  (range : Range)
  (newText : String)

instance : FromJson TextEdit := ⟨fun j => do
  let range ← j.getObjValAs? Range "range"
  let newText ← j.getObjValAs? String "newText"
  pure ⟨range, newText⟩⟩

instance : ToJson TextEdit := ⟨fun o =>
  mkObj [
    ⟨"range", toJson o.range⟩,
    ⟨"newText", o.newText⟩]⟩

def TextEditBatch := Array TextEdit

instance : FromJson TextEditBatch :=
  ⟨@fromJson? (Array TextEdit) _⟩

instance  : ToJson TextEditBatch :=
  ⟨@toJson (Array TextEdit) _⟩

structure TextDocumentIdentifier := (uri : DocumentUri)

instance : FromJson TextDocumentIdentifier := ⟨fun j =>
  TextDocumentIdentifier.mk <$> j.getObjValAs? DocumentUri "uri"⟩

instance : ToJson TextDocumentIdentifier :=
  ⟨fun o => mkObj [⟨"uri", o.uri⟩]⟩

structure VersionedTextDocumentIdentifier :=
  (uri : DocumentUri)
  (version? : Option Nat := none)

instance : FromJson VersionedTextDocumentIdentifier := ⟨fun j => do
  let uri ← j.getObjValAs? DocumentUri "uri"
  let version? := j.getObjValAs? Nat "version"
  pure ⟨uri, version?⟩⟩

instance : ToJson VersionedTextDocumentIdentifier := ⟨fun o => mkObj $
  opt "version" o.version? ++
  [⟨"uri", o.uri⟩]⟩

structure TextDocumentEdit :=
  (textDocument : VersionedTextDocumentIdentifier)
  (edits : TextEditBatch)

instance : FromJson TextDocumentEdit := ⟨fun j => do
  let textDocument ← j.getObjValAs? VersionedTextDocumentIdentifier "textDocument"
  let edits ← j.getObjValAs? TextEditBatch "edits"
  pure ⟨textDocument, edits⟩⟩

instance : ToJson TextDocumentEdit := ⟨fun o =>
  mkObj [
    ⟨"textDocument", toJson o.textDocument⟩,
    ⟨"edits", toJson o.edits⟩]⟩

-- TODO(Marc): missing:
-- File Resource Changes, WorkspaceEdit
-- both of these are pretty global, we can look at their
-- uses when single file behaviour works.

structure TextDocumentItem :=
  (uri : DocumentUri)
  (languageId : String)
  (version : Nat)
  (text : String)

instance : FromJson TextDocumentItem := ⟨fun j => do
  let uri ← j.getObjValAs? DocumentUri "uri"
  let languageId ← j.getObjValAs? String "languageId"
  let version ← j.getObjValAs? Nat "version"
  let text ← j.getObjValAs? String "text"
  pure ⟨uri, languageId, version, text⟩⟩

instance : ToJson TextDocumentItem := ⟨fun o =>
  mkObj [
    ⟨"uri", o.uri⟩,
    ⟨"languageId", o.languageId⟩,
    ⟨"version", o.version⟩,
    ⟨"text", o.text⟩]⟩

structure TextDocumentPositionParams :=
  (textDocument : TextDocumentIdentifier)
  (position : Position)

instance : FromJson TextDocumentPositionParams := ⟨fun j => do
  let textDocument ← j.getObjValAs? TextDocumentIdentifier "textDocument"
  let position ← j.getObjValAs? Position "position"
  pure ⟨textDocument, position⟩⟩

instance : ToJson TextDocumentPositionParams := ⟨fun o =>
  mkObj [
    ⟨"textDocument", toJson o.textDocument⟩,
    ⟨"position", toJson o.position⟩]⟩

structure DocumentFilter :=
  (language? : Option String := none)
  (scheme? : Option String := none)
  (pattern? : Option String := none)

instance : FromJson DocumentFilter := ⟨fun j => do
  let language? := j.getObjValAs? String "language"
  let scheme? := j.getObjValAs? String "scheme"
  let pattern? := j.getObjValAs? String "pattern"
  pure ⟨language?, scheme?, pattern?⟩⟩

instance : ToJson DocumentFilter := ⟨fun o => mkObj $
  opt "language" o.language? ++
  opt "scheme" o.scheme? ++
  opt "pattern" o.pattern?⟩

def DocumentSelector := Array DocumentFilter

instance : FromJson DocumentSelector :=
  ⟨@fromJson? (Array DocumentFilter) _⟩

instance : ToJson DocumentSelector :=
  ⟨@toJson (Array DocumentFilter) _⟩

structure StaticRegistrationOptions := (id? : Option String := none)

instance : FromJson StaticRegistrationOptions :=
  ⟨fun j => some ⟨j.getObjValAs? String "id"⟩⟩

instance : ToJson StaticRegistrationOptions :=
  ⟨fun o => mkObj $ opt "id" o.id?⟩

structure TextDocumentRegistrationOptions := (documentSelector? : Option DocumentSelector := none)

instance : FromJson TextDocumentRegistrationOptions :=
  ⟨fun j => some ⟨j.getObjValAs? DocumentSelector "documentSelector"⟩⟩

instance : ToJson TextDocumentRegistrationOptions :=
  ⟨fun o => mkObj $ opt "documentSelector" o.documentSelector?⟩

inductive MarkupKind | plaintext | markdown

instance : FromJson MarkupKind := ⟨fun j =>
  match j with
  | str "plaintext" => some MarkupKind.plaintext
  | str "markdown"  => some MarkupKind.markdown
  | _               => none⟩

instance : ToJson MarkupKind := ⟨fun k =>
  match k with
  | MarkupKind.plaintext => str "plaintext"
  | MarkupKind.markdown  => str "markdown"⟩

structure MarkupContent := (kind : MarkupKind) (value : String)

instance : FromJson MarkupContent := ⟨fun j => do
  let kind ← j.getObjValAs? MarkupKind "kind"
  let value ← j.getObjValAs? String "value"
  pure ⟨kind, value⟩⟩

instance : ToJson MarkupContent := ⟨fun o =>
  mkObj [
    ⟨"kind", toJson o.kind⟩,
    ⟨"value", o.value⟩]⟩

-- TODO(Marc): missing:
-- WorkDoneProgressBegin, WorkDoneProgressReport,
-- WorkDoneProgressEnd, WorkDoneProgressParams,
-- WorkDoneProgressOptions, PartialResultParams
-- Progress can be implemented
-- later when the basic functionality stands.

end Lsp
end Lean
