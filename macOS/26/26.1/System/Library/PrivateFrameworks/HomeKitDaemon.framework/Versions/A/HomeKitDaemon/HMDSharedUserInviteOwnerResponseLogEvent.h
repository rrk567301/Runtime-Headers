@interface HMDSharedUserInviteOwnerResponseLogEvent : HMDSharedUserInviteLogEvent

@property (nonatomic) long long authenticateUserMS;
@property (nonatomic) long long joiningReverseShareMS;
@property (nonatomic) long long addUserToHomeMS;
@property (nonatomic) long long totalOwnerResidentResponseMS;

- (id)coreAnalyticsEventDictionary;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)coreAnalyticsEventName;
- (id)initWithHomeUUID:(id)a0;

@end
