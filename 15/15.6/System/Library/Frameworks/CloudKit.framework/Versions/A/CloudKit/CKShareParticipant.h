@class CKDeviceToDeviceShareInvitationToken, NSString, CKRecordID, NSData, NSDate, CKUserIdentity;

@interface CKShareParticipant : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property char wantsNewInvitationToken;
@property char isCurrentUser;
@property char isOrgAdminUser;
@property long long mutableInvitationTokenStatus;
@property (copy) CKRecordID *shareID;
@property (copy) NSString *inviterID;
@property (readonly, nonatomic) long long originalParticipantRole;
@property (readonly, nonatomic) long long originalAcceptanceStatus;
@property (readonly, nonatomic) long long originalPermission;
@property char createdInProcess;
@property char acceptedInProcess;
@property (copy) NSData *protectionInfo;
@property (copy) NSData *protectionInfoPublicKey;
@property (copy) NSData *encryptedPersonalInfo;
@property char isAnonymousInvitedParticipant;
@property char forceSendPublicKeyForAnonymousParticipants;
@property (nonatomic) char isApprovedRequester;
@property (copy, nonatomic) NSDate *invitationDate;
@property (nonatomic) char usesOneTimeURL;
@property (copy, nonatomic) NSData *oneTimeURLSharingKeySeed;
@property (copy) NSString *participantID;
@property long long acceptanceStatus;
@property (copy) CKUserIdentity *userIdentity;
@property (copy) CKDeviceToDeviceShareInvitationToken *invitationToken;
@property long long role;
@property long long type;
@property long long permission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)oneTimeURLParticipant;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (long long)invitationTokenStatus;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)_initWithUserIdentity:(id)a0;
- (void)_stripPersonalInfo;
- (id)initInternal;
- (id)initInternalWithUserIdentity:(id)a0;
- (void)setUserIdentity_modelMutation:(id)a0;
- (id)unifiedContactsInStore:(id)a0 keysToFetch:(id)a1 error:(id *)a2;

@end
