@class NSString, ATXSpotlightUIBiomeStream, ATXSuggestionSearchResult, PETGoalConversionEventTracker, NSMutableSet, ATXEngagementRecordManager, NSObject, ATXActionPredictionClient, NSMutableArray;
@protocol ATXPETEventTracker2Protocol, ATXSearchFeedbackListenerTarget;

@interface ATXSearchFeedbackListener : NSObject <SFFeedbackListener> {
    NSObject<ATXSearchFeedbackListenerTarget> *_target;
    ATXSpotlightUIBiomeStream *_spotlightUIBiomeStream;
    PETGoalConversionEventTracker *_apAppPredictionsShownTracker;
    struct { struct { unsigned long long lastEventTimestamp; } resultsDidBecomeVisible; struct { unsigned long long lastEventTimestamp; } didStartSearch; struct { unsigned long long lastEventTimestamp; } searchViewDidAppear; struct { unsigned long long lastEventTimestamp; } searchViewDidDisappear; struct { unsigned long long lastEventTimestamp; } didEngageResult; struct { unsigned long long lastEventTimestamp; } didEngageCardSection; } _debounce;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXActionPredictionClient *_actionPredictionClient;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSString *_currentQuery;
    char _didSearchDuringSession;
    NSMutableSet *_visibleActionUUIDs;
    NSMutableSet *_visibleAppUUIDs;
    NSMutableSet *_visibleAppBundleIds;
    NSMutableSet *_visibleActionContextIdentifiers;
    ATXSuggestionSearchResult *_currentResultCard;
    NSString *_appBlendingCacheId;
    NSString *_actionBlendingCacheId;
    char _hasSeenSearchViewDidAppear;
    unsigned long long _viewAppearEvent;
    NSMutableArray *_queuedEvents;
    char _currentSessionHasEngagement;
    char _previousSessionHadEngagement;
}

@property (nonatomic) char shouldDebounce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_resetState;
- (void)didStartSearch:(id)a0;
- (void)cardViewDidDisappear:(id)a0;
- (void)didEngageCardSection:(id)a0;
- (void)didEngageResult:(id)a0;
- (void)didPerformCommand:(id)a0;
- (void)resultsDidBecomeVisible:(id)a0;
- (void)searchViewDidAppear:(id)a0;
- (void)searchViewDidDisappear:(id)a0;
- (char)_isDuplicateEventWithState:(struct { unsigned long long x0; } *)a0 timestamp:(unsigned long long)a1 method:(SEL)a2;
- (void)_logAppPredictionsShown;
- (void)_logCAActionWithIdentifier:(id)a0 suggestion:(id)a1 eventType:(long long)a2;
- (void)_logCAActionWithIdentifiers:(id)a0 eventType:(long long)a1;
- (void)_sendSpotlightUIEvent:(id)a0;
- (void)_sendSpotlightUIStreamAppEngageWithFeedback:(id)a0;
- (void)_sendSpotlightUIStreamEventType:(long long)a0 searchResult:(id)a1;
- (id)_suggestionSubTypeStringWithResultType:(int)a0;
- (void)_tryRemoveLockscreenActionPredictionMatchingSuggestion:(id)a0;
- (id)bundleIdentifierFromResult:(id)a0;
- (id)initWithTarget:(id)a0 spotlightUIBiomeStream:(id)a1 engagementRecordManager:(id)a2 actionClient:(id)a3 tracker:(id)a4;
- (void)logEngagedSpotlightActionSuggestion:(id)a0 contextActionIdentifier:(id)a1;
- (void)sendUpdateNotification;
- (void)writeSpotlightEvent:(id)a0 isViewAppearEvent:(char)a1;

@end
