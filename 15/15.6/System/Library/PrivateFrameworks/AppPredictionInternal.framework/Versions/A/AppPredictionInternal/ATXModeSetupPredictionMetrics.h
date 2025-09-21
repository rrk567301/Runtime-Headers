@class NSString, NSNumber;

@interface ATXModeSetupPredictionMetrics : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *modeName;
@property (nonatomic) char modeIsCreated;
@property (nonatomic) char modeWasCreatedWithin7Days;
@property (nonatomic) char modeWasCreatedToday;
@property (nonatomic) char modeHasActivatedWithin7Days;
@property (nonatomic) char modeHasActivatedToday;
@property (nonatomic) char wasOfferedDigestOnboardingSuggestion;
@property (nonatomic) char hasSetupDigestThroughOnboardingSuggestion;
@property (nonatomic) char isDigestCurrentlyEnabled;
@property (nonatomic) char modeHasLinkedPoster;
@property (nonatomic) char modeHasSmartActivationEnabled;
@property (copy, nonatomic) NSNumber *globalAllPagesFolderCountBucket;
@property (copy, nonatomic) NSNumber *globalAllPagesWidgetCountBucket;
@property (copy, nonatomic) NSNumber *homePageFolderCountBucket;
@property (copy, nonatomic) NSNumber *homePageWidgetCountBucket;
@property (copy, nonatomic) NSNumber *globalAppLaunchCount7Days;
@property (copy, nonatomic) NSNumber *globalAppLaunchCountToday;
@property (copy, nonatomic) NSNumber *modeAppLaunchCountBasedOnGlobalPriors7Days;
@property (copy, nonatomic) NSNumber *modeAppLaunchCountBasedOnGlobalPriorsToday;
@property (copy, nonatomic) NSNumber *modeInferredDuration7Days;
@property (copy, nonatomic) NSNumber *modeInferredDurationToday;
@property (copy, nonatomic) NSNumber *modeInferredCount7Days;
@property (copy, nonatomic) NSNumber *modeInferredCountToday;
@property (copy, nonatomic) NSNumber *modeTurnedOnCount7Days;
@property (copy, nonatomic) NSNumber *modeTurnedOnCountToday;
@property (copy, nonatomic) NSNumber *modeTurnedOnDuration7Days;
@property (copy, nonatomic) NSNumber *modeTurnedOnDurationToday;
@property (copy, nonatomic) NSNumber *modeNotificationsClearedCount7Days;
@property (copy, nonatomic) NSNumber *modeNotificationsClearedCountToday;
@property (copy, nonatomic) NSNumber *globalNotificationsClearedCount7Days;
@property (copy, nonatomic) NSNumber *globalNotificationsClearedCountToday;
@property (copy, nonatomic) NSNumber *modeNotificationsCount7Days;
@property (copy, nonatomic) NSNumber *modeNotificationsCountToday;
@property (copy, nonatomic) NSNumber *globalNotificationsCount7Days;
@property (copy, nonatomic) NSNumber *globalNotificationsCountToday;
@property (copy, nonatomic) NSNumber *modeWeightedAppLaunchCountBasedOnGlobalPriors7Days;
@property (copy, nonatomic) NSNumber *modeWeightedAppLaunchCountBasedOnGlobalPriorsToday;
@property (copy, nonatomic) NSNumber *globalPosterConfigurationsCount;
@property (copy, nonatomic) NSNumber *globalAppInterruptionsCount7Days;
@property (copy, nonatomic) NSNumber *globalAppInterruptionsCountToday;
@property (copy, nonatomic) NSNumber *modeAppInterruptionsCountInModeInferred7Days;
@property (copy, nonatomic) NSNumber *modeAppInterruptionsCountInModeInferredToday;
@property (copy, nonatomic) NSNumber *modeAppInterruptionsCountBasedOnAllowListOfInferredMode7Days;
@property (copy, nonatomic) NSNumber *modeAppInterruptionsCountBasedOnAllowListOfInferredModeToday;
@property (copy, nonatomic) NSNumber *modeAppInterruptionsCountBasedOnDenyListOfInferredMode7Days;
@property (copy, nonatomic) NSNumber *modeAppInterruptionsCountBasedOnDenyListOfInferredModeToday;
@property (copy, nonatomic) NSString *trialTreatmentId;
@property (copy, nonatomic) NSString *trialExperimentId;
@property (copy, nonatomic) NSNumber *trialDeploymentId;

- (id)description;
- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end
