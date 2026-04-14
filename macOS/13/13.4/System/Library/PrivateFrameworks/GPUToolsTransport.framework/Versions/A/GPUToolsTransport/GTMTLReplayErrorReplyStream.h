@protocol GTMTLReplayErrorObserver;

@interface GTMTLReplayErrorReplyStream : GTXPCDispatcher <GTMTLReplayErrorObserverXPCDispatcher> {
    id<GTMTLReplayErrorObserver> _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)sendErrorToHost_:(id)a0 replyConnection:(id)a1;

@end
