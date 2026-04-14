@protocol GTErrorReportServiceObserver;

@interface GTErrorReportServiceReplyStream : GTXPCDispatcher <GTErrorReportServiceObserverXPCDispatcher> {
    id<GTErrorReportServiceObserver> _observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)notifyRejectedConnections_:(id)a0 replyConnection:(id)a1;

@end
