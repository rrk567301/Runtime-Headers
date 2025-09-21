@interface PCSAnalyticsReporterRTC : NSObject

+ (id)rtcAnalyticsReporter;
+ (void)sendMetricWithEvent:(id)a0 success:(BOOL)a1 error:(id)a2;

@end
