@interface NFTrustLocalValidation : NFTrustObject <NFTrustLocalValidation>

@property (nonatomic) unsigned char primitiveLocalValidation;

+ (char)supportsSecureCoding;
+ (id)localValidationWithFaceID;
+ (id)localValidationWithPassCode;
+ (id)localValidationWithTouchID;
+ (id)withPrimitiveLocalValidation:(unsigned char)a0;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
