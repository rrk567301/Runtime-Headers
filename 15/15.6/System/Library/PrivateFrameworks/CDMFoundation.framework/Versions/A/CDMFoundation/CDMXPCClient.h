@class NSString, NSXPCConnection, CDMDataDispatcherContext, CDMServiceCenter;
@protocol CDMClientDelegate;

@interface CDMXPCClient : CDMClientInterface {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<CDMClientDelegate> _delegate;
    NSXPCConnection *_connection;
    NSString *_assetsLocaleIdentifier;
    CDMServiceCenter *_serviceCenter;
    char _wakeOnInit;
    CDMDataDispatcherContext *_dataDispatcherContext;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (id)initWithDelegate:(id)a0;
- (void)invalidateConnection;
- (void)wake;
- (void)setup:(id)a0;
- (void)waitForDataDispatcherCompletion;
- (void)sharedInitTasks;
- (char)areAssetsAvailable:(id)a0;
- (void)doHandleCommand:(id)a0 forCallback:(id /* block */)a1;
- (id)initWithCallingBundleId:(id)a0;
- (id)initWithConnection:(id)a0 delegate:(id)a1 wakeOnInit:(char)a2;
- (id)initWithDelegate:(id)a0 withCallingBundleId:(id)a1;
- (void)processCDMNluRequest:(id)a0;
- (void)processCDMNluRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processCDMNluRequest:(id)a0 nullableCompletionHandler:(id /* block */)a1;
- (char)registerWithAssetsDelegate:(id)a0 withType:(long long)a1;
- (void)setDataDispatcherContext:(id)a0;
- (void)setup:(id)a0 completionHandler:(id /* block */)a1;
- (void)setup:(id)a0 nullableCompletionHandler:(id /* block */)a1;
- (void)warmupWithCompletionHandler:(id /* block */)a0;

@end
