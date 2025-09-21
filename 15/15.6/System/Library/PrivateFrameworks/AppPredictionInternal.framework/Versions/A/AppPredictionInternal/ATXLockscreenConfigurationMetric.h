@class NSString;

@interface ATXLockscreenConfigurationMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *lockscreenId;
@property (copy, nonatomic) NSString *extensionBundleId;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *font;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *numberingSystem;
@property (nonatomic) unsigned long long numWidgets;
@property (nonatomic) unsigned long long numLandscapeWidgets;
@property (nonatomic) char hasCustomInlineComplication;
@property (copy, nonatomic) NSString *relatedFocus;
@property (nonatomic) char isSelected;

- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end
