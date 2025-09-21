@class NSString, _SWCollaborationMetadata, NSURL, CKContainerSetupInfo;

@interface SLCollaborationFooterViewModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (readonly, nonatomic) _SWCollaborationMetadata *metadata;
@property (copy, nonatomic) NSString *optionsSummary;
@property (nonatomic) BOOL isShareLink;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainerSetupInfo:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1;
- (id)initWithMetadata:(id)a0;

@end
