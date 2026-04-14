@interface _TtC14WorkflowEditorP33_C1C4B2EE5732D59CF4781053522F216631CharacterParameterSummaryEditor : WFModuleSummaryEditor <CPKPopoverDelegate, NSPopoverDelegate> {
    void /* unknown type, empty encoding */ emojiPopover;
}

- (void).cxx_destruct;
- (void)popoverDidClose:(id)a0;
- (BOOL)characterPickerPopover:(id)a0 didSelectCharacter:(id)a1;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (id)initWithParameter:(id)a0 slotIdentifier:(id)a1 arrayIndex:(long long)a2 processing:(BOOL)a3;
- (void)textEntryDidFinish;
- (BOOL)textEntryShouldChangeTextTo:(id)a0 replacingRanges:(id)a1 withStrings:(id)a2;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;

@end
