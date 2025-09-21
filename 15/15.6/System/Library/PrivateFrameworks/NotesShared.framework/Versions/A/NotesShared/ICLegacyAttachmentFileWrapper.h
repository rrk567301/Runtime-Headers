@class NSURL, NSString;

@interface ICLegacyAttachmentFileWrapper : NSFileWrapper <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURL *cidURL;
@property (readonly, nonatomic) NSString *attachmentIdentifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCIDURL:(id)a0;

@end
