@class NSDate;

@interface ATXDeviceUsageSummaryMetrics : _ATXCoreAnalyticsMetric {
    NSDate *_lastEntryTime;
}

@property (readonly, nonatomic) unsigned long long devicePickupCount;
@property (readonly, nonatomic) double averagePickupDuration;
@property (readonly, nonatomic) double totalDeviceOnTime;
@property (readonly, nonatomic) double totalTime;

- (id)metricName;
- (id)initWithDimensions:(id)a0;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (void)handleConfigurationEntry:(id)a0;
- (void)handleConfigurationExit:(id)a0;
- (void)handleOnInterval:(id)a0;

@end
