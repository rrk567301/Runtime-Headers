@class NSUUID, CKUserIdentityLookupInfo;

@interface HMDShareInvitationContext : HMFObject <NSCopying>

@property (readonly, copy) NSUUID *participantClientIdentifier;
@property (readonly, copy) CKUserIdentityLookupInfo *lookupInfo;
@property (readonly) BOOL shouldGrantWriteAccess;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithHMBShareInvitationContext:(id)a0;
- (id)initWithParticipantClientIdentifier:(id)a0 emailAddress:(id)a1 shouldGrantWriteAccess:(BOOL)a2;
- (id)initWithParticipantClientIdentifier:(id)a0 lookupInfo:(id)a1 shouldGrantWriteAccess:(BOOL)a2;
- (id)initWithParticipantClientIdentifier:(id)a0 phoneNumber:(id)a1 shouldGrantWriteAccess:(BOOL)a2;
- (id)initWithParticipantClientIdentifier:(id)a0 userRecordID:(id)a1 shouldGrantWriteAccess:(BOOL)a2;

@end
