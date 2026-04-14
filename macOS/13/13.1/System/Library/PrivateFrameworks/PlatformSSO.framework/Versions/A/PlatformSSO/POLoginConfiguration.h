@class NSString, NSDictionary, NSURL, NSArray;

@interface POLoginConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *customAssertionRequestHeaderClaims;
@property (retain) NSDictionary *customAssertionRequestBodyClaims;
@property (retain) NSDictionary *customLoginRequestHeaderClaims;
@property (retain) NSDictionary *customLoginRequestBodyClaims;
@property (retain) NSDictionary *customRefreshRequestHeaderClaims;
@property (retain) NSDictionary *customRefreshRequestBodyClaims;
@property (retain, nonatomic) NSString *invalidCredentialPredicate;
@property (retain, nonatomic) NSString *accountDisplayName;
@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSString *issuer;
@property (retain, nonatomic) NSString *audience;
@property (retain, nonatomic) NSURL *tokenEndpointURL;
@property (retain, nonatomic) NSURL *jwksEndpointURL;
@property (retain, nonatomic) NSURL *nonceEndpointURL;
@property (retain, nonatomic) NSString *nonceResponseKeypath;
@property (retain, nonatomic) NSString *serverNonceClaimName;
@property (retain, nonatomic) NSArray *customNonceRequestValues;
@property (retain, nonatomic) NSString *additionalScopes;
@property (nonatomic) BOOL includePreviousRefreshTokenInLoginRequest;
@property (retain, nonatomic) NSString *previousRefreshTokenClaimName;
@property (retain, nonatomic) NSArray *customLoginRequestValues;
@property (retain, nonatomic) NSURL *refreshEndpointURL;
@property (retain, nonatomic) NSArray *customRefreshRequestValues;
@property (retain, nonatomic) NSArray *kerberosTicketMappings;

+ (void)configurationWithOpenIdConfigurationURL:(id)a0 clientID:(id)a1 issuer:(id)a2 completion:(id /* block */)a3;
+ (void)configurationWithOpenIdConfigurationURL:(id)a0 identityProviderURL:(id)a1 clientId:(id)a2 issuer:(id)a3 completion:(id /* block */)a4;

- (id)description;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)initWithClientID:(id)a0 issuer:(id)a1 tokenEndpointURL:(id)a2 jwksEndpointURL:(id)a3 audience:(id)a4;
- (BOOL)setCustomAssertionRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomAssertionRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomLoginRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomLoginRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (id)_initWithClientId:(id)a0 issuer:(id)a1 tokenEndpointURL:(id)a2 jwksEndpointURL:(id)a3 audience:(id)a4;
- (BOOL)setCustomRefreshRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (BOOL)setCustomRefreshRequestBodyClaims:(id)a0 returningError:(id *)a1;

@end
