@class NSString;

@interface ATXLockscreenPosterSuggestionMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *extensionBundleId;
@property (nonatomic) unsigned long long section;
@property (nonatomic) char outcome;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) char engaged;

- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end
