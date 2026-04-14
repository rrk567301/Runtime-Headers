@class NSNotificationCenter, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSEngagementConnection : NSObject <AMSEngagementClientProtocol, AMSEngagementServiceProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ errorHandler;

- (id)_makeRemoteConnectionInterface;
- (void)syncWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)contentInfoForApp:(id)a0 cacheKey:(id)a1 version:(id)a2 reply:(id /* block */)a3;
- (void)treatmentStoreServiceWithReply:(id /* block */)a0;
- (id)proxy;
- (oneway void)fetchMetricsIdentifiers;
- (void)treatmentsDidSyncronize;
- (id)_makeExportedClientConnectionInterface;
- (void)_removeRemoteConnection;
- (oneway void)syncMetricsIdentifiers;
- (void)handlePushedEvent:(id)a0;
- (id)_newRemoteConnection;
- (id)initWithNotificationCenter:(id)a0;
- (void).cxx_destruct;
- (void)notifyBlockedMessages:(id)a0;
- (void)enqueueWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)manualSyncMetricsIdentifiers;
- (void)beginObservingMessages;

@end
