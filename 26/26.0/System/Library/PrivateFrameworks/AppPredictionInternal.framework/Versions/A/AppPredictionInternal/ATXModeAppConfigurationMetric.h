@class NSString;

@interface ATXModeAppConfigurationMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *modeSemanticType;

- (id)metricName;
- (id)description;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;

@end
