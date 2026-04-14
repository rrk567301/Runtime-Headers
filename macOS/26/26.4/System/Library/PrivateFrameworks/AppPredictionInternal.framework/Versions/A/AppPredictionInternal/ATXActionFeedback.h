@class ATXActionNotificationServer, NSString, ATXAppIntentMonitor, _ATXDataStore, ATXBlendingLayerHyperParameters, ATXRecentActionEngagementCache, ATXActionFeedbackWeights, _ATXAppLaunchHistogramManager;
@protocol ATXPredictionContextBuilderProtocol;

@interface ATXActionFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol> {
    id<ATXPredictionContextBuilderProtocol> _predictionContextBuilder;
    ATXActionFeedbackWeights *_actionFeedbackWeights;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    ATXActionNotificationServer *_notificationServer;
    ATXRecentActionEngagementCache *_recentEngagementCache;
    ATXAppIntentMonitor *_appIntentMonitor;
    _ATXDataStore *_dataStore;
    ATXBlendingLayerHyperParameters *_blendingHyperParameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_assertHistogram:(id)a0 weight:(float)a1;
- (id)initWithPredictionContextBuilder:(id)a0 actionFeedbackWeights:(id)a1 appLaunchHistogramManager:(id)a2 actionNotificationServer:(id)a3 recentEngagmentCache:(id)a4 appIntentMonitor:(id)a5 dataStore:(id)a6 blendingHyperParameters:(id)a7;
- (void)receiveUIFeedbackResult:(id)a0;
- (void)unloadCachedHistograms;
- (void)receiveLockscreenFeedbackWithAction:(id)a0 actionResponse:(id)a1 engagement:(BOOL)a2 triggeredByUserInteraction:(BOOL)a3 currentDate:(id)a4;
- (void)receiveFeedbackWithActionResponse:(id)a0 context:(id)a1;
- (void)logHeuristicFeedbackToPortraitForAction:(id)a0 withActionType:(unsigned short)a1;
- (void)sessionLogWithActionResponse:(id)a0 engagementType:(unsigned long long)a1 context:(id)a2;
- (void)decayCounts;
- (void).cxx_destruct;
- (unsigned long long)_feedbackStageForUIFeedbackResult:(id)a0 engagedSuggestion:(id)a1;
- (id)_scoredActionsFromProactiveSuggestions:(id)a0;
- (id)init;
- (void)logHeuristicFeedback:(id)a0;
- (id)_actionResponseFromUIFeedbackResult:(id)a0 shownActions:(id)a1 rejectedActions:(id)a2 engagedAction:(id)a3 engagedSuggestion:(id)a4;
- (void)applyFinalFeedbackForActionResponse:(id)a0 engagementType:(unsigned long long)a1 context:(id)a2;
- (void)resetData;
- (void)logHeuristicFeedbackToSuggestionsForAction:(id)a0 withActionType:(unsigned short)a1;
- (void)receiveLockscreenFeedbackWithAction:(id)a0 actionResponse:(id)a1 engagement:(BOOL)a2 triggeredByUserInteraction:(BOOL)a3;
- (void)_updateAppLaunchHistogram:(long long)a0 bundleId:(id)a1 context:(id)a2 weight:(float)a3;
- (id)clientModelIds;
- (void)_updateAppLaunchCategoricalHistogram:(long long)a0 bundleId:(id)a1 category:(id)a2 context:(id)a3 weight:(float)a4;

@end
