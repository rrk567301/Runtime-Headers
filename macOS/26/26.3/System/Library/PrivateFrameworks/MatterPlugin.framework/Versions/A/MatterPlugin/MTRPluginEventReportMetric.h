@class NSArray, MTREventPath;

@interface MTRPluginEventReportMetric : MTRPluginMetric

@property (retain) MTREventPath *eventPath;
@property (retain) NSArray *eventReport;

+ (id)eventReportMetricForDevice:(id)a0 homeID:(id)a1 eventReport:(id)a2 remoteMessageID:(id)a3;

- (void)submitMetric;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)additionalCoreAnalyticsEventDictionary;

@end
