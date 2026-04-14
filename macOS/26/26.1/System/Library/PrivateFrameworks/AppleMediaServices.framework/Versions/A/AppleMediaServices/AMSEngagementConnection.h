@class NSNotificationCenter, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSEngagementConnection : NSObject <AMSEngagementClientProtocol, AMSEngagementServiceProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ errorHandler;

- (id)proxy;
- (void)beginObservingMessages;
- (oneway void)fetchMetricsIdentifiers;
- (void)contentInfoForApp:(id)a0 cacheKey:(id)a1 version:(id)a2 reply:(id /* block */)a3;
- (void)treatmentsDidSyncronize;
- (id)_makeExportedClientConnectionInterface;
- (void)handlePushedEvent:(id)a0;
- (void)manualSyncMetricsIdentifiers;
- (void)_removeRemoteConnection;
- (id)initWithNotificationCenter:(id)a0;
- (oneway void)syncMetricsIdentifiers;
- (void)dealloc;
- (void)notifyBlockedMessages:(id)a0;
- (void)treatmentStoreServiceWithReply:(id /* block */)a0;
- (void)syncWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_makeRemoteConnectionInterface;
- (void).cxx_destruct;
- (id)_newRemoteConnection;
- (void)enqueueWithRequest:(id)a0 completion:(id /* block */)a1;

@end
