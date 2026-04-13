@interface NFTrustLocalValidation : NFTrustObject <NFTrustLocalValidation>

@property (nonatomic) unsigned char primitiveLocalValidation;

+ (BOOL)supportsSecureCoding;
+ (id)withPrimitiveLocalValidation:(unsigned char)a0;
+ (id)localValidationWithPassCode;
+ (id)localValidationWithTouchID;
+ (id)localValidationWithFaceID;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
