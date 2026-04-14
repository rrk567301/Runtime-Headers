@class NSUUID, CKShareParticipant, HMDShareInvitation;

@interface HMDShareParticipant : HMFObject <NSCopying>

@property (readonly, copy) NSUUID *clientIdentifier;
@property (readonly, copy) CKShareParticipant *ckShareParticipant;
@property (readonly) HMDShareInvitation *pendingInvitation;
@property (readonly) BOOL hasWriteAccess;
@property (readonly) BOOL hasAccepted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithClientIdentifier:(id)a0 ckShareParticipant:(id)a1 pendingInvitation:(id)a2 hasWriteAccess:(BOOL)a3 hasAccepted:(BOOL)a4;
- (id)initWithHMBShareParticipant:(id)a0;

@end
