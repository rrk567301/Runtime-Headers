@protocol GTDisplayService;

@interface GTDisplayServiceXPCDispatcher : GTXPCDispatcher <GTDisplayServiceXPCDispatcher> {
    id<GTDisplayService> _service;
}

- (void).cxx_destruct;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)broadcastDisconnect:(id)a0 replyConnection:(id)a1;
- (void)show_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)terminateProcess:(id)a0 replyConnection:(id)a1;
- (void)update_completionHandler_:(id)a0 replyConnection:(id)a1;

@end
