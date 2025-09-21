@class MTRAttributePath, NSArray;

@interface MTRPluginAttributeReportMetric : MTRPluginMetric

@property (retain) MTRAttributePath *attributePath;
@property (retain) NSArray *attributeReport;

+ (id)attributeReportMetricForDevice:(id)a0 homeID:(id)a1 attributeReport:(id)a2 remoteMessageID:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submitMetric;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)additionalCoreAnalyticsEventDictionary;

@end
