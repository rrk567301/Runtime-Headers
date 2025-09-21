@protocol GTErrorReportServiceObserver;

@interface GTErrorReportServiceReplyStream : GTXPCDispatcher <GTErrorReportServiceObserverXPCDispatcher> {
    id<GTErrorReportServiceObserver> _observer;
}

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (void)notifyRejectedConnections_:(id)a0 replyConnection:(id)a1;

@end
