@interface WorkflowEditor.AppKitEditorViewController : NSViewController <NSPopoverDelegate, WFWorkflowEditingObserver> {
    void /* unknown type, empty encoding */ workflow;
    void /* unknown type, empty encoding */ runner;
    void /* unknown type, empty encoding */ editorResults;
    void /* unknown type, empty encoding */ editorOptions;
    void /* unknown type, empty encoding */ editorDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emptyStateView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ outputResults;
    void /* unknown type, empty encoding */ $__lazy_storage_$_triggerInputAction;
    void /* unknown type, empty encoding */ draggingActionTree;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ outputVariableMode;
    void /* unknown type, empty encoding */ isFocusedOnRevealedAction;
    void /* unknown type, empty encoding */ variableEditingPopover;
    void /* unknown type, empty encoding */ parameterEditingHintView;
    void /* unknown type, empty encoding */ hiddenConnectorsForDragging;
    void /* unknown type, empty encoding */ hiddenItemsForDragging;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectVariableButton;
}

- (void)viewDidLoad;
- (void)cancelOperation:(id)a0;
- (void)dealloc;
- (void)paste:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (void)viewDidLayout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)deleteBackward:(id)a0;
- (void)deleteForward:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)viewWillAppear;
- (void)duplicateAction:(id)a0;
- (void)rearrangeItemDown:(id)a0;
- (void)rearrangeItemUp:(id)a0;
- (void)workflowActionsDidChange:(id)a0;
- (void)workflowConnectorStateDidChange:(id)a0;
- (void)workflowInputActionDidChange:(id)a0;
- (void)workflowTriggersDidChange:(id)a0;

@end
