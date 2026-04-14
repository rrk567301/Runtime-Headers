@interface ExchangeOAuthClient : NSObject

+ (id)state;
+ (id)clientID;
+ (id)clientRedirect;
+ (id)defaultScope;
+ (id)defaultScopesForDomain;
+ (id)defaultScopesWithoutDomain;
+ (id)codeVerifier;
+ (id)codeChallengeMethod;
+ (id)scopeForUpgradingFromBasicCreds;
+ (id)hostFQDNFromURL:(id)a0;
+ (id)defaultScopeForHostURL:(id)a0;
+ (id)codeChallenge;

@end
