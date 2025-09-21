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
+ (void)resetRandomizedSelectionForDigestOnboardingSuggestion;
+ (void)removeRandomizedSelectionForDigestOnboardingSuggestion;
+ (void)resetDigestOnboardingSuggestionsAtHour:(id)a0 minute:(id)a1;
+ (void)changeNumPreviousDaysToCheckForNotificationProblemToNumDays:(unsigned long long)a0;

- (id)notificationStreamPublisherForStartDate:(id)a0;
- (void)averageNumberOfNotifications:(id /* block */)a0;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueue;
- (void)_registerForKVOChangesOnMainQueue;
- (void)dealloc;
- (BOOL)hasNotificationProblemForPreviousNumDays:(long long)a0;
- (id /* block */)_notificationStreamFilterBlock;
- (void)_registerForLocaleChangeOnMainQueue;
- (void)registerObserver:(id)a0;
- (void)_invalidateTriggerOnMainQueue;
- (void)userAcceptedDigestOnboardingSuggestion:(id)a0;
- (id)init;
- (void)_setProbabilityOfShowingDigestOnboardingToUser;
- (void)clientDidRejectOnboardingSuggestion;
- (void)_registerForOnboardingSuggestionOnMainQueueWithThresholdForShowingDigestOnboardingSuggestionToSeedUsers:(double)a0 thresholdForShowingDigestOnboardingSuggestion:(double)a1;
- (void)_handleLocaleChange;
- (void)_unregisterForKVOChangesOnMainQueue;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_registerForTriggerOnMainQueueAtHour:(long long)a0 minute:(long long)a1;
- (void)_suggestDigestOnboardingIfApplicableOnMainQueueGivenNumberOfActiveNotifications:(unsigned long long)a0 numberOfUniqueBundleIds:(unsigned long long)a1 minActive:(unsigned long long)a2 minUnique:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)registerForOnboardingSuggestions;
- (void)_unregisterForLocaleChangeOnMainQueue;
- (void)unregisterForOnboardingSuggestions;

@end
