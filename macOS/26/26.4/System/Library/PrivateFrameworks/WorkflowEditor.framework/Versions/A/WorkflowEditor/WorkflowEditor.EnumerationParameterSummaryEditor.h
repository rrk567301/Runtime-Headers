@interface WorkflowEditor.EnumerationParameterSummaryEditor : WFModuleSummaryEditor {
    void /* unknown type, empty encoding */ valuePicker;
}

+ (unsigned long long)variableResultTypeForParameter:(id)a0;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 slotIdentifier:(id)a1 arrayIndex:(long long)a2 processing:(BOOL)a3;
- (void)completeEditing;
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)a0 slotIdentifier:(id)a1;
- (id)customMenuElementsForSlotWithIdentifier:(id)a0 style:(unsigned long long)a1;

@end
