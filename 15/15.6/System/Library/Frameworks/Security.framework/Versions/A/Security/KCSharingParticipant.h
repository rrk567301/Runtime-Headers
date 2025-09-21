@class NSString, NSDictionary, NSData;

@interface KCSharingParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *longDescription;
@property (readonly, copy, nonatomic) NSDictionary *JSONObject;
@property (readonly, copy, nonatomic) NSString *participantID;
@property (readonly, copy, nonatomic) NSString *handle;
@property (nonatomic) long long permissionLevel;
@property (readonly, nonatomic) char isCurrentUser;
@property (readonly, nonatomic) char isOwner;
@property (readonly, nonatomic) long long inviteStatus;
@property (readonly, weak, nonatomic) KCSharingParticipant *invitedBy;
@property (readonly, nonatomic) NSData *sharingInvitationData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHandle:(id)a0 permissionLevel:(long long)a1;
- (void)_setInvitedBy:(id)a0;
- (id)initWithParticipantID:(id)a0 handle:(id)a1 permissionLevel:(long long)a2 isCurrentUser:(char)a3 inviteStatus:(long long)a4 sharingInvitationData:(id)a5;

@end
