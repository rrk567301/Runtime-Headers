@protocol GTMTLDiagnosticsService, GTXPCConnection;

@interface GTMTLDiagnosticsServiceXPCDispatcher : GTXPCDispatcher <GTMTLDiagnosticsServiceXPCDispatcher, GTMTLDiagnosticsServiceDelegate> {
    id<GTMTLDiagnosticsService> _service;
    id<GTXPCConnection> _notifyConnection;
}

- (void).cxx_destruct;
- (void)setDelegate_:(id)a0 replyConnection:(id)a1;
- (void)notifyDiagnosticsIssue:(id)a0;
- (void)notifyCommandBufferIssue:(id)a0;
- (id)initWithService:(id)a0 properties:(id)a1 notifyConnection:(id)a2;

@end
