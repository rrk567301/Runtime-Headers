@class NSString;

@interface ATXLockscreenWidgetMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *lockscreenId;
@property (copy, nonatomic) NSString *extensionBundleId;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) unsigned long long family;
@property (nonatomic) unsigned long long source;
@property (nonatomic) BOOL isLandscape;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;

@end
