@class NSNotificationCenter, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSEngagementConnection : NSObject <AMSEngagementClientProtocol, AMSEngagementServiceProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ errorHandler;

- (void)notifyBlockedMessages:(id)a0;
- (id)_newRemoteConnection;
- (id)proxy;
- (void)contentInfoForApp:(id)a0 cacheKey:(id)a1 version:(id)a2 reply:(id /* block */)a3;
- (id)initWithNotificationCenter:(id)a0;
- (id)_makeExportedClientConnectionInterface;
- (void)beginObservingMessages;
- (void)manualSyncMetricsIdentifiers;
- (void)enqueueWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)syncWithRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)handlePushedEvent:(id)a0;
- (void)treatmentsDidSyncronize;
- (void)_removeRemoteConnection;
- (id)_makeRemoteConnectionInterface;
- (oneway void)syncMetricsIdentifiers;
- (void)treatmentStoreServiceWithReply:(id /* block */)a0;
- (oneway void)fetchMetricsIdentifiers;
- (void)dealloc;

@end
