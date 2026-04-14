@class NSString, NSArray;

@interface MDMMAIDBearerTokenAuthenticator : NSObject <MDMAuthenticatorProtocol>

@property (class, readonly) NSString *authenticationMethod;

@property (retain, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *personaID;
@property (retain, nonatomic) NSArray *anchorCertificateRefs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authenticatorWithAnchorCertificateRefs:(id)a0;
+ (id)_createMissingBearerTokenError;
+ (id)_createAuthInvalidError;
+ (id)_createGeneralServerError;
+ (id)_createManagedAppleAccountInvalidatedError;

- (void).cxx_destruct;
- (id)initWithTokens:(id)a0;
- (void)fetchTokenWithAuthParams:(id)a0 accountID:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)authenticateRequest:(id)a0 error:(id *)a1;
- (id)initWithRMAccountID:(id)a0;
- (BOOL)validAuthParams:(id)a0;
- (BOOL)doesWebAuthentication;
- (BOOL)canRefreshToken;
- (id)prepareForReauthenticationWithAuthParams:(id)a0 accountID:(id)a1 error:(id *)a2;
- (void)refreshTokenWithAuthParams:(id)a0 accountID:(id)a1 completionHandler:(id /* block */)a2;
- (void)_executeExchangeRequestWithURL:(id)a0 accountID:(id)a1 completionHandler:(id /* block */)a2;
- (void)_processTokenResponse:(id)a0 data:(id)a1 error:(id)a2 completionHandler:(id /* block */)a3;

@end
