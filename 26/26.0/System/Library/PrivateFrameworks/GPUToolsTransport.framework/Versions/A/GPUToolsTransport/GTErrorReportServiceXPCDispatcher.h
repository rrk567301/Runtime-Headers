@protocol GTErrorReportService;

@interface GTErrorReportServiceXPCDispatcher : GTXPCDispatcher <GTErrorReportServiceXPCDispatcher> {
    id<GTErrorReportService> _service;
}

- (void).cxx_destruct;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)broadcastDisconnect:(id)a0 replyConnection:(id)a1;
- (void)deregisterObserver_:(id)a0 replyConnection:(id)a1;
- (void)fetchRejectedConnections_:(id)a0 replyConnection:(id)a1;
- (void)registerObserver_:(id)a0 replyConnection:(id)a1;

@end
