@class NSUUID, NSString, NSDate, NSData, NSSet, NSDictionary, CXHandle, CXJoinCallActivity, NSNumber;

@interface CXJoinCallAction : CXCallAction

@property (copy, nonatomic) NSUUID *groupUUID;
@property (copy, nonatomic) NSDate *dateStarted;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (copy, nonatomic) NSSet *otherInvitedHandles;
@property (copy, nonatomic) CXHandle *callerID;
@property (nonatomic, getter=isVideoEnabled) char videoEnabled;
@property (nonatomic, getter=isUplinkMuted) char uplinkMuted;
@property (nonatomic) unsigned long long avMode;
@property (nonatomic) unsigned long long presentationMode;
@property (copy, nonatomic) NSString *collaborationIdentifier;
@property (nonatomic) char shouldSuppressInCallUI;
@property (nonatomic) char wantsStagingArea;
@property (nonatomic, getter=isLetMeIn) char letMeIn;
@property (nonatomic, getter=isJoiningConversationWithLink) char joiningConversationWithLink;
@property (copy, nonatomic) NSString *pseudonym;
@property (copy, nonatomic) NSData *publicKey;
@property (nonatomic, getter=isVideo) char video;
@property (nonatomic, getter=isUpgrade) char upgrade;
@property (copy, nonatomic) NSUUID *upgradeSessionUUID;
@property (copy, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSString *messagesGroupName;
@property (copy, nonatomic) NSSet *remotePushTokens;
@property (copy, nonatomic) CXJoinCallActivity *joinCallActivity;
@property (nonatomic, getter=isRelay) char relay;
@property (nonatomic, getter=isScreening) char screening;
@property (copy, nonatomic) NSString *conversationProviderIdentifier;
@property (copy, nonatomic) NSDictionary *notificationStylesByHandleType;
@property (copy, nonatomic) NSNumber *associationIdentifier;
@property (copy, nonatomic) NSString *associationAVCIdentifier;
@property (nonatomic) unsigned long long screenShareRequestType;
@property (nonatomic) char shouldSendLegacyScreenSharingInvite;

+ (char)supportsSecureCoding;
+ (double)timeout;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fulfill;
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (void)fulfillWithDateStarted:(id)a0;
- (id)initWithCallUUID:(id)a0 groupUUID:(id)a1;
- (void)updateAsFulfilledWithDateStarted:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
