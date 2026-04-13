@interface ExchangeOAuthRequest : NSObject

+ (id)requestForURL:(id)a0;
+ (BOOL)urlPageWillContainAuthorizationCode:(id)a0;
+ (id)urlForOAuthURI:(id)a0 clientID:(id)a1 redirectURI:(id)a2 scope:(id)a3 username:(id)a4 state:(id)a5 codeChallenge:(id)a6 codeChallengeMethod:(id)a7;
+ (id)authCodeFromURL:(id)a0;
+ (id)stateFromURL:(id)a0;
+ (id)upgradeURItoV2:(id)a0;
+ (id)downgradeURItoV1:(id)a0;

@end
