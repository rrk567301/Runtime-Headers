@class NSData;

@interface MTSDeviceCredential : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSData *certificationDeclaration;
@property (readonly, copy) NSData *deviceAttestationCertificate;
@property (readonly, copy) NSData *productAttestationIntermediateCertificate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCertificationDeclaration:(id)a0 deviceAttestationCertificate:(id)a1 productAttestationIntermediateCertificate:(id)a2;

@end
