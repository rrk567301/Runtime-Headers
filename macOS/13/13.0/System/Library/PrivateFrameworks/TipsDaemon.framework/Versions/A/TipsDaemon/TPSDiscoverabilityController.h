@class NSString, NSMutableDictionary, NSDictionary, TPSEventsHistoryController, TPSTipStatusController, TPSEventsProviderManager, NSObject, NSMutableSet;
@protocol OS_dispatch_queue, TPSDiscoverabilityControllerDelegate;

@interface TPSDiscoverabilityController : NSObject <TPSDEventsProviderManagerDelegate> {
    long long _overrideHintMaxDisplayedCount;
    NSMutableSet *_registeredEventIdentifiers;
    TPSEventsProviderManager *_eventsProviderManager;
    TPSEventsHistoryController *_eventsHistoryController;
    NSMutableDictionary *_contextualInfoMap;
    NSObject<OS_dispatch_queue> *_eventRegistrationQueue;
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

+ (void)removeContextualInfoCache;
+ (id)contextualInfoMap;

- (id)init;
- (void).cxx_destruct;
- (void)dataProviderManager:(id)a0 didFinishQueryWithResults:(id)a1 type:(long long)a2;
- (void)dataProviderManager:(id)a0 didReceiveCallbackWithResult:(id)a1 type:(long long)a2;
- (void)addHintDisplayedForIdentifier:(id)a0 context:(id)a1;
- (id)initWithTipStatusController:(id)a0;
- (id)contextualInfoForIdentifier:(id)a0;
- (id)contextualInfoMap;
- (id)contextualInfoIdentifiers;
- (void)updateIdentifier:(id)a0 withContextualInfo:(id)a1;
- (void)removeContextualInfoForIdentifiers:(id)a0;
- (void)removeAllContextualInfos;
- (void)_cleanupContextualInfoMap;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifiers:(id)a0;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)a0;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)a0 updateCache:(BOOL)a1;
- (void)contextualEligibilityWithTipIdentifiers:(id)a0 tipsDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 experimentCampChangesToAll:(BOOL)a3;
- (void)queryCurrentEvents;
- (void)processEventProviderQueryResults:(id)a0 type:(long long)a1;
- (void)_updateCacheData;
- (void)_removeCacheData;
- (void)_updateRegisteredEventIdentifiers;
- (void)_updateContextualInfoMapCache;
- (BOOL)isContextualInfoExistForIdentifier:(id)a0;
- (BOOL)isContentHintDisplayMaxDisplayedCountExceededForIdentifier:(id)a0;
- (void)markHintIneligibleForIdentifiers:(id)a0 context:(id)a1 reason:(long long)a2;
- (void)markHintIneligibleForIdentifiers:(id)a0 bundleID:(id)a1 context:(id)a2 reason:(long long)a3;
- (id)discoverabilityTipWithMetadata:(id)a0 contentDictionary:(id)a1 preconditions:(id)a2;
- (BOOL)updateDesiredOutcomeConditionForObserverIdentifers:(id)a0;
- (BOOL)_updateTriggerConditionForObserverIdentifiers:(id)a0;
- (id)_matchingIdentifiersForConditionWithType:(unsigned long long)a0 forObserverIdentifiers:(id)a1 hasUpdates:(BOOL *)a2;
- (BOOL)_isConditionMet:(id)a0 hasUpdates:(BOOL *)a1 forIdentifier:(id)a2;
- (id)monitoringEventsForContentID:(id)a0;
- (void)_registerWakingCallbackForContextualInfo:(id)a0;
- (void)_reconcileRegisteredEvents;
- (long long)customizationIDForContentID:(id)a0;
- (void)updateContentViewedForIdentifier:(id)a0;
- (void)updateHintWouldHaveBeenDisplayedForIdentifier:(id)a0 context:(id)a1;
- (void)updateHintDismissedForIdentifier:(id)a0 dismissType:(id)a1 context:(id)a2;

@end
