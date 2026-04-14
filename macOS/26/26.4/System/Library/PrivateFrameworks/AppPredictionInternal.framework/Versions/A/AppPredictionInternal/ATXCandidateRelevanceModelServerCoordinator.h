@class NSArray, NSUUID, ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXCandidateRelevanceModelServerCoordinator : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSArray *_configs;
    NSUserDefaults *_defaults;
    ATXTimeBucketedRateLimiter *_rateLimiter;
    NSUUID *_microLocationSchedulerToken;
}

+ (id)sharedInstance;
+ (id)userDefaultsKeyForLastCacheUpdateDateForConfig:(id)a0;

- (void)registerForSupportedAnchorNotificatons;
- (void)_syncForTests;
- (id)notificationIdentifierForAnchor:(id)a0;
- (id)supportedAnchorsForNotifications;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (id)initWithContextHelper:(id)a0 configs:(id)a1 defaults:(id)a2;
- (void)sendSuggestionsToBlendingForEachConfigIfCacheIsOlderThan:(double)a0;
- (id)currentDuetEventForAnchor:(id)a0;
- (void)handleMicrolocationVisitNotification;
- (void)handleAnchorNotificationForAnchor:(id)a0;
- (void)handleLOIExitNotification;
- (void).cxx_destruct;
- (void)sendSuggestionsToBlendingForConfig:(id)a0;
- (void)unregisterAnchorEventListeners;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (id)lastCacheUpdateDateForConfig:(id)a0;
- (void)setCacheUpdateDate:(id)a0 forConfig:(id)a1;
- (id)init;
- (id /* block */)callbackForAnchor:(id)a0;
- (void)start;
- (void)sendSuggestionsToBlendingForEachConfigImmediately;
- (void)registerAnchorEventNotificationsForAnchor:(id)a0;
- (void)handleLOIEntranceNotification;
- (void)dealloc;

@end
