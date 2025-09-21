@class NSString, NSData, NSDate;

@interface SFAppleIDIdentity : NSObject <NSSecureCoding> {
    NSString *_encDSID;
    NSString *_intermediateCertificateSerialNumber;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSDate *certificateExpirationDate;
@property (readonly, nonatomic) char certificateExpired;
@property (retain, nonatomic) NSData *certificatePersistentReference;
@property (readonly, nonatomic) char needsRenewal;
@property (retain, nonatomic) NSDate *intermediateCertificateExpirationDate;
@property (readonly, nonatomic) char intermediateCertificateExpired;
@property (readonly, nonatomic) NSString *intermediateCertificateSerialNumber;
@property (retain, nonatomic) NSData *intermediateCertificatePersistentReference;
@property (readonly, nonatomic) char isInvalid;
@property (retain, nonatomic) NSDate *lastValidationAttemptDate;
@property (retain, nonatomic) NSDate *lastValidationDate;
@property (nonatomic) char linkedToCurrentUser;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSData *privateKeyPersistentReference;
@property (retain, nonatomic) NSString *serialNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)isEqualToIdentity:(id)a0;
- (struct __SecIdentity { } *)copyIdentity;
- (id)initWithAppleID:(id)a0 altDSID:(id)a1;
- (struct __SecCertificate { } *)copyCertificate;
- (struct __SecCertificate { } *)copyCertificateWithType:(long long)a0;
- (struct __SecCertificate { } *)copyIntermediateCertificate;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPrivateKey;
- (char)isDateInThePast:(id)a0;
- (void)removeFromKeychain;
- (int)verifyKeys;

@end
