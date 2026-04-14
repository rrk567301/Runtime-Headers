@class NSArray;

@interface PKPeerPaymentEncryptionCertificate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long destination;
@property (nonatomic) unsigned long long encryptionScheme;
@property (nonatomic) long long certificatesVersion;
@property (copy, nonatomic) NSArray *encryptionCertificates;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
