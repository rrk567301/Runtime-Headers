@class NSTimer, NSHashTable, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATXDigestOnboardingSuggestionClient : NSObject {
    NSHashTable *_observers;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_trigger;
    BOOL _hasRegisteredKVO;
}

+ (id)sharedInstance;
+ (void)removeRandomizedSelectionForDigestOnboardingSuggestion;
+ (void)resetDigestOnboardingSuggestionsAtHour:(id)a0 minute:(id)a1;
+ (void)resetRandomizedSelectionForDigestOnboardingSuggestion;
+ (void)changeNumPreviousDaysToCheckForNotificationProblemToNumDays:(unsigned long long)a0;

- (void)clientDidRejectOnboardingSuggestion;
- (void)_registerForTriggerOnMainQueueAtHour:(long long)a0 minute:(long long)a1;
- (void)registerForOnboardingSuggestions;
- (void)userAcceptedDigestOnboardingSuggestion:(id)a0;
- (void)unregisterForOnboardingSuggestions;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setProbabilityOfShowingDigestOnboardingToUser;
- (void)_registerForLocaleChangeOnMainQueue;
- (void)_unregisterForKVOChangesOnMainQueue;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueueGivenNumberOfActiveNotifications:(unsigned long long)a0 numberOfUniqueBundleIds:(unsigned long long)a1 minActive:(unsigned long long)a2 minUnique:(unsigned long long)a3;
- (id)notificationStreamPublisherForStartDate:(id)a0;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueue;
- (BOOL)hasNotificationProblemForPreviousNumDays:(long long)a0;
- (void)_registerForKVOChangesOnMainQueue;
- (void)_unregisterForLocaleChangeOnMainQueue;
- (void)_invalidateTriggerOnMainQueue;
- (id /* block */)_notificationStreamFilterBlock;
- (void)_handleLocaleChange;
- (void)averageNumberOfNotifications:(id /* block */)a0;
- (id)init;
- (void)_registerForOnboardingSuggestionOnMainQueueWithThresholdForShowingDigestOnboardingSuggestionToSeedUsers:(double)a0 thresholdForShowingDigestOnboardingSuggestion:(double)a1;
- (void)dealloc;

@end
