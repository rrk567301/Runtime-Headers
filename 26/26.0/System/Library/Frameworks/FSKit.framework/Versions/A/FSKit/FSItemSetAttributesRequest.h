@interface FSItemSetAttributesRequest : FSItemAttributes

@property (nonatomic) long long consumedAttributes;

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)wasAttributeConsumed:(long long)a0;

@end
