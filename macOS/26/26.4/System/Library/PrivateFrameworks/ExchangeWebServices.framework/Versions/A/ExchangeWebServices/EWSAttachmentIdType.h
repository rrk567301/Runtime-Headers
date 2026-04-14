@class NSString;

@interface EWSAttachmentIdType : EWSRequestAttachmentIdType

@property (copy, nonatomic) NSString *RootItemId;
@property (copy, nonatomic) NSString *RootItemChangeKey;

+ (id)definition;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
