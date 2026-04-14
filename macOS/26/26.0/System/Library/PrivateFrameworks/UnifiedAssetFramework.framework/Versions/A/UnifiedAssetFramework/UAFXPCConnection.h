@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface UAFXPCConnection : NSObject <UAFXPCProxyService> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSString *_serviceName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getUserServiceXPCEndpoint;
+ (id)selectXPCEndpoint;

- (id)_connection;
- (id)initWithMachServiceName:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void)_connectionInterrupted;
- (void)_invalidate;
- (id)init;
- (void)_connectionInvalidated;
- (void).cxx_destruct;
- (oneway void)markAssetsExpired:(id)a0 completion:(id /* block */)a1;
- (id)initWithSubscriptionServiceName;
- (oneway void)operationWithConfig:(id)a0 completion:(id /* block */)a1;
- (oneway void)checkAssetStatus:(id /* block */)a0;
- (oneway void)diagnosticInformation:(id /* block */)a0;
- (oneway void)diskSpaceNeededInBytesForLanguage:(id)a0 forClient:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)downloadDictationAssetsForLanguage:(id)a0;
- (oneway void)downloadSiriAssets;
- (oneway void)downloadSiriAssetsOverCellular;
- (oneway void)expireSubscriptions:(id /* block */)a0;
- (id)initWithDefaultService;
- (id)initWithUserService;
- (oneway void)lockLatestAtomicInstance:(id)a0 completion:(id /* block */)a1;
- (oneway void)postAssetNotificationIfNeeded;
- (oneway void)postDictationAssetNotificationForLanguage:(id)a0;
- (oneway void)setSystemConfigurationForKey:(id)a0 withValue:(id)a1 completion:(id /* block */)a2;
- (void)subscriptions:(id)a0 subscriber:(id)a1 user:(id)a2 completion:(id /* block */)a3;

@end
