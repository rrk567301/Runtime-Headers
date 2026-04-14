@interface _TtC14WorkflowEditorP33_4FF4F351C433FF94A8616279ECCFBACD35VariableFieldParameterSummaryEditor : WFModuleSummaryEditor {
    void /* unknown type, empty encoding */ hasStagedChanges;
}

- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 slotIdentifier:(id)a1 arrayIndex:(long long)a2 processing:(BOOL)a3;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;

@end
