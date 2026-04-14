@class NSObject, NSString, NetworkAnalyticsEngine, NSMutableDictionary, NSMutableArray, FlowAnalyticsEngine, NOIAnalyticsEngine;
@protocol OS_dispatch_queue;

@interface ServiceImpl : NSObject <NSXPCListenerDelegate, SFExtendedServiceInterface> {
    FlowAnalyticsEngine *f_engine;
    NetworkAnalyticsEngine *n_engine;
    NOIAnalyticsEngine *noi_engine;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *lastAllowedRequests;
    id featureReadyObserver;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } rate_limit_lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } service_ready_lock;
    BOOL _serviceActive;
    NSMutableArray *_pendingXPCConnections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getExpertSystemsStatus:(id /* block */)a0;
- (void)getPreferCellOverWiFiWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)shutdown;
- (void)setUsageOption:(id)a0 reply:(id /* block */)a1;
- (void)sendPayloadToDaemonWithReply:(id /* block */)a0;
- (void)cleanupNDFDeviceRecordsWithReply:(id /* block */)a0;
- (void)performAppExperiencePeriodicTasksWithReply:(id /* block */)a0;
- (void)getNetworkBitmapsWithNames:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2 options:(id)a3 reply:(id /* block */)a4;
- (void)ndfClientCheckInWithReply:(id /* block */)a0;
- (void)clientTransactionsRelease;
- (void)ndfClientSubscriptionIsActive:(BOOL)a0 reply:(id /* block */)a1;
- (void)performAppTrackingPeriodicTasksWithReply:(id /* block */)a0;
- (void)postCoreAnalyticsEvent:(id)a0 forEventName:(id)a1 reply:(id /* block */)a2;
- (void)subscribeToNOIsFor:(id)a0 orPredicate:(id)a1 options:(id)a2;
- (void)waitForOSLogErrorSymptomWithReply:(id /* block */)a0;
- (BOOL)assertEntitlement:(id)a0 entitlement:(unsigned long long)a1 orWaiveOnIntent:(id)a2;
- (void)fetchNDFDeviceRecordsWithReply:(id /* block */)a0;
- (void)setOption:(id)a0 inScopes:(id)a1 reply:(id /* block */)a2;
- (void)performPersistentStoreHealthCheckWithReply:(id /* block */)a0;
- (void)resetUsageFor:(id)a0 nameKind:(id)a1 reply:(id /* block */)a2;
- (void)performAppPeriodicTasksWithReply:(id /* block */)a0;
- (void)identifierForUUID:(id)a0 reply:(id /* block */)a1;
- (id)initWithQueue:(id)a0 noiEngine:(id)a1 isHelper:(BOOL)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)retrieveActivityMetrics:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (void)listNDFDeviceObjectsWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)pingEndpoints:(id)a0 reply:(id /* block */)a1;
- (void)createSnapshotFor:(id)a0 pred:(id)a1 actions:(id)a2 reply:(id /* block */)a3;
- (void)performQueryOnEntity:(id)a0 fetchRequestProperties:(id)a1 pred:(id)a2 sort:(id)a3 actions:(id)a4 reply:(id /* block */)a5;
- (void)sendMessage:(id)a0 toEndpoints:(id)a1 reply:(id /* block */)a2;
- (void)triggerSendPayloadToDaemonWithInterval:(long long)a0 leeway:(long long)a1 reply:(id /* block */)a2;
- (id)nwEndpointArrayFromXPCObject:(id)a0;
- (void).cxx_destruct;
- (void)donateBiomeEventForEdgeSelectionWithPrefix:(id)a0 interfaceType:(id)a1 radioType:(id)a2 radioBand:(id)a3 latitude:(double)a4 longitude:(double)a5 reply:(id /* block */)a6;
- (void)performAppEndpointTrackingPeriodicTasksWithReply:(id /* block */)a0;
- (void)_cacheEntitlementValuesForConnection:(id)a0;
- (void)unsubscribeToNOIs:(id)a0;
- (void)inquireNOIFor:(id)a0 orPredicate:(id)a1 requestedKeys:(id)a2 options:(id)a3 reply:(id /* block */)a4;
- (void)performQueryOnEntity:(id)a0 pred:(id)a1 sort:(id)a2 actions:(id)a3 reply:(id /* block */)a4;
- (void)networkRestrictsMulticastTrafficWithReply:(id /* block */)a0;
- (void)performActionWithOptions:(id)a0 inScopes:(id)a1 reply:(id /* block */)a2;
- (void)remotePingToAddress:(id)a0 interface:(unsigned long long)a1 interval:(double)a2 count:(long long)a3 timeout:(double)a4 reply:(id /* block */)a5;
- (void)assertFactString:(id)a0 module:(id)a1 asSymptom:(BOOL)a2 reply:(id /* block */)a3;
- (void)getOption:(id)a0 inScopes:(id)a1 reply:(id /* block */)a2;
- (void)setPreferCellOverWiFiWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)resetDataFor:(id)a0 nameKind:(id)a1 inScopes:(id)a2 reply:(id /* block */)a3;
- (void)updatedNDFDeviceRecords:(id)a0 reply:(id /* block */)a1;

@end
