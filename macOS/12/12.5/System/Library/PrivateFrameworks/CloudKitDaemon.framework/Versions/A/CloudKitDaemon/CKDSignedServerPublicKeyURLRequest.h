@class NSURL, CKPublicKey, NSDate;

@interface CKDSignedServerPublicKeyURLRequest : CKDURLRequest

@property (readonly, nonatomic) NSURL *plistURL;
@property (readonly, nonatomic) struct __SecPolicy { } *certificateTrustPolicy;
@property (retain) CKPublicKey *verifiedPublicKey;
@property (nonatomic) BOOL requiresProtectionSource;
@property (nonatomic) BOOL verifyFullIntegers;
@property (retain, nonatomic) NSDate *expirationDateOverride;

+ (BOOL)serverResponseIsComplete:(id)a0 requireProtectionSource:(BOOL)a1;
+ (id)certificateListServerPlist:(id)a0;
+ (struct __SecTrust { } *)createTrustEvalFromCertificateList:(id)a0 verifiedWithPolicy:(struct __SecPolicy { } *)a1;
+ (id)nearestExpirationInCertificateList:(id)a0;
+ (BOOL)verifyData:(id)a0 withSignature:(id)a1 usingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;
+ (BOOL)verifyInteger:(long long)a0 withSignature:(id)a1 usingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 verifyFullInteger:(BOOL)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)url;
- (long long)partitionType;
- (id)httpMethod;
- (long long)serverType;
- (BOOL)requiresTokenRegistration;
- (void)requestDidParsePlistObject:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)hasRequestBody;
- (BOOL)canVerifySignedPlistValues:(id)a0 withKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;
- (id)initWithOperation:(id)a0 plistURL:(id)a1 verifyWithPolicy:(struct __SecPolicy { } *)a2;

@end
