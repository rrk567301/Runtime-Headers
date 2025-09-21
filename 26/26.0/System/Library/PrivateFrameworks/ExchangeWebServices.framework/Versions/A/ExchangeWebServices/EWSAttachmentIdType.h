@class NSString;

@interface EWSAttachmentIdType : EWSRequestAttachmentIdType

@property (copy, nonatomic) NSString *RootItemId;
@property (copy, nonatomic) NSString *RootItemChangeKey;

+ (BOOL)supportsSecureCoding;
+ (id)definition;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
