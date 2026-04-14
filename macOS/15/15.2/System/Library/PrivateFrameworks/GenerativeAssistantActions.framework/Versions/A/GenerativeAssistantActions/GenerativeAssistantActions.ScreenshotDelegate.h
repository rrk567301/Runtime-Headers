@interface GenerativeAssistantActions.ScreenshotDelegate : NSObject <WFContextualActionRunnerClientDelegate> {
    void /* unknown type, empty encoding */ callback;
}

- (id)init;
- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutputFiles:(id)a1 error:(id)a2 cancelled:(BOOL)a3;

@end
