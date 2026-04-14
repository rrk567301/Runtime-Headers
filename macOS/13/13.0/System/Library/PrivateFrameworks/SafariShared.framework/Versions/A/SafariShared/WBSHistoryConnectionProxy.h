@class NSXPCConnection, WBSHistoryService, NSObject;
@protocol OS_dispatch_queue, WBSHistoryConnectionProxyDelegate;

@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryConnectionProxy> {
    NSXPCConnection *_connection;
    WBSHistoryService *_inProcessFallbackService;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionProxyQueue;
@property (weak, nonatomic) id<WBSHistoryConnectionProxyDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)killService;
- (void)disconnectWithCompletionHandler:(id /* block */)a0;
- (id)_createConnection;
- (void)queryMemoryFootprint:(id /* block */)a0;
- (id)queryMemoryFootprintWithError:(id *)a0;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyHandler:(id /* block */)a0;
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)initializeCloudHistoryWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)releaseCloudHistory:(id /* block */)a0;
- (void)ensureConnected:(id /* block */)a0;
- (void)getServiceInfo:(id /* block */)a0;
- (void)beginURLCompletionSession:(id /* block */)a0;
- (void)beginHistoryAccessSession:(id /* block */)a0;
- (void)getVisitedLinksWithCompletionHandler:(id /* block */)a0;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)a0 endDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)debugGetDatabaseURLWithCompletionHandler:(id /* block */)a0;
- (void)connectWithOptions:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setupConnectionWithInProcessFallback:(BOOL)a0;

@end
