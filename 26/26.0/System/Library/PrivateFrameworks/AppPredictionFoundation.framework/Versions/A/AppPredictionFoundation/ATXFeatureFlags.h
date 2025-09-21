@interface ATXFeatureFlags : NSObject

@property (class, readonly, nonatomic) BOOL isContextualEngineEnabled;
@property (class, readonly, nonatomic) BOOL isTimelineEnabled;
@property (class, readonly, nonatomic) BOOL isZKWHideContextsEnabled;
@property (class, readonly, nonatomic) BOOL isSportsEnabled;
@property (class, readonly, nonatomic) BOOL isFocusUserSetupPredictionEnabled;
@property (class, readonly, nonatomic) BOOL isDigitalBalanceEnabled;
@property (class, readonly, nonatomic) BOOL isNotificationCategorizationEnabled;
@property (class, readonly, nonatomic) BOOL isBreakthroughDataCollectionEnabled;
@property (class, readonly, nonatomic) BOOL isRecentAppsHeuristicEnabled;
@property (class, readonly, nonatomic) BOOL isSpotlightPlusEnabled;
@property (class, readonly, nonatomic) BOOL widgetSuggestionsEnabled;
@property (class, readonly, nonatomic) BOOL controlCenterSuggestionsEnabled;

@end
