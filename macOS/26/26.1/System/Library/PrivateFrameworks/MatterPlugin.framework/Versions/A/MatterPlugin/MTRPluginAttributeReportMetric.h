@class MTRAttributePath, NSArray;

@interface MTRPluginAttributeReportMetric : MTRPluginMetric

@property (retain) MTRAttributePath *attributePath;
@property (retain) NSArray *attributeReport;

+ (id)attributeReportMetricForDevice:(id)a0 homeID:(id)a1 attributeReport:(id)a2 remoteMessageID:(id)a3;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)submitMetric;
- (id)additionalCoreAnalyticsEventDictionary;

@end
