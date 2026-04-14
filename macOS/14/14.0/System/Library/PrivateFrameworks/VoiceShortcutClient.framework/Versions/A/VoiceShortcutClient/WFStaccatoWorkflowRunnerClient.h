@class NSString, WFConfiguredStaccatoAction, WFContextualActionContext;

@interface WFStaccatoWorkflowRunnerClient : WFWorkflowRunnerClient

@property (retain, nonatomic) WFConfiguredStaccatoAction *action;
@property (retain, nonatomic) WFContextualActionContext *actionContext;
@property (nonatomic) BOOL hasCompletedRun;
@property (readonly, copy, nonatomic) NSString *presentableIdentifier;
@property (readonly, copy, nonatomic) NSString *presentableRequester;

- (void).cxx_destruct;
- (void)start;
- (id)initWithWorkflowStaccatoAction:(id)a0;
- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;
- (id)initWithDescriptor:(id)a0 runRequest:(id)a1;
- (id)initWithLinkStaccatoAction:(id)a0 interactionType:(id)a1 preciseTimeStamp:(id)a2;
- (id)initWithStaccatoAction:(id)a0;
- (id)initWithStaccatoAction:(id)a0 interactionType:(id)a1 preciseTimeStamp:(id)a2;
- (id)initWithTopHitStaccatoAction:(id)a0;
- (void)startWithInteractionType:(id)a0 preciseTimeStamp:(id)a1;
- (void)userInteractionBegan;

@end
