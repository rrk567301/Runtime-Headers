@class NSString;

@interface MUIAttachmentInfo : MSAttachmentInfo

@property (readonly, nonatomic) char isImage;
@property (readonly, nonatomic) char canBeSentInline;
@property (copy, nonatomic) NSString *mailDropLink;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 filename:(id)a1 isImage:(char)a2 canBeSentInline:(char)a3;

@end
