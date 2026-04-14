@interface MTRPluginDownloadDiagnosticLogMetric : MTRPluginMetric

@property long long logType;

+ (id)downloadDiagnosticMetricForDevice:(id)a0 homeID:(id)a1 logType:(long long)a2 remoteMode:(BOOL)a3;

- (id)additionalCoreAnalyticsEventDictionary;

@end
