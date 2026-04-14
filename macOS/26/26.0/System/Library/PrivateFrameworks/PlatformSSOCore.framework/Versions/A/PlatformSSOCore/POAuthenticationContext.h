@class NSDate, NSString, PODeviceConfiguration, NSURLSession, NSURL, NSMutableData, NSNumber, POLoginConfiguration;
@protocol POJWKSStorageProvider;

@interface POAuthenticationContext : NSObject

@property (retain, nonatomic) POLoginConfiguration *loginConfiguration;
@property (retain, nonatomic) PODeviceConfiguration *deviceConfiguration;
@property (retain, nonatomic) id<POJWKSStorageProvider> jwksStorageProvider;
@property (copy, nonatomic) NSString *refreshToken;
@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) NSMutableData *password;
@property (nonatomic) struct __SecKey { } *embeddedAssertionSigningKey;
@property (nonatomic) struct __SecCertificate { } *embeddedAssertionCertificate;
@property (retain, nonatomic) NSNumber *userSepSigningAlgorithm;
@property (copy, nonatomic) NSString *resumedEmbeddedAssertion;
@property (copy, nonatomic) NSString *encryptionContext;
@property (copy, nonatomic) NSString *serverNonce;
@property (copy, nonatomic) NSDate *serverNonceReceived;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *scope;
@property (copy, nonatomic) NSString *apv;
@property (retain, nonatomic) NSURLSession *urlSession;
@property unsigned long long loginType;
@property (nonatomic) BOOL federated;
@property unsigned long long wsTrustVersion;
@property (copy, nonatomic) NSURL *wsTrustFederationMexURL;
@property (copy, nonatomic) NSURL *wsTrustFederationURL;
@property (copy, nonatomic) NSString *wsTrustFederationNonce;
@property (copy, nonatomic) NSString *tokenTypeNamespace;
@property (nonatomic) long long retriesRemaining;
@property (nonatomic) long long retryDelay;

- (id)init;
- (void).cxx_destruct;
- (id)resumeData;
- (void)addRequiredScope:(id)a0;
- (void)applyResumeData:(id)a0;
- (BOOL)isServerNonceExpiredOrMissing;

@end
