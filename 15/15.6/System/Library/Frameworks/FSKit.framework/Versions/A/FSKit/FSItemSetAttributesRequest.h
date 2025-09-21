@interface FSItemSetAttributesRequest : FSItemAttributes

@property (nonatomic) long long consumedAttributes;

+ (char)supportsSecureCoding;

- (id)init;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)wasAttributeConsumed:(long long)a0;

@end
