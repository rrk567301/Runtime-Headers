@class NSUUID, NSURL, CKShare, NSError, SFCollaborationCloudSharingMailResult;

@interface SFCollaborationCloudSharingResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *collaborationItemIdentifier;
@property (readonly, nonatomic) NSURL *sharingURL;
@property (readonly, nonatomic) CKShare *share;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) char existingShare;
@property (retain, nonatomic) SFCollaborationCloudSharingMailResult *mailResult;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCollaborationItemIdentifier:(id)a0 sharingURL:(id)a1 share:(id)a2 error:(id)a3 mailResult:(id)a4;
- (id)initWithCollaborationItemIdentifier:(id)a0 sharingURL:(id)a1 share:(id)a2 existingShare:(char)a3 error:(id)a4 mailResult:(id)a5;

@end
