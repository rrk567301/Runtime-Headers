@class SADaemonXPC, SAReplyController;

@interface SAAppSizer : NSObject

@property (retain) SAReplyController *sarc;
@property (retain) SADaemonXPC *xpcOut;
@property char handlerAlreadyRegistered;
@property char alreadyReportedXPCError;

- (id)init;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)invalidateConnection;
- (void)callHandlerWithError:(id)a0;
- (void)startObservingWithScanOptions:(unsigned long long)a0 updateHandler:(id /* block */)a1;
- (void)startObservingWithUpdateHandler:(id /* block */)a0;

@end
