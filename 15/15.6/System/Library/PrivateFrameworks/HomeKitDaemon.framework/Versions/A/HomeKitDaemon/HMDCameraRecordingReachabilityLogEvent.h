@class NSString, NSDictionary, NSUUID;

@interface HMDCameraRecordingReachabilityLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly) char reachable;
@property (readonly) char didCreateEventModel;
@property (readonly) unsigned long long reachabilityChangeDebounceCount;
@property (readonly) double offlineDuration;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReachability:(char)a0 didCreateEventModel:(char)a1 reachabilityChangeDebounceCount:(unsigned long long)a2 offlineDuration:(double)a3 hapAccessory:(id)a4;

@end
