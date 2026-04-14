@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSServerDataCacheService : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (id)_makeRemoteConnectionInterface;
- (id)init;
- (id)reminderEventsForAccount:(id)a0 service:(id)a1 eventType:(id)a2 networkPolicy:(long long)a3;
- (id)setUpCacheForAccount:(id)a0;
- (void)_removeRemoteConnection;
- (id)updateCacheForAccountDSID:(id)a0 withCachePayload:(id)a1;
- (id)_newRemoteConnection;
- (id)tearDownCacheForAccountDSID:(id)a0;
- (void).cxx_destruct;
- (id)updateCacheForAccountDSID:(id)a0 withCacheTypeIDs:(id)a1;
- (id)setUpCacheForAccountDSID:(id)a0;
- (void)dealloc;
- (id)proxyWithErrorHandler:(id /* block */)a0;
- (id)dataForAccountDSID:(id)a0 cacheTypeID:(id)a1 networkPolicy:(long long)a2;
- (id)granularNotificationSettingsForAccountDSID:(id)a0 bundleID:(id)a1 networkPolicy:(long long)a2;

@end
