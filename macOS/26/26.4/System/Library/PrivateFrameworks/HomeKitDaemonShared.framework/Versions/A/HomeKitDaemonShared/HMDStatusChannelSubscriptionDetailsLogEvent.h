@class NSString, NSDictionary, NSUUID;

@interface HMDStatusChannelSubscriptionDetailsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) NSString *channelPrefix;
@property (readonly, nonatomic) BOOL isRetry;
@property (readonly, nonatomic) double timeTakenToSubscribe;
@property (readonly, nonatomic) double timeTakenToGetFirstUpdate;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithChannelPrefix:(id)a0 isRetry:(BOOL)a1 timeTakenToSubscribe:(double)a2;
- (void)setDurationWaitedForFirstUpdate:(double)a0 receivedUpdateFromChannel:(BOOL)a1;

@end
