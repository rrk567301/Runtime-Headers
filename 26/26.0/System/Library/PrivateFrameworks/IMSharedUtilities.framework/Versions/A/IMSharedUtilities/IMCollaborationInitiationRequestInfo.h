@class _SWCollaborationShareOptions, NSURL, _SWCollaborationMetadata, CKShare, CKContainerSetupInfo;

@interface IMCollaborationInitiationRequestInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) _SWCollaborationShareOptions *options;
@property (retain, nonatomic) _SWCollaborationMetadata *metadata;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCKShare:(id)a0 containerSetupInfo:(id)a1 options:(id)a2;
- (id)initWithURL:(id)a0 containerSetupInfo:(id)a1 options:(id)a2 metadata:(id)a3;
- (id)initWithURL:(id)a0 options:(id)a1 metadata:(id)a2;

@end
