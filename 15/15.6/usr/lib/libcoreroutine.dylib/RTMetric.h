@class NSString, NSMutableDictionary;

@interface RTMetric : NSObject <RTMetricProtocol>

@property (nonatomic) char loggingEnabled;
@property (nonatomic) char submitted;
@property (readonly, nonatomic) NSMutableDictionary *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { char *x0; })event;
+ (id)binForNumber:(id)a0 bins:(id)a1;
+ (id)binsFromStart:(id)a0 toEnd:(id)a1 gap:(id)a2;
+ (id)metricName;
+ (id)supportedMetricKeys;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLoggingEnabled:(char)a0;
- (char)setAllMetrics:(id)a0 error:(id *)a1;
- (char)submitMetricsWithError:(id *)a0;

@end
