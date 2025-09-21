@class NSString, NSDictionary, NSUUID, NSError;

@interface HMDPrimaryResidentDiscoveryLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (nonatomic) char residentChannelActive;
@property (nonatomic) char residentChannelActiveNoPrimaryResolved;
@property (retain, nonatomic) NSError *residentChannelActiveResolvePrimaryError;
@property (nonatomic) char accountMessageSent;
@property (nonatomic) char accountMessageNoPrimaryResolved;
@property (retain, nonatomic) NSError *accountMessageError;
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
- (id)initWithHomeUUID:(id)a0;

@end
