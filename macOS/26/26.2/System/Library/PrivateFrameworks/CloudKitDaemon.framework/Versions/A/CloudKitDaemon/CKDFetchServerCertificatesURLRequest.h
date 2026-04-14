@class NSArray;

@interface CKDFetchServerCertificatesURLRequest : CKDURLRequest

@property (readonly, nonatomic) struct __SecPolicy { } *certificateTrustPolicy;
@property (retain) NSArray *validatedTrusts;

+ (id)certificateListServerPlist:(id)a0;
+ (struct __SecTrust { } *)createTrustEvalFromCertificateList:(id)a0 verifiedWithPolicy:(struct __SecPolicy { } *)a1;
+ (id)nearestExpirationInCertificateList:(id)a0;
+ (BOOL)serverResponseIsComplete:(id)a0;

- (BOOL)allowsAnonymousAccount;
- (id)httpMethod;
- (void).cxx_destruct;
- (long long)serverType;
- (id)url;
- (long long)partitionType;
- (void)dealloc;
- (BOOL)hasRequestBody;
- (id)initWithOperation:(id)a0 verifyWithPolicy:(struct __SecPolicy { } *)a1;
- (void)requestDidParsePlistObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresTokenRegistration;

@end
