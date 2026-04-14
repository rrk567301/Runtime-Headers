@class NSObject, NSString, NetworkAnalyticsEngine, NetDomainsHandler, NSMutableDictionary, FlowAnalyticsEngine, NOIAnalyticsEngine;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ServiceImpl : NSObject <NSXPCListenerDelegate, ExtendedServiceInterface> {
    FlowAnalyticsEngine *f_engine;
    NetworkAnalyticsEngine *n_engine;
    NOIAnalyticsEngine *noi_engine;
    NetDomainsHandler *netDomainsHandler;
    NSObject<OS_dispatch_semaphore> *svc_sema;
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *lastAllowedRequests;
    id featureReadyObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithQueue:(id)a0;
- (void)shutdown;
- (void)performQueryOnEntity:(id)a0 pred:(id)a1 sort:(id)a2 actions:(id)a3 reply:(id /* block */)a4;
- (void)setOption:(id)a0 inScopes:(id)a1 reply:(id /* block */)a2;
- (void)getOption:(id)a0 inScopes:(id)a1 reply:(id /* block */)a2;
- (void)resetDataFor:(id)a0 nameKind:(id)a1 inScopes:(id)a2 reply:(id /* block */)a3;
- (void)createSnapshotFor:(id)a0 pred:(id)a1 actions:(id)a2 reply:(id /* block */)a3;
- (void)subscribeToNOIsFor:(id)a0 orPredicate:(id)a1 options:(id)a2;
- (void)inquireNOIFor:(id)a0 orPredicate:(id)a1 requestedKeys:(id)a2 options:(id)a3 reply:(id /* block */)a4;
- (void)unsubscribeToNOIs:(id)a0;
- (void)identifierForUUID:(id)a0 reply:(id /* block */)a1;
- (void)performPersistentStoreHealthCheckWithReply:(id /* block */)a0;
- (void)setUsageOption:(id)a0 reply:(id /* block */)a1;
- (void)resetUsageFor:(id)a0 nameKind:(id)a1 reply:(id /* block */)a2;
- (void)getNetworkBitmapsWithNames:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2 Reply:(id /* block */)a3;
- (void)waitForOSLogErrorSymptomWithReply:(id /* block */)a0;
- (void)assertFactString:(id)a0 module:(id)a1 asSymptom:(BOOL)a2 reply:(id /* block */)a3;
- (void)postAWDEvent:(id)a0 reply:(id /* block */)a1;
- (BOOL)_checkRateLimitForConnection:(id)a0;
- (void)performQueryOnEntity:(id)a0 fetchRequestProperties:(id)a1 pred:(id)a2 sort:(id)a3 actions:(id)a4 reply:(id /* block */)a5;
- (void)performActionWithOptions:(id)a0 inScopes:(id)a1 reply:(id /* block */)a2;
- (void)performAppPeriodicTasksWithReply:(id /* block */)a0;
- (void)performAppTrackingPeriodicTasksWithReply:(id /* block */)a0;
- (void)performAppExperiencePeriodicTasksWithReply:(id /* block */)a0;
- (void)performAppEndpointTrackingPeriodicTasksWithReply:(id /* block */)a0;
- (void)clientTransactionsRelease;
- (BOOL)assertEntitlement:(id)a0 entitlement:(unsigned long long)a1 orWaiveOnIntent:(id)a2;
- (void)_serviceReadyCheckPoint;
- (void)_cacheEntitlementValuesForConnection:(id)a0;
- (BOOL)_serviceReady;
- (void)_serviceReadyCheckPointRelease;

@end
