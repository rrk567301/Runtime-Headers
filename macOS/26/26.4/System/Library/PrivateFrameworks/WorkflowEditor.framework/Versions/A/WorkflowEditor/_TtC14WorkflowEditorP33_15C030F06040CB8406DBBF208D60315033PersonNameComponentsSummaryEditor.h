@protocol WFVariableProvider;

@interface _TtC14WorkflowEditorP33_15C030F06040CB8406DBBF208D60315033PersonNameComponentsSummaryEditor : WFModuleSummaryEditor {
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
- (id)initWithParameter:(id)a0 slotIdentifier:(id)a1 arrayIndex:(long long)a2 processing:(BOOL)a3;
- (id)clearButtonMenuItemForSlotWithIdentifier:(id)a0;
- (void)completeEditingWithTextAttachmentToEdit:(id)a0;
- (id)menuForSlotWithIdentifier:(id)a0 style:(unsigned long long)a1;
- (id)menuForTextEntry;
- (id)stateByReplacingVariableFromCurrentState:(id)a0 withVariable:(id)a1 slotIdentifier:(id)a2;
- (void)textEntryDidFinish;
- (BOOL)textEntryDoCommandBySelector:(SEL)a0;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;
- (BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)a0;

@end
