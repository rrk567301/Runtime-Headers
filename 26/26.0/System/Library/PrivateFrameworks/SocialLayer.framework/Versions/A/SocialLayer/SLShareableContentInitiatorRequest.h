@class NSURL, CKContainerSetupInfo, _SWCollaborationMetadata;

@interface SLShareableContentInitiatorRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (readonly, nonatomic) _SWCollaborationMetadata *collaborationMetadata;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainerSetupInfo:(id)a0;
- (id)initWithCollaborationMetadata:(id)a0;
- (id)initWithFileURL:(id)a0 containerSetupInfo:(id)a1 collaborationMetadata:(id)a2;

@end
