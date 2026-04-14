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
+ (void)resetRandomizedSelectionForDigestOnboardingSuggestion;
+ (void)resetDigestOnboardingSuggestionsAtHour:(id)a0 minute:(id)a1;
+ (void)changeNumPreviousDaysToCheckForNotificationProblemToNumDays:(unsigned long long)a0;

- (void)_unregisterForKVOChangesOnMainQueue;
- (void)averageNumberOfNotifications:(id /* block */)a0;
- (BOOL)hasNotificationProblemForPreviousNumDays:(long long)a0;
- (id /* block */)_notificationStreamFilterBlock;
- (void)_unregisterForLocaleChangeOnMainQueue;
- (void)_handleLocaleChange;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueue;
- (void)clientDidRejectOnboardingSuggestion;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueueGivenNumberOfActiveNotifications:(unsigned long long)a0 numberOfUniqueBundleIds:(unsigned long long)a1 minActive:(unsigned long long)a2 minUnique:(unsigned long long)a3;
- (void)_registerForKVOChangesOnMainQueue;
- (void)userAcceptedDigestOnboardingSuggestion:(id)a0;
- (void)_registerForLocaleChangeOnMainQueue;
- (void).cxx_destruct;
- (void)_registerForOnboardingSuggestionOnMainQueueWithThresholdForShowingDigestOnboardingSuggestionToSeedUsers:(double)a0 thresholdForShowingDigestOnboardingSuggestion:(double)a1;
- (id)init;
- (void)registerForOnboardingSuggestions;
- (id)notificationStreamPublisherForStartDate:(id)a0;
- (void)unregisterForOnboardingSuggestions;
- (void)_setProbabilityOfShowingDigestOnboardingToUser;
- (void)_registerForTriggerOnMainQueueAtHour:(long long)a0 minute:(long long)a1;
- (void)registerObserver:(id)a0;
- (void)_invalidateTriggerOnMainQueue;
- (void)dealloc;

@end
