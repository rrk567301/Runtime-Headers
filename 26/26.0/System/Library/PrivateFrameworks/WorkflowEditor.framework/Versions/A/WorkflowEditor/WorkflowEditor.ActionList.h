@interface WorkflowEditor.ActionList : _TtCs12_SwiftObject <WFWorkflowEditingObserver> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ workflow;
    void /* unknown type, empty encoding */ selectionCoordinator;
    void /* unknown type, empty encoding */ _draggingActionTree;
    void /* unknown type, empty encoding */ actionViewModelStore;
    void /* unknown type, empty encoding */ _inputAction;
    void /* unknown type, empty encoding */ _visibleActions;
    void /* unknown type, empty encoding */ manuallyCollapsedControlFlowActions;
    void /* unknown type, empty encoding */ collapsedActionGroupIdentifiersForDragging;
    void /* unknown type, empty encoding */ lastActions;
}

- (void)workflowActionsDidChange:(id)a0;
- (void)workflowConnectorStateDidChange:(id)a0;
- (void)workflowInputActionDidChange:(id)a0;
- (void)workflowTriggersDidChange:(id)a0;

@end
