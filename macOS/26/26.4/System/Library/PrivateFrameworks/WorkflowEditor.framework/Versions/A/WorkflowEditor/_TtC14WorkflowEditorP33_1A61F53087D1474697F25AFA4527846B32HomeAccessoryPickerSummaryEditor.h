@interface _TtC14WorkflowEditorP33_1A61F53087D1474697F25AFA4527846B32HomeAccessoryPickerSummaryEditor : WFModuleSummaryEditor {
    void /* unknown type, empty encoding */ modal;
}

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 slotIdentifier:(id)a1 arrayIndex:(long long)a2 processing:(BOOL)a3;
- (id)stateByReplacingVariableFromCurrentState:(id)a0 withVariable:(id)a1 slotIdentifier:(id)a2;

@end
