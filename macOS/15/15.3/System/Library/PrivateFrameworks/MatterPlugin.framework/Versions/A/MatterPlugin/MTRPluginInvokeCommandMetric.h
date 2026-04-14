@class NSNumber;

@interface MTRPluginInvokeCommandMetric : MTRPluginMetric

@property (retain) NSNumber *endpointID;
@property (retain) NSNumber *clusterID;
@property (retain) NSNumber *commandID;
@property (getter=isTimedInvoke) BOOL timedInvoke;

+ (id)invokeCommandMetricForDevice:(id)a0 homeID:(id)a1 endpointID:(id)a2 clusterID:(id)a3 commandID:(id)a4 timedInvoke:(BOOL)a5 remoteMode:(BOOL)a6;

- (void).cxx_destruct;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)additionalCoreAnalyticsEventDictionary;

@end
