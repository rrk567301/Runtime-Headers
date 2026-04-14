@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSServerDataCacheService : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (id)proxyWithErrorHandler:(id /* block */)a0;
- (id)granularNotificationSettingsForAccountDSID:(id)a0 bundleID:(id)a1 networkPolicy:(long long)a2;
- (void)_removeRemoteConnection;
- (id)setUpCacheForAccount:(id)a0;
- (id)setUpCacheForAccountDSID:(id)a0;
- (void)dealloc;
- (id)reminderEventsForAccount:(id)a0 service:(id)a1 eventType:(id)a2 networkPolicy:(long long)a3;
- (id)dataForAccountDSID:(id)a0 cacheTypeID:(id)a1 networkPolicy:(long long)a2;
- (id)_makeRemoteConnectionInterface;
- (void).cxx_destruct;
- (id)_newRemoteConnection;
- (id)updateCacheForAccountDSID:(id)a0 withCachePayload:(id)a1;
- (id)updateCacheForAccountDSID:(id)a0 withCacheTypeIDs:(id)a1;
- (id)tearDownCacheForAccountDSID:(id)a0;
- (id)init;

@end
