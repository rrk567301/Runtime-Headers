@class NSString;

@interface EWSAttachmentIdType : EWSRequestAttachmentIdType

@property (copy, nonatomic) NSString *RootItemId;
@property (copy, nonatomic) NSString *RootItemChangeKey;

+ (BOOL)supportsSecureCoding;
+ (id)definition;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
