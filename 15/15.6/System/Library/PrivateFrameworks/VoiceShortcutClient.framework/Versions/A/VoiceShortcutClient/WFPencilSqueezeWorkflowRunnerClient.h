@interface WFPencilSqueezeWorkflowRunnerClient : WFSystemActionRunnerClient

@property (nonatomic) char hasStartedRun;
@property (readonly, nonatomic) char hasCompletedRun;

+ (id)defaultContextualActionContext;

- (void)start;
- (id)initWithSystemAction:(id)a0 preciseTimeStamp:(id)a1;
- (void)startWithPreciseTimeStamp:(id)a0;

@end
