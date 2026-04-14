@interface FSItemSetAttributesRequest : FSItemAttributes

@property (nonatomic) long long consumedAttributes;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (BOOL)wasAttributeConsumed:(long long)a0;

@end
