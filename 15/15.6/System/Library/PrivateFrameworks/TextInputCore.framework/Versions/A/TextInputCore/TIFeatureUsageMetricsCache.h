@class NSString, NSMutableDictionary, TIMetricDescriptorRegistry, NSDate, NSDictionary;

@interface TIFeatureUsageMetricsCache : NSObject {
    NSString *_inputMode;
    TIMetricDescriptorRegistry *_metricDescriptorRegistry;
    NSDate *_testingTimestamp;
    NSDate *_queryEndDate;
    NSMutableDictionary *_cachedMetrics;
    NSDictionary *_defaultMetrics;
    char _sufficientData;
}

- (void).cxx_destruct;
- (id)startOfDay;
- (id)defaultMetricsFromContext:(id)a0;
- (id)featureUsageMetricFromName:(id)a0 forContext:(id)a1;
- (id)initWithInputMode:(id)a0 metricDescriptorRegistry:(id)a1;
- (void)loadMetricsFromUserModelDataStore:(id)a0 withContext:(id)a1;
- (id)metricsFromUserModel:(id)a0 withContext:(id)a1;
- (void)setTestingTimestamp:(id)a0;

@end
