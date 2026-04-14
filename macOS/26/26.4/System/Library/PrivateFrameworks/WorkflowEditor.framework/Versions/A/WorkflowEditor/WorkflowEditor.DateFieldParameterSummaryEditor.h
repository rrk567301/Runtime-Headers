@interface WorkflowEditor.DateFieldParameterSummaryEditor : WorkflowEditor.TextInputParameterSummaryEditor <WFParameterEventObserver>

- (void)parameterAttributesDidChange:(id)a0;
- (id)initWithParameter:(id)a0 slotIdentifier:(id)a1 arrayIndex:(long long)a2 processing:(BOOL)a3;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;

@end
