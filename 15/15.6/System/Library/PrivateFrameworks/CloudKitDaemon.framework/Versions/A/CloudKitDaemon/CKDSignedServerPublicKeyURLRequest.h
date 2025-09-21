@class NSURL, CKPublicKey, NSDate;

@interface CKDSignedServerPublicKeyURLRequest : CKDURLRequest

@property (readonly, nonatomic) NSURL *plistURL;
@property (readonly, nonatomic) struct __SecPolicy { } *certificateTrustPolicy;
@property (retain) CKPublicKey *verifiedPublicKey;
@property (nonatomic) char requiresProtectionSource;
@property (nonatomic) char verifyFullIntegers;
@property (retain, nonatomic) NSDate *expirationDateOverride;

+ (id)certificateListServerPlist:(id)a0;
+ (struct __SecTrust { } *)createTrustEvalFromCertificateList:(id)a0 verifiedWithPolicy:(struct __SecPolicy { } *)a1;
+ (id)nearestExpirationInCertificateList:(id)a0;
+ (char)serverResponseIsComplete:(id)a0 requireProtectionSource:(char)a1;
+ (char)verifyData:(id)a0 withSignature:(id)a1 usingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;
+ (char)verifyInteger:(long long)a0 withSignature:(id)a1 usingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 verifyFullInteger:(char)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (id)httpMethod;
- (char)allowsAnonymousAccount;
- (char)canVerifySignedPlistValues:(id)a0 withKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (char)hasRequestBody;
- (id)initWithOperation:(id)a0 plistURL:(id)a1 verifyWithPolicy:(struct __SecPolicy { } *)a2;
- (void)requestDidParsePlistObject:(id)a0;
- (char)requiresConfiguration;
- (char)requiresDeviceID;
- (char)requiresTokenRegistration;

@end
