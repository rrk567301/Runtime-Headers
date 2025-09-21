@class NSXPCConnection, WBSHistoryService, NSObject;
@protocol OS_dispatch_queue;

@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryConnectionProxy> {
    NSXPCConnection *_connection;
    WBSHistoryService *_inProcessFallbackService;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionProxyQueue;

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (id)_createConnection;
- (void).cxx_destruct;
- (void)killService;
- (void)getServiceInfo:(id /* block */)a0;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyHandler:(id /* block */)a0;
- (void)_setupConnectionWithInProcessFallback:(BOOL)a0;
- (void)beginURLCompletionSession:(id /* block */)a0;
- (void)connectWithOptions:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)copyAndRedactHistoryDatabasesForAllProfiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)ensureConnected:(id /* block */)a0;
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)getCompletionListItemsForQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)initializeCloudHistoryWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)listDatabaseURLsWithCompletionHandler:(id /* block */)a0;
- (void)queryMemoryFootprint:(id /* block */)a0;
- (id)queryMemoryFootprintWithError:(id *)a0;
- (void)releaseCloudHistory:(id /* block */)a0;
- (void)setCompletionListVendorEndpoint:(id)a0 completionHandler:(id /* block */)a1;

@end
