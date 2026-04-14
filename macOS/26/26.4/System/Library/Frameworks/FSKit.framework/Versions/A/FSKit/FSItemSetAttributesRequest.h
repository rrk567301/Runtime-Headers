@interface FSItemSetAttributesRequest : FSItemAttributes

@property (nonatomic) long long consumedAttributes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (BOOL)wasAttributeConsumed:(long long)a0;

@end
