@class NSString;

@interface ATXLockscreenEditMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *lockscreenId;
@property (copy, nonatomic) NSString *entryPoint;
@property (nonatomic) char isNew;
@property (nonatomic) unsigned long long secondsSinceLastEdit;
@property (copy, nonatomic) NSString *outcome;
@property (nonatomic) long long duration;
@property (nonatomic) char userChangedColor;
@property (nonatomic) char userChangedFont;
@property (nonatomic) char userChangedNumberingSystem;
@property (nonatomic) char userChangedPosterContent;
@property (nonatomic) char userChangedWidgets;
@property (nonatomic) char didLockscreenHaveWidgetsBeforeEdit;

- (void).cxx_destruct;
- (id)metricName;
- (id)coreAnalyticsDictionary;

@end
