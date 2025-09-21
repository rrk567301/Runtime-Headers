@class NSString;

@interface ATXLockscreenWidgetSuggestionMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *extensionBundleId;
@property (nonatomic) unsigned long long family;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) unsigned long long reason;
@property (nonatomic) char outcome;
@property (nonatomic) long long numEngaged;
@property (copy, nonatomic) NSString *sessionId;

- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end
