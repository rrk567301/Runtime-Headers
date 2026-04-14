@class NSMutableDictionary, RTDefaultsManager, RPCompanionLinkClient, NSDate, RTBlueSkyDailyMetrics;

@interface RTCompanionLinkManager : RTService

@property BOOL companionAwake;
@property (copy, nonatomic) NSDate *lastPlaceInferenceSyncAttemptDate;
@property (copy, nonatomic) NSDate *lastVisitSyncAttemptDate;
@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (retain, nonatomic) NSMutableDictionary *companionLinkEventHandlerDictionary;
@property (retain, nonatomic) NSMutableDictionary *sleepCacheDictionary;
@property (retain, nonatomic) RTBlueSkyDailyMetrics *dailyBlueSkyMetrics;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;

- (void)onDailyMetricsNotification:(id)a0;
- (void)_setup;
- (void)_onDailyMetricsNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0;
- (void)_handleCompanionAwake;
- (void)_notifyIdentifier:(id)a0 event:(id)a1;
- (void)_registerForEventWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)_sendEvent:(id)a0 identifier:(id)a1 handler:(id /* block */)a2;
- (void)_updatePendingSyncMetrics:(id)a0;
- (void)_updateSyncCachedMetrics:(id)a0;
- (void)_updateSyncMetrics:(id)a0;
- (void)_updateSyncSuccessMetrics:(id)a0 waitRequired:(BOOL)a1;
- (BOOL)companionLinkConnected;
- (id)decodeEvent:(id)a0;
- (id)encodeEvent:(id)a0 identifier:(id)a1 error:(id *)a2;
- (id)initWithCompanionLinkClient:(id)a0 dailyBlueSkyMetrics:(id)a1 defaultsManager:(id)a2;
- (void)registerCompanionLinkEventHandler;
- (void)registerForEventWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)sendEvent:(id)a0 identifier:(id)a1 handler:(id /* block */)a2;

@end
