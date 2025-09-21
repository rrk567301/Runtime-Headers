@class NSArray;

@interface CKDFetchServerCertificatesURLRequest : CKDURLRequest

@property (readonly, nonatomic) struct __SecPolicy { } *certificateTrustPolicy;
@property (retain) NSArray *validatedTrusts;

+ (id)certificateListServerPlist:(id)a0;
+ (struct __SecTrust { } *)createTrustEvalFromCertificateList:(id)a0 verifiedWithPolicy:(struct __SecPolicy { } *)a1;
+ (id)nearestExpirationInCertificateList:(id)a0;
+ (BOOL)serverResponseIsComplete:(id)a0;

- (id)httpMethod;
- (BOOL)allowsAnonymousAccount;
- (void)dealloc;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (void).cxx_destruct;
- (BOOL)hasRequestBody;
- (id)initWithOperation:(id)a0 verifyWithPolicy:(struct __SecPolicy { } *)a1;
- (void)requestDidParsePlistObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresTokenRegistration;

@end
