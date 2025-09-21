@class NSMutableDictionary, NSString, NSDictionary, TPSEventsHistoryController, TPSTipStatusController, NSObject, TPSEventsProviderManager;
@protocol OS_dispatch_queue, TPSDiscoverabilityControllerDelegate;

@interface TPSDiscoverabilityController : NSObject <TPSDEventsProviderManagerDelegate> {
    TPSEventsProviderManager *_eventsProviderManager;
    TPSEventsHistoryController *_eventsHistoryController;
    NSMutableDictionary *_contextualInfoMap;
    NSObject<OS_dispatch_queue> *_eventResultsProcessingQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contextualInfoQueue;
@property (weak, nonatomic) id<TPSDiscoverabilityControllerDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *contextualInfoMap;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;
@property (readonly, copy, nonatomic) TPSEventsHistoryController *eventsHistoryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextualInfoMap;
+ (void)removeContextualInfoCache;

- (void)_removeCacheData;
- (id)initWithTipStatusController:(id)a0;
- (BOOL)updateDesiredOutcomeConditionForObserverIdentifiers:(id)a0;
- (BOOL)_updateTriggerConditionForObserverIdentifiers:(id)a0;
- (void)removeContextualInfoForIdentifiers:(id)a0;
- (id)_matchingIdentifiersForConditionWithType:(unsigned long long)a0 forObserverIdentifiers:(id)a1 hasUpdates:(BOOL *)a2;
- (void)dataProviderManager:(id)a0 didFinishQueryWithResults:(id)a1 type:(long long)a2;
- (void)removeAllContextualInfos;
- (void)_updateContextualInfoMapCache;
- (void)processEventProviderQueryResults:(id)a0 type:(long long)a1;
- (id)init;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifiers:(id)a0;
- (BOOL)isContextualInfoExistForIdentifier:(id)a0;
- (void)contextualEligibilityWithTipIdentifiers:(id)a0 tipsDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 experimentCampChangesToAll:(BOOL)a3;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)a0;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)a0 updateCache:(BOOL)a1;
- (void)updateContentViewedForIdentifier:(id)a0;
- (void)markHintIneligibleForIdentifiers:(id)a0 context:(id)a1 reason:(long long)a2;
- (id)contextualInfoMap;
- (id)contextualInfoIdentifiers;
- (void)_cleanupContextualInfoMap;
- (BOOL)_isConditionMet:(id)a0 hasUpdates:(BOOL *)a1 forIdentifier:(id)a2;
- (void)addHintDisplayedForIdentifier:(id)a0 context:(id)a1;
- (void)markHintIneligibleForIdentifiers:(id)a0 bundleID:(id)a1 context:(id)a2 reason:(long long)a3;
- (id)contextualInfoForIdentifier:(id)a0;
- (void)updateHintWouldHaveBeenDisplayedForIdentifier:(id)a0 context:(id)a1;
- (void)queryCurrentEvents;
- (void)updateIdentifier:(id)a0 withContextualInfo:(id)a1;
- (void).cxx_destruct;
- (void)_updateCacheData;
- (void)dataProviderManager:(id)a0 didReceiveCallbackWithResult:(id)a1 type:(long long)a2;

@end
