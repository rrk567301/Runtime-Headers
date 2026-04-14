@class NSArray;

@interface PKPeerPaymentEncryptionCertificate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long destination;
@property (nonatomic) unsigned long long encryptionScheme;
@property (nonatomic) long long certificatesVersion;
@property (copy, nonatomic) NSArray *encryptionCertificates;

- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
