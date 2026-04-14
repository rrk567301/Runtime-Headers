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

- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (id /* block */)callbackForAnchor:(id)a0;
- (id)currentDuetEventForAnchor:(id)a0;
- (void)sendSuggestionsToBlendingForEachConfigImmediately;
- (void)handleAnchorNotificationForAnchor:(id)a0;
- (id)initWithContextHelper:(id)a0 configs:(id)a1 defaults:(id)a2;
- (id)lastCacheUpdateDateForConfig:(id)a0;
- (void)_syncForTests;
- (void)registerForSupportedAnchorNotificatons;
- (void)setCacheUpdateDate:(id)a0 forConfig:(id)a1;
- (void)handleLOIEntranceNotification;
- (id)supportedAnchorsForNotifications;
- (void).cxx_destruct;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void)start;
- (void)sendSuggestionsToBlendingForEachConfigIfCacheIsOlderThan:(double)a0;
- (void)handleLOIExitNotification;
- (id)init;
- (void)sendSuggestionsToBlendingForConfig:(id)a0;
- (void)unregisterAnchorEventListeners;
- (id)notificationIdentifierForAnchor:(id)a0;
- (void)registerAnchorEventNotificationsForAnchor:(id)a0;
- (void)handleMicrolocationVisitNotification;
- (void)dealloc;

@end
