@class CKShareParticipant, NSUUID, NSDate, HKSummarySharingEntry;

@interface HDUpdateCodableSummarySharingEntryOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSUUID *invitationUUID;
@property (readonly, nonatomic) HKSummarySharingEntry *sharingEntry;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSDate *dateModified;
@property (readonly, copy, nonatomic) NSDate *dateAccepted;
@property (readonly, copy, nonatomic) CKShareParticipant *ownerParticipant;

+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInvitationUUID:(id)a0 status:(long long)a1 dateModified:(id)a2 dateAccepted:(id)a3 ownerParticipant:(id)a4;
- (char)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
