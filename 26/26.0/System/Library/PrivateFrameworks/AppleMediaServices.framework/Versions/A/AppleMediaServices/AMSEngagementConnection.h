@class NSNotificationCenter, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSEngagementConnection : NSObject <AMSEngagementClientProtocol, AMSEngagementServiceProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ errorHandler;

- (void)contentInfoForApp:(id)a0 cacheKey:(id)a1 version:(id)a2 reply:(id /* block */)a3;
- (void)dealloc;
- (id)proxy;
- (oneway void)syncMetricsIdentifiers;
- (void)_removeRemoteConnection;
- (void)manualSyncMetricsIdentifiers;
- (void)handlePushedEvent:(id)a0;
- (void)enqueueWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)beginObservingMessages;
- (id)_makeRemoteConnectionInterface;
- (void)treatmentStoreServiceWithReply:(id /* block */)a0;
- (id)_newRemoteConnection;
- (oneway void)fetchMetricsIdentifiers;
- (void)notifyBlockedMessages:(id)a0;
- (void)treatmentsDidSyncronize;
- (id)initWithNotificationCenter:(id)a0;
- (id)_makeExportedClientConnectionInterface;
- (void)syncWithRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
