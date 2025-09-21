@interface MLSecureModelDecryptCredential : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long cryptoKey;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
