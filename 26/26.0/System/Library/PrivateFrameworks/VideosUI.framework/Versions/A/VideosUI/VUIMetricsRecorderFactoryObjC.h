@interface VUIMetricsRecorderFactoryObjC : NSObject

+ (id)makePlayerMetricRecorder;
+ (id)makeViewMetricsRecorder;

- (id)init;

@end
