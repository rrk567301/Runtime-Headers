@class HKSharingRecipientIdentifier;

@interface HKSharingRecipientAuthorizationStoreTaskConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKSharingRecipientIdentifier *recipientIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
