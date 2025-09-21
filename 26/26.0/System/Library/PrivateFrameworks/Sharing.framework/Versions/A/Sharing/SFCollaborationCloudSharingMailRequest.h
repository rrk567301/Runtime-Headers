@class NSData, NSUUID, NSArray, NSURL, CKShare, CKContainerSetupInfo, NSString;

@interface SFCollaborationCloudSharingMailRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *collaborationItemIdentifier;
@property (readonly, copy, nonatomic) NSArray *options;
@property (readonly, nonatomic) NSURL *fileOrFolderURL;
@property (readonly, nonatomic) CKShare *share;
@property (readonly, nonatomic) CKContainerSetupInfo *setupInfo;
@property (readonly, nonatomic) NSURL *sharingURL;
@property (readonly, copy, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSData *appIconData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCloudSharingRequest:(id)a0 result:(id)a1;
- (id)initWithCollaborationItemIdentifier:(id)a0 options:(id)a1 fileOrFolderURL:(id)a2 share:(id)a3 setupInfo:(id)a4 sharingURL:(id)a5 appName:(id)a6 appIconData:(id)a7;

@end
