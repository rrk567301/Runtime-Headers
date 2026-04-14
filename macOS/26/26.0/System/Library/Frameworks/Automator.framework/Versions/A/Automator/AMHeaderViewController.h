@class AMWorkflow, AMPluginHeaderViewController, AMWorkflowHeaderView;

@interface AMHeaderViewController : NSViewController {
    AMWorkflow *_workflow;
}

@property (retain) AMPluginHeaderViewController *pluginHeaderViewController;
@property (retain) AMWorkflowHeaderView *workflowHeaderView;
@property (retain, nonatomic) AMWorkflow *workflow;

+ (BOOL)hasHeaderViewForPersonality:(id)a0;

- (void)loadView;
- (void)dealloc;
- (void)update;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)updateHeaderConnectionDrawing;

@end
