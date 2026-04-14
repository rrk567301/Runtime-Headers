@class NSString, POLoginConfiguration, NSURL, NSArray;

@interface ASAuthorizationProviderExtensionLoginConfiguration : NSObject

@property (readonly, nonatomic) POLoginConfiguration *loginConfiguration;
@property (copy, nonatomic) NSString *invalidCredentialPredicate;
@property (copy, nonatomic) NSString *accountDisplayName;
@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) NSString *issuer;
@property (copy, nonatomic) NSString *audience;
@property (copy, nonatomic) NSURL *tokenEndpointURL;
@property (copy, nonatomic) NSURL *jwksEndpointURL;
@property (copy, nonatomic) NSURL *nonceEndpointURL;
@property (copy, nonatomic) NSString *nonceResponseKeypath;
@property (copy, nonatomic) NSString *serverNonceClaimName;
@property (copy, nonatomic) NSArray *customNonceRequestValues;
@property (copy, nonatomic) NSString *additionalScopes;
@property (nonatomic) BOOL includePreviousRefreshTokenInLoginRequest;
@property (copy, nonatomic) NSString *previousRefreshTokenClaimName;
@property (copy, nonatomic) NSArray *customLoginRequestValues;
@property (copy, nonatomic) NSArray *kerberosTicketMappings;

+ (void)configurationWithOpenIDConfigurationURL:(id)a0 clientID:(id)a1 issuer:(id)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithLoginConfiguration:(id)a0;
- (id)initWithClientID:(id)a0 issuer:(id)a1 tokenEndpointURL:(id)a2 jwksEndpointURL:(id)a3 audience:(id)a4;
- (BOOL)setCustomAssertionRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomAssertionRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomLoginRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomLoginRequestBodyClaims:(id)a0 returningError:(id *)a1;

@end
