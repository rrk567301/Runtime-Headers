@class NSArray, ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXCandidateRelevanceModelServerCoordinator : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSArray *_configs;
    NSUserDefaults *_defaults;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}

+ (id)sharedInstance;
+ (id)userDefaultsKeyForLastCacheUpdateDateForConfig:(id)a0;

- (id)supportedAnchorsForNotifications;
- (void)sendSuggestionsToBlendingForEachConfigImmediately;
- (void)start;
- (void)dealloc;
- (void)handleLOIExitNotification;
- (void)sendSuggestionsToBlendingForConfig:(id)a0;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (id)notificationIdentifierForAnchor:(id)a0;
- (id)init;
- (void)sendSuggestionsToBlendingForEachConfigIfCacheIsOlderThan:(double)a0;
- (void)registerForSupportedAnchorNotificatons;
- (id)lastCacheUpdateDateForConfig:(id)a0;
- (void)handleLOIEntranceNotification;
- (void)registerAnchorEventNotificationsForAnchor:(id)a0;
- (id /* block */)callbackForAnchor:(id)a0;
- (void)unregisterAnchorEventListeners;
- (id)currentDuetEventForAnchor:(id)a0;
- (void)handleMicrolocationVisitNotification;
- (id)initWithContextHelper:(id)a0 configs:(id)a1 defaults:(id)a2;
- (void)_syncForTests;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void).cxx_destruct;
- (void)handleAnchorNotificationForAnchor:(id)a0;
- (void)setCacheUpdateDate:(id)a0 forConfig:(id)a1;

@end
