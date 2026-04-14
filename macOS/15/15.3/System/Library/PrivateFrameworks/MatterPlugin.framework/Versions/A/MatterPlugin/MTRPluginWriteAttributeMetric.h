@class NSNumber;

@interface MTRPluginWriteAttributeMetric : MTRPluginMetric

@property (retain) NSNumber *endpointID;
@property (retain) NSNumber *clusterID;
@property (retain) NSNumber *attributeID;
@property (getter=isTimedWrite) BOOL timedWrite;

+ (id)writeAttributeMetricForDevice:(id)a0 homeID:(id)a1 endpointID:(id)a2 clusterID:(id)a3 attributeID:(id)a4 timedWrite:(BOOL)a5 remoteMode:(BOOL)a6;

- (void).cxx_destruct;
- (id)additionalCoreAnalyticsEventDictionary;

@end
