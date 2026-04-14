@interface HMDSharedUserInviteOwnerSendLogEvent : HMDSharedUserInviteLogEvent

@property (nonatomic) long long createShareMS;
@property (nonatomic) long long addUserToShareMS;
@property (nonatomic) long long sendInvitationMS;
@property (nonatomic) BOOL userAlreadyAddedToShare;
@property (nonatomic) long long totalInvitationCreateAndSendMS;

- (id)initWithHome:(id)a0;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)coreAnalyticsEventName;
- (id)coreAnalyticsEventDictionary;

@end
