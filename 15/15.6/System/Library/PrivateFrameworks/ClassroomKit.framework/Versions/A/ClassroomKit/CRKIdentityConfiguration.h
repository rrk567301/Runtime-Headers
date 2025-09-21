@class NSString, NSData;

@interface CRKIdentityConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) long long defaultKeySizeInBits;
@property (class, readonly) unsigned int defaultHashingAlgorithm;
@property (class, readonly) char defaultCreatesCertificateAuthority;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *commonName;
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (nonatomic) long long keySizeInBits;
@property (nonatomic) char createsCertificateAuthority;
@property (nonatomic) unsigned int hashingAlgorithm;
@property (nonatomic) char addsClientAuthAndServerAuthEKUs;
@property (copy, nonatomic) NSString *emailAddress;

+ (id)configurationWithData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCommonName:(id)a0;

@end
