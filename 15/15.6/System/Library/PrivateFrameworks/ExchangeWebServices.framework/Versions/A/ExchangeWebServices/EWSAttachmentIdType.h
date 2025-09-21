@class NSString;

@interface EWSAttachmentIdType : EWSRequestAttachmentIdType

@property (copy, nonatomic) NSString *RootItemId;
@property (copy, nonatomic) NSString *RootItemChangeKey;

+ (char)supportsSecureCoding;
+ (id)definition;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
