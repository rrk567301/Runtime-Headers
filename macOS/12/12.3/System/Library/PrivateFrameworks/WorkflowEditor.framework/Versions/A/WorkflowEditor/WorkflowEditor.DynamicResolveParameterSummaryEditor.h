@interface WorkflowEditor.DynamicResolveParameterSummaryEditor : WFModuleSummaryEditor <WorkflowEditor.ParameterValuePickerViewControllerDelegate, NSPopoverDelegate> {
    void /* unknown type, empty encoding */ presentedPopover;
}

- (void).cxx_destruct;
- (void)popoverDidClose:(id)a0;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 initialState:(id)a1 initialArrayState:(id)a2 arrayIndex:(long long)a3 processing:(BOOL)a4;
- (void)parameterValuePickerWithViewController:(id)a0 didFinishWithParameterState:(id)a1;
- (void)parameterValuePickerDidStartSelectingMagicVariableWithViewController:(id)a0;
- (void)parameterValuePickerDidCancelWithViewController:(id)a0;
- (void)parameterValuePickerDidClearWithViewController:(id)a0;

@end
