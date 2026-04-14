@class WFWorkflow, WFAction;

@interface WorkflowEditor.EditorHostingViewController : NSViewController <WFWorkflowEditingDelegate> {
    void /* unknown type, empty encoding */ workflow;
    void /* unknown type, empty encoding */ contentViewController;
    void /* unknown type, empty encoding */ editorOptions;
    void /* unknown type, empty encoding */ editorResults;
    void /* unknown type, empty encoding */ actionList;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ runner;
    void /* unknown type, empty encoding */ coordinateSpaceName;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ auxiliaryViewPresenter;
    void /* unknown type, empty encoding */ titleBarSeparatorView;
}

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)workflow:(WFWorkflow *)a0 askToRemoveNestedActionsWithinAction:(WFAction *)a1 completionHandler:(void (^)(BOOL))a2;

@end
