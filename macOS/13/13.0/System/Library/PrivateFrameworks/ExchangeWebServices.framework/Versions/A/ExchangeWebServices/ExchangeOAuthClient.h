@interface ExchangeOAuthClient : NSObject

+ (id)state;
+ (id)clientID;
+ (id)clientRedirect;
+ (id)defaultScope;
+ (id)defaultScopesWithoutDomain;
+ (id)defaultScopesForDomain;
+ (id)scopeForUpgradingFromBasicCreds;
+ (id)hostFQDNFromURL:(id)a0;
+ (id)defaultScopeForHostURL:(id)a0;
+ (id)codeVerifier;
+ (id)codeChallengeMethod;
+ (id)codeChallenge;

@end
