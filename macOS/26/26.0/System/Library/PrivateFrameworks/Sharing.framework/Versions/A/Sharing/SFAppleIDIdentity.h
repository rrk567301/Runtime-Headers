@class NSString, NSData, NSDate;

@interface SFAppleIDIdentity : NSObject <NSSecureCoding> {
    NSString *_encDSID;
    NSString *_intermediateCertificateSerialNumber;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSDate *certificateExpirationDate;
@property (readonly, nonatomic) BOOL certificateExpired;
@property (retain, nonatomic) NSData *certificatePersistentReference;
@property (readonly, nonatomic) BOOL needsRenewal;
@property (retain, nonatomic) NSDate *intermediateCertificateExpirationDate;
@property (readonly, nonatomic) BOOL intermediateCertificateExpired;
@property (readonly, nonatomic) NSString *intermediateCertificateSerialNumber;
@property (retain, nonatomic) NSData *intermediateCertificatePersistentReference;
@property (readonly, nonatomic) BOOL isInvalid;
@property (retain, nonatomic) NSDate *lastValidationAttemptDate;
@property (retain, nonatomic) NSDate *lastValidationDate;
@property (nonatomic) BOOL linkedToCurrentUser;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSData *privateKeyPersistentReference;
@property (retain, nonatomic) NSString *serialNumber;

- (id)initWithDictionary:(id)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPrivateKey;
- (struct __SecIdentity { } *)copyIdentity;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAppleID:(id)a0 altDSID:(id)a1;
- (BOOL)isEqualToIdentity:(id)a0;
- (struct __SecCertificate { } *)copyCertificateWithType:(long long)a0;
- (struct __SecCertificate { } *)copyCertificate;
- (id)description;
- (int)verifyKeys;
- (void)removeFromKeychain;
- (id)initWithCoder:(id)a0;
- (struct __SecCertificate { } *)copyIntermediateCertificate;
- (BOOL)isEqual:(id)a0;
- (BOOL)isDateInThePast:(id)a0;
- (void).cxx_destruct;

@end
