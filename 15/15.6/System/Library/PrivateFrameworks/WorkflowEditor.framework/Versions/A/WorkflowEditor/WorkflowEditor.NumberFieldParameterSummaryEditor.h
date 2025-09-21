@protocol WFVariableProvider;

@interface WorkflowEditor.NumberFieldParameterSummaryEditor : WFModuleSummaryEditor {
    void /* unknown type, empty encoding */ autocompleteDataSource;
    void /* unknown type, empty encoding */ hasStagedChanges;
    void /* unknown type, empty encoding */ isPickingActionOutput;
    void /* unknown type, empty encoding */ autocompleteCoordinator;
}

@property (nonatomic, retain) id<WFVariableProvider> variableProvider;

+ (unsigned long long)variableResultTypeForParameter:(id)a0;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 arrayIndex:(long long)a1 processing:(char)a2;
- (void)completeEditingWithTextAttachmentToEdit:(id)a0;
- (id)menuForTextEntry;
- (void)stageState:(id)a0;
- (id)stateByReplacingVariableFromCurrentState:(id)a0 withVariable:(id)a1;
- (void)textEntryDidFinish;
- (char)textEntryDoCommandBySelector:(SEL)a0;
- (char)textEntryShouldChangeText:(id)a0;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(char *)a1;

@end
