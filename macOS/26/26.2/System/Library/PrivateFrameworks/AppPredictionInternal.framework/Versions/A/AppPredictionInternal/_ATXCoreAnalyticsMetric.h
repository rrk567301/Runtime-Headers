@class _ATXCoreAnalyticsDimensionSet;

@interface _ATXCoreAnalyticsMetric : NSObject

@property (readonly, nonatomic) _ATXCoreAnalyticsDimensionSet *dimensionSet;

- (id)initWithDimensions:(id)a0;
- (id)metricName;
- (void).cxx_destruct;
- (id)init;
- (id)coreAnalyticsDictionary;
- (void)logToCoreAnalytics;
- (id)coreAnalyticsDictionaryWithDimensions;

@end
