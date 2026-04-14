@class NSString, NSDictionary, NSUUID;

@interface HMDResidentStatusChannelPriorityUpdateLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) double durationForOverride;
@property (readonly, nonatomic) double durationForFirstUpdate;
@property (readonly, nonatomic) BOOL receivedUpdatedDataFromChannel;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDurationWaitedForFirstUpdate:(double)a0 receivedUpdatedDataFromChannel:(BOOL)a1;
- (id)initWithHomeUUID:(id)a0 priority:(unsigned long long)a1 durationForOverride:(double)a2;

@end
