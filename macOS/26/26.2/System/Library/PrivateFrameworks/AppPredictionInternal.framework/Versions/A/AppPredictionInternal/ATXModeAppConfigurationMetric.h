@class NSString;

@interface ATXModeAppConfigurationMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *modeSemanticType;

- (id)metricName;
- (void).cxx_destruct;
- (id)description;
- (id)coreAnalyticsDictionary;

@end
