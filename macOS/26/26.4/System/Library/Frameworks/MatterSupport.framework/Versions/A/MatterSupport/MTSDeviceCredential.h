@class NSData;

@interface MTSDeviceCredential : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *certificationDeclaration;
@property (readonly, copy) NSData *deviceAttestationCertificate;
@property (readonly, copy) NSData *productAttestationIntermediateCertificate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithCertificationDeclaration:(id)a0 deviceAttestationCertificate:(id)a1 productAttestationIntermediateCertificate:(id)a2;

@end
