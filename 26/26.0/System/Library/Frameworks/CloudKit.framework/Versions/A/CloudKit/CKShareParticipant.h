@class CKDeviceToDeviceShareInvitationToken, NSString, CKRecordID, NSData, NSDate, CKUserIdentity;

@interface CKShareParticipant : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL wantsNewInvitationToken;
@property BOOL isCurrentUser;
@property BOOL isOrgAdminUser;
@property long long mutableInvitationTokenStatus;
@property (copy) CKRecordID *shareID;
@property (copy) NSString *inviterID;
@property (nonatomic) long long originalParticipantRole;
@property BOOL createdInProcess;
@property BOOL acceptedInProcess;
@property (copy) NSData *protectionInfo;
@property (copy) NSData *protectionInfoPublicKey;
@property (copy) NSData *encryptedPersonalInfo;
@property BOOL isAnonymousInvitedParticipant;
@property BOOL forceSendPublicKeyForAnonymousParticipants;
@property (nonatomic) BOOL isApprovedRequester;
@property (copy, nonatomic) NSDate *invitationDate;
@property (copy, nonatomic) NSDate *acceptanceDate;
@property (nonatomic) BOOL usesOneTimeURL;
@property (copy, nonatomic) NSData *oneTimeURLSharingKeySeed;
@property (copy) NSString *participantID;
@property long long acceptanceStatus;
@property (copy) CKUserIdentity *userIdentity;
@property (copy) CKDeviceToDeviceShareInvitationToken *invitationToken;
@property long long role;
@property long long type;
@property long long permission;
@property (readonly, copy, nonatomic) NSDate *dateAddedToShare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)oneTimeURLParticipant;
+ (void)initialize;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initInternal;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (long long)invitationTokenStatus;
- (void)setParticipantID_modelMutation:(id)a0;
- (id)_initWithUserIdentity:(id)a0;
- (void)_stripPersonalInfoAndSerializeOwnerInfo:(BOOL)a0;
- (id)initInternalWithUserIdentity:(id)a0;
- (void)setUserIdentity_modelMutation:(id)a0;
- (id)unifiedContactsInStore:(id)a0 keysToFetch:(id)a1 error:(id *)a2;

@end
