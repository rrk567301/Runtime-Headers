@interface PXMemoriesFeedSettings : PXSettings

@property (nonatomic) long long dataSourceType;
@property (nonatomic) char useSlowAnimations;
@property (nonatomic) char forceReloadAfterRefresh;
@property (nonatomic) char disableRoundedOverlays;
@property (nonatomic) char rankMemoriesByRelevanceScore;
@property (nonatomic) char displayContentDuringGraphRebuild;
@property (nonatomic) char alwaysShowOnboarding;
@property (nonatomic) long long memoryGroupingMethod;
@property (nonatomic) double memoryGroupingInterval;
@property (nonatomic) double additionalContentThreshold;
@property (nonatomic) unsigned long long groupsPerBatch;
@property (nonatomic) long long favoriteMemoriesSortOrder;
@property (nonatomic) long long sharingBehavior;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)_postNotificationAction;
+ (id)_resetRejectedMemories;

- (void)setDefaultValues;
- (id)parentSettings;
- (long long)_defaultDataSourceType;

@end
