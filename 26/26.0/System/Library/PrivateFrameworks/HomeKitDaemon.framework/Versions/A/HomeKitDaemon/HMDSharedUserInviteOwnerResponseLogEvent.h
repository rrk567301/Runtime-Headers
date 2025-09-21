@interface HMDSharedUserInviteOwnerResponseLogEvent : HMDSharedUserInviteLogEvent

@property (nonatomic) long long authenticateUserMS;
@property (nonatomic) long long joiningReverseShareMS;
@property (nonatomic) long long addUserToHomeMS;
@property (nonatomic) long long totalOwnerResidentResponseMS;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithHomeUUID:(id)a0;

@end
