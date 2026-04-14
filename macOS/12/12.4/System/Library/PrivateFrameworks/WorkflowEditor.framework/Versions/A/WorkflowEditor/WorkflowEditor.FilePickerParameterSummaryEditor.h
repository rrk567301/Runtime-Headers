@interface WorkflowEditor.FilePickerParameterSummaryEditor : WFModuleSummaryEditor {
    void /* unknown type, empty encoding */ chooser;
    void /* unknown type, empty encoding */ openPanel;
}

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 initialState:(id)a1 initialArrayState:(id)a2 arrayIndex:(long long)a3 processing:(BOOL)a4;
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)a0;

@end
