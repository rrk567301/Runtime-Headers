@protocol WFVariableProvider;

@interface WorkflowEditor.QuantityFieldParameterSummaryEditor : WFModuleSummaryEditor {
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
- (id)initWithParameter:(id)a0 arrayIndex:(long long)a1 processing:(BOOL)a2;
- (void)stageState:(id)a0;
- (void)completeEditingWithTextAttachmentToEdit:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)a0;
- (id)menuForTextEntry;
- (BOOL)textEntryDoCommandBySelector:(SEL)a0;
- (id)stateByReplacingVariableFromCurrentState:(id)a0 withVariable:(id)a1;
- (BOOL)textEntryShouldChangeText:(id)a0;
- (BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)a0;
- (id)clearButtonMenuItemForSlotWithIdentifier:(id)a0;
- (id)customMenuElementsForSlotWithIdentifier:(id)a0 style:(unsigned long long)a1;

@end
