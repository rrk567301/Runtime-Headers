@class NSHashTable, BMBiomeScheduler, _PASSimpleCoalescingTimer, RTRoutineManager, NSObject, ATXActivitySuggestionFeedbackStream, BPSSink, BMStream, CLCircularRegion;
@protocol OS_dispatch_queue;

@interface ATXActivitySuggestionClient : NSObject {
    BMStream *_inferredModeStream;
    ATXActivitySuggestionFeedbackStream *_feedbackStream;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
    _PASSimpleCoalescingTimer *_coalescingTimer;
    RTRoutineManager *_routineManager;
}

@property (retain) CLCircularRegion *workRegion;
@property (retain) CLCircularRegion *homeRegion;

+ (id)sharedInstance;
+ (Class)DNDModeConfigurationTriggerClassFromATXTrigger:(id)a0;
+ (Class)ATXTriggerClassFromDNDModeConfigurationTrigger:(id)a0;

- (void)currentSuggestionWithCompletionHandler:(id /* block */)a0;
- (void)userDidSeeConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)userDidAcceptTriggerSuggestionWithSuggestionUUID:(id)a0 acceptedTriggers:(id)a1 location:(unsigned long long)a2;
- (id)currentSuggestion;
- (void)userDidAcceptConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)dealloc;
- (void)_logFeedbackEventForTriggerSuggestionWithSuggestionUUID:(id)a0 eventType:(unsigned long long)a1 acceptedTriggers:(id)a2 location:(unsigned long long)a3;
- (void)_logFeedbackEventForActivitySetUpSuggestionWithSuggestionUUID:(id)a0 eventType:(unsigned long long)a1 acceptedTriggers:(id)a2 location:(unsigned long long)a3;
- (id)_activityForEvent:(id)a0;
- (void)_logFeedbackEventForSuggestionUUID:(id)a0 suggestionType:(unsigned long long)a1 eventType:(unsigned long long)a2 acceptedTriggers:(id)a3 location:(unsigned long long)a4;
- (void)_setUpPublisherIfNecessary;
- (void)registerObserver:(id)a0;
- (void)didShowConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (id)DNDModeConfigurationTriggersToATXTriggers:(id)a0;
- (void)_logFeedbackEventForConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 eventType:(unsigned long long)a1 location:(unsigned long long)a2;
- (void)addObserver:(id)a0 sendingInitialChangeNotification:(BOOL)a1;
- (BOOL)_shouldSendAutomationSuggestionForMode:(int)a0;
- (void)userDidRejectTriggerSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)removeObserver:(id)a0;
- (id)previousSuggestion;
- (void)registerObserver:(id)a0 sendingInitialChangeNotification:(BOOL)a1;
- (BOOL)_shouldSendModeTriggerSuggestionAtEndOfModeToLockScreen:(id)a0 modeGlobals:(id)a1;
- (void)userDidRejectActivitySetUpSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (id)init;
- (void)userDidAcceptActivitySuggestion:(id)a0 acceptedTriggers:(id)a1;
- (id)triggersToDNDModeConfigurationTriggers:(id)a0;
- (id)localizedSuggestionReasonForBMInferredModeEvent:(id)a0;
- (void)userDidFinishActivitySetUpWithSuggestionUUID:(id)a0 acceptedTriggers:(id)a1 location:(unsigned long long)a2;
- (BOOL)_shouldSendModeSetUpSuggestionAtEndOfModeToLockScreen:(id)a0 modeGlobals:(id)a1;
- (void)_modeDidChange;
- (void)userDidSeeTriggerSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)_fetchAndCacheLOIs;
- (void)userDidSeeActivitySetUpSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (id)_suggestionWithActivity:(id)a0 modeGlobals:(id)a1;
- (id)initWithRoutineManager:(id)a0;
- (void)didShowTriggerSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (BOOL)_activityIsEligibleForTriggerSuggestion:(id)a0 modeGlobals:(id)a1;
- (void)userDidAcceptActivitySetUpSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void)userDidStopActivity:(id)a0 location:(unsigned long long)a1;
- (void)userDidStartActivity:(id)a0 location:(unsigned long long)a1;
- (BOOL)_activityIsEligibleForSetUpSuggestion:(id)a0 modeGlobals:(id)a1;
- (void)userDidRejectConfiguredActivitySuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (id)suggestionWithUUID:(id)a0;
- (void)userDidRejectActivitySuggestion:(id)a0;
- (void)didShowActivitySuggestion:(id)a0;
- (void)didShowActivitySetUpSuggestionWithSuggestionUUID:(id)a0 location:(unsigned long long)a1;
- (void).cxx_destruct;

@end
