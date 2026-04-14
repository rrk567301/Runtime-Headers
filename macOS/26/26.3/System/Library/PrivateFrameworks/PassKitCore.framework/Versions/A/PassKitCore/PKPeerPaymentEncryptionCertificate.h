@class NSArray;

@interface PKPeerPaymentEncryptionCertificate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long destination;
@property (nonatomic) unsigned long long encryptionScheme;
@property (nonatomic) long long certificatesVersion;
@property (copy, nonatomic) NSArray *encryptionCertificates;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
