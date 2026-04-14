@interface WFServicesRunnerClient : WFWorkflowRunnerClient

- (void)startAndExpectOutput:(BOOL)a0;
- (id)initWithServicesWorkflow:(id)a0 inputPasteboardName:(id)a1;
- (void)startAndExpectOutput:(BOOL)a0 runSurface:(unsigned long long)a1;

@end
