@class MTRAttributePath, NSArray;

@interface MTRPluginAttributeReportMetric : MTRPluginMetric

@property (retain) MTRAttributePath *attributePath;
@property (retain) NSArray *attributeReport;

+ (id)attributeReportMetricForDevice:(id)a0 homeID:(id)a1 attributeReport:(id)a2 remoteMessageID:(id)a3;

- (void)submitMetric;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)additionalCoreAnalyticsEventDictionary;

@end
