@class _ATXCoreAnalyticsDimensionSet;

@interface _ATXCoreAnalyticsMetric : NSObject

@property (readonly, nonatomic) _ATXCoreAnalyticsDimensionSet *dimensionSet;

- (id)initWithDimensions:(id)a0;
- (id)metricName;
- (id)init;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (void)logToCoreAnalytics;
- (id)coreAnalyticsDictionaryWithDimensions;

@end
