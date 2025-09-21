@interface NEIKEv2AuthenticationProtocol : NSObject <NSCopying> {
    char _isNonStandard;
    unsigned long long _method;
    unsigned long long _digitalSignatureAlgorithm;
    unsigned long long _securePasswordMethod;
}

@property (readonly, nonatomic) char isSignature;
@property (readonly, nonatomic) char isDigitalSignature;
@property (readonly, nonatomic) char isSecurePassword;
@property (readonly, nonatomic) char isNonStandard;
@property (readonly, nonatomic) unsigned long long method;
@property (readonly, nonatomic) unsigned long long digitalSignatureAlgorithm;
@property (readonly, nonatomic) unsigned long long securePasswordMethod;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithMethod:(unsigned long long)a0;
- (id)initWithDigitalSignature:(unsigned long long)a0;
- (id)initWithNonStandardDigitalSignature:(unsigned long long)a0;
- (id)initWithSecurePassword:(unsigned long long)a0;

@end
