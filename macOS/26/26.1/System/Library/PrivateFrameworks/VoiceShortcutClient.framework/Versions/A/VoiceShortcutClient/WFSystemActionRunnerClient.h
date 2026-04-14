@class WFConfiguredSystemAction, WFContextualActionContext;

@interface WFSystemActionRunnerClient : WFWorkflowRunnerClient

@property (retain, nonatomic) WFConfiguredSystemAction *action;
@property (retain, nonatomic) WFContextualActionContext *actionContext;

+ (id)defaultContextualActionContext;

- (void)start;
- (void).cxx_destruct;
- (id)initWithSystemContextualAction:(id)a0;
- (id)initWithSystemAction:(id)a0;
- (id)initWithSystemIntentAction:(id)a0;
- (id)initWithSystemNothingAction:(id)a0;
- (id)initWithSystemWorkflowAction:(id)a0;

@end
