@class NSNumber, NSString, NSDictionary;

@interface HomeKitDaemon.MatterAccessoryWriteAttributeLogEvent : HMMDatedHomeLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ home;
    void /* function */ value;
    void /* function */ coreAnalyticsEventName;
}

@property (nonatomic, readonly) unsigned long long nodeId;
@property (nonatomic, readonly) NSNumber *endpointId;
@property (nonatomic, readonly) NSNumber *clusterId;
@property (nonatomic, readonly) NSNumber *attributeId;
@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) NSNumber *timedWriteTimeout;
@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0 nodeId:(unsigned long long)a1 endpointId:(id)a2 clusterId:(id)a3 attributeId:(id)a4 value:(id)a5 timedWriteTimeout:(id)a6;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
