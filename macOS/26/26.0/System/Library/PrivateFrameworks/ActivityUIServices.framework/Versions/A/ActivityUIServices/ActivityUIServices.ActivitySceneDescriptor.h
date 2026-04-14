@class _TtC18ActivityUIServices22ActivityMetricsRequest, NSString, _TtC18ActivityUIServices20ActivitySceneMetrics, NSData;

@interface ActivityUIServices.ActivitySceneDescriptor : NSObject {
    void /* function */ activityIdentifier;
    void /* unknown type, empty encoding */ activityDescriptor;
    void /* function */ payloadID;
}

@property (nonatomic, readonly) NSString *activityIdentifier;
@property (nonatomic, readonly) long long activitySceneType;
@property (nonatomic, readonly) NSData *activityDescriptor;
@property (nonatomic, readonly) _TtC18ActivityUIServices22ActivityMetricsRequest *metricsRequest;
@property (nonatomic, readonly) NSString *payloadID;
@property (nonatomic, readonly) NSData *activityDescriptorData;
@property (nonatomic, readonly) _TtC18ActivityUIServices20ActivitySceneMetrics *metrics;

- (id)init;
- (void).cxx_destruct;
- (id)initWithActivitySceneType:(long long)a0 activityDescriptor:(id)a1 metricsRequest:(id)a2 payloadID:(id)a3;

@end
