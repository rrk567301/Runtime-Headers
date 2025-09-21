@interface ATXFeatureFlags : NSObject

@property (class, readonly, nonatomic) char isContextualEngineEnabled;
@property (class, readonly, nonatomic) char isTimelineEnabled;
@property (class, readonly, nonatomic) char isZKWHideContextsEnabled;
@property (class, readonly, nonatomic) char isSportsEnabled;
@property (class, readonly, nonatomic) char isFocusUserSetupPredictionEnabled;
@property (class, readonly, nonatomic) char isDigitalBalanceEnabled;
@property (class, readonly, nonatomic) char isNotificationCategorizationEnabled;
@property (class, readonly, nonatomic) char isBreakthroughDataCollectionEnabled;
@property (class, readonly, nonatomic) char isRecentAppsHeuristicEnabled;

@end
