@interface _SFRSAKeySpecifier : _SFAsymmetricKeySpecifier {
    id _rsaKeySpecifierInternal;
}

@property (nonatomic) long long bitSize;

+ (char)supportsSecureCoding;
+ (Class)keyClass;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBitSize:(long long)a0;

@end
