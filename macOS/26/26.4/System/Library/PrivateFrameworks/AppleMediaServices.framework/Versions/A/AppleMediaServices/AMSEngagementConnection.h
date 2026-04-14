@class NSNotificationCenter, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSEngagementConnection : NSObject <AMSEngagementClientProtocol, AMSEngagementServiceProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ errorHandler;

- (void)contentInfoForApp:(id)a0 cacheKey:(id)a1 version:(id)a2 reply:(id /* block */)a3;
- (id)_makeRemoteConnectionInterface;
- (id)_newRemoteConnection;
- (void)treatmentStoreServiceWithReply:(id /* block */)a0;
- (void)syncWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithNotificationCenter:(id)a0;
- (id)proxy;
- (void)enqueueWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_removeRemoteConnection;
- (oneway void)syncMetricsIdentifiers;
- (oneway void)fetchMetricsIdentifiers;
- (void)treatmentsDidSyncronize;
- (void).cxx_destruct;
- (void)manualSyncMetricsIdentifiers;
- (void)handlePushedEvent:(id)a0;
- (void)notifyBlockedMessages:(id)a0;
- (id)_makeExportedClientConnectionInterface;
- (void)beginObservingMessages;
- (void)dealloc;

@end
