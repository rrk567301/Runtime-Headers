@class NSNumber, NSString, NSDictionary;

@interface HomeKitDaemon.MatterAccessoryInvokeCommandLogEvent : HMMDatedHomeLogEvent <HMDBiomeLogEvent, HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ home;
    void /* function */ coreAnalyticsEventName;
}

@property (nonatomic, readonly) unsigned long long nodeId;
@property (nonatomic, readonly) NSNumber *endpointId;
@property (nonatomic, readonly) NSNumber *clusterId;
@property (nonatomic, readonly) NSNumber *commandId;
@property (nonatomic, readonly) unsigned long long source;
@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)biomeEventsRepresentationForLogObserver:(id)a0;
- (id)initWithHome:(id)a0 nodeId:(unsigned long long)a1 endpointId:(id)a2 clusterId:(id)a3 commandId:(id)a4 source:(unsigned long long)a5;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
