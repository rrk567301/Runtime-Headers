@protocol GTLaunchService;

@interface GTLaunchServiceXPCDispatcher : GTXPCDispatcher <GTLaunchServiceXPCDispatcher> {
    id<GTLaunchService> _service;
}

- (void).cxx_destruct;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)launchReplayerWithConfiguration_:(id)a0 replyConnection:(id)a1;
- (void)symbolicatorSignatureForPid_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)resumeTaskForPid_:(id)a0 replyConnection:(id)a1;
- (void)terminateTaskForPid_:(id)a0 replyConnection:(id)a1;

@end
