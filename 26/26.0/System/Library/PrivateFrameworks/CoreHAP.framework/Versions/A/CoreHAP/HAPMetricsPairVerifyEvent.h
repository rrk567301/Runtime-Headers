@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HAPMetricsPairVerifyEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *linkType;
@property (readonly, nonatomic) unsigned long long durationInMS;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSString *connectionEstablishedUsing;
@property (readonly, nonatomic) BOOL triedConnectingToIPv4Address;
@property (readonly, nonatomic) BOOL triedConnectingToIPv6Address;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 forLinkType:(id)a1 durationInMS:(unsigned long long)a2 reason:(id)a3 connectionEstablishedUsing:(id)a4 pvError:(id)a5;

@end
