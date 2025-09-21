@class NSString, POLoginConfiguration, NSURL, NSArray, NSData, NSNumber;

@interface ASAuthorizationProviderExtensionLoginConfiguration : NSObject

@property (readonly, nonatomic) POLoginConfiguration *loginConfiguration;
@property (copy, nonatomic) NSString *invalidCredentialPredicate;
@property (copy, nonatomic) NSString *accountDisplayName;
@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) NSString *issuer;
@property (copy, nonatomic) NSString *audience;
@property (copy, nonatomic) NSURL *tokenEndpointURL;
@property (copy, nonatomic) NSURL *jwksEndpointURL;
@property (copy, nonatomic) NSArray *jwksTrustedRootCertificates;
@property (copy, nonatomic) NSData *deviceContext;
@property (nonatomic) unsigned long long userSecureEnclaveKeyBiometricPolicy;
@property (copy, nonatomic) NSURL *nonceEndpointURL;
@property (copy, nonatomic) NSString *nonceResponseKeypath;
@property (copy, nonatomic) NSString *serverNonceClaimName;
@property (copy, nonatomic) NSArray *customNonceRequestValues;
@property (copy, nonatomic) NSString *additionalScopes;
@property (copy, nonatomic) NSString *additionalAuthorizationScopes;
@property (nonatomic) char includePreviousRefreshTokenInLoginRequest;
@property (copy, nonatomic) NSString *previousRefreshTokenClaimName;
@property (copy, nonatomic) NSString *customRequestJWTParameterName;
@property (copy, nonatomic) NSArray *customLoginRequestValues;
@property (copy, nonatomic) NSString *uniqueIdentifierClaimName;
@property (copy, nonatomic) NSString *groupRequestClaimName;
@property (copy, nonatomic) NSString *groupResponseClaimName;
@property (copy, nonatomic) NSArray *kerberosTicketMappings;
@property (copy, nonatomic) NSURL *refreshEndpointURL;
@property (copy, nonatomic) NSArray *customRefreshRequestValues;
@property (nonatomic) long long federationType;
@property (copy, nonatomic) NSString *federationRequestURN;
@property (copy, nonatomic) NSURL *federationMEXURL;
@property (copy, nonatomic) NSURL *federationUserPreauthenticationURL;
@property (copy, nonatomic) NSString *federationMEXURLKeypath;
@property (copy, nonatomic) NSString *federationPredicate;
@property (copy, nonatomic) NSArray *customFederationUserPreauthenticationRequestValues;
@property (nonatomic) struct __SecKey { } *loginRequestEncryptionPublicKey;
@property (copy, nonatomic) NSData *loginRequestEncryptionAPVPrefix;
@property (copy, nonatomic) NSNumber *loginRequestEncryptionAlgorithm;
@property (copy, nonatomic) NSData *loginRequestHPKEPreSharedKey;
@property (copy, nonatomic) NSData *loginRequestHPKEPreSharedKeyID;
@property (copy, nonatomic) NSURL *keyEndpointURL;
@property (copy, nonatomic) NSArray *customKeyExchangeRequestValues;
@property (copy, nonatomic) NSArray *customKeyRequestValues;
@property (copy, nonatomic) NSData *hpkePreSharedKey;
@property (copy, nonatomic) NSData *hpkePreSharedKeyID;
@property (nonatomic) struct __SecKey { } *hpkeAuthPublicKey;

+ (void)configurationWithOpenIDConfigurationURL:(id)a0 clientID:(id)a1 issuer:(id)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithClientID:(id)a0 issuer:(id)a1 tokenEndpointURL:(id)a2 jwksEndpointURL:(id)a3 audience:(id)a4;
- (id)initWithLoginConfiguration:(id)a0;
- (char)setCustomAssertionRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomAssertionRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomKeyExchangeRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomKeyExchangeRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomKeyRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomKeyRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomLoginRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomLoginRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomRefreshRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomRefreshRequestHeaderClaims:(id)a0 returningError:(id *)a1;

@end
