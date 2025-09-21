@interface ATXNotificationManagementSettingsMetric : _ATXCoreAnalyticsMetric

@property (nonatomic) unsigned long long numDailyDigests;
@property (nonatomic) unsigned long long numDigestApps;
@property (nonatomic) unsigned long long numConfiguredModes;
@property (nonatomic) char hasOfferedDigest;
@property (nonatomic) char hasSetupDigest;

- (id)description;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end
