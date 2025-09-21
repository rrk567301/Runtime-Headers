@class NSString, NSDictionary, NSUUID;

@interface HMDHomeInviteLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) char received;
@property (readonly, nonatomic) char filtered;
@property (readonly, nonatomic) char suppressedNotification;
@property (readonly, nonatomic) char accepted;
@property (readonly, nonatomic) char declined;
@property (readonly, nonatomic) char ignored;
@property (readonly, nonatomic) char expired;
@property (readonly, nonatomic) char isFMFDevice;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)updateWithInvitationState:(long long)a0 isFMFDevice:(char)a1;
+ (id)updateWithState:(long long)a0 isFMFDevice:(char)a1;

- (id)initWithHomeInviteLogEventState:(long long)a0 isFMFDevice:(char)a1;

@end
