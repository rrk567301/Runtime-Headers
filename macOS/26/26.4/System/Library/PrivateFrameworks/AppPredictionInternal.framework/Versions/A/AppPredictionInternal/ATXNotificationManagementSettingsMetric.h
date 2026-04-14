@class NSNumber;

@interface ATXNotificationManagementSettingsMetric : _ATXCoreAnalyticsMetric

@property (nonatomic) unsigned long long numDailyDigests;
@property (nonatomic) unsigned long long numDigestApps;
@property (nonatomic) unsigned long long numConfiguredModes;
@property (nonatomic) BOOL hasOfferedDigest;
@property (nonatomic) BOOL hasSetupDigest;
@property (retain, nonatomic) NSNumber *areSummariesEnabled;
@property (retain, nonatomic) NSNumber *areHighlightsEnabled;

- (id)metricName;
- (void).cxx_destruct;
- (id)description;
- (id)coreAnalyticsDictionary;

@end
