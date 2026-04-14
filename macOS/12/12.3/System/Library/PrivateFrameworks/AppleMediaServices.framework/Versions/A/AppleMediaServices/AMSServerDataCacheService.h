@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSServerDataCacheService : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (BOOL)_serverDataCacheFeatureEnabled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)proxyWithErrorHandler:(id /* block */)a0;
- (id)_newRemoteConnection;
- (void)_removeRemoteConnection;
- (id)_makeRemoteConnectionInterface;
- (id)setUpCacheForAccountDSID:(id)a0;
- (id)granularNotificationSettingsForAccountDSID:(id)a0 bundleID:(id)a1 networkPolicy:(long long)a2;
- (id)dataForAccountDSID:(id)a0 cacheTypeID:(id)a1 networkPolicy:(long long)a2;
- (id)setUpCacheForAccount:(id)a0;
- (id)tearDownCacheForAccountDSID:(id)a0;
- (id)updateCacheForAccountDSID:(id)a0 withCachePayload:(id)a1;
- (id)updateCacheForAccountDSID:(id)a0 withCacheTypeIDs:(id)a1;

@end
