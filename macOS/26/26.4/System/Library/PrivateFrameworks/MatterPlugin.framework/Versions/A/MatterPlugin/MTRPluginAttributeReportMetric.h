@class MTRAttributePath, NSArray;

@interface MTRPluginAttributeReportMetric : MTRPluginMetric

@property (retain) MTRAttributePath *attributePath;
@property (retain) NSArray *attributeReport;

+ (id)attributeReportMetricForDevice:(id)a0 homeID:(id)a1 attributeReport:(id)a2 remoteMessageID:(id)a3;

- (void)submitMetric;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)additionalCoreAnalyticsEventDictionary;

@end
