@class NSString, NSDictionary;

@interface MDMOAuth2Authenticator : NSObject <MDMAuthenticatorProtocol>

@property (class, readonly) NSString *authenticationMethod;

@property (copy, nonatomic) NSDictionary *tokens;
@property (retain, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *personaID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializeTokens:(id)a0;
+ (id)_createOAuth2InvalidError;
+ (id)deserializeTokens:(id)a0;

- (void).cxx_destruct;
- (id)initWithTokens:(id)a0;
- (void)authTokensWithCallbackURL:(id)a0 authParams:(id)a1 completionHandler:(id /* block */)a2;
- (id)webAuthenticationURLForAuthParams:(id)a0 userIdentifier:(id)a1;
- (char)authenticateRequest:(id)a0 error:(id *)a1;
- (char)canRefreshToken;
- (id)_authorizationGrantURLWithAuthParams:(id)a0;
- (void)_executeTokenRequestWithURL:(id)a0 body:(id)a1 completionHandler:(id /* block */)a2;
- (void)_processTokenResponse:(id)a0 data:(id)a1 error:(id)a2 completionHandler:(id /* block */)a3;
- (void)_refreshRequestWithRefreshToken:(id)a0 authParams:(id)a1 completionHandler:(id /* block */)a2;
- (void)_tokenRequestWithCode:(id)a0 authParams:(id)a1 completionHandler:(id /* block */)a2;
- (char)doesWebAuthentication;
- (id)initWithRMAccountID:(id)a0;
- (id)prepareForReauthenticationWithAuthParams:(id)a0 accountID:(id)a1 error:(id *)a2;
- (void)refreshTokenWithAuthParams:(id)a0 accountID:(id)a1 completionHandler:(id /* block */)a2;
- (char)validAuthParams:(id)a0;

@end
