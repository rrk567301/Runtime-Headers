@class NSString, NSURLSession;

@interface NSPPrivacyTokenManager : NSObject

@property (nonatomic) Class authenticationClass;
@property (retain, nonatomic) NSString *tokenFetchURL;
@property (retain, nonatomic) NSURLSession *tokenFetchURLSession;
@property (nonatomic) unsigned long long totalRequestedTokenCount;
@property (nonatomic) unsigned long long totalUnactivatedTokenCount;
@property (nonatomic) unsigned long long totalActivatedTokenCount;
@property (retain, nonatomic) NSString *trueClientIPAddress;

+ (id)sharedTokenManager;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)generateTokensUsingTokenBlinder:(id)a0 tokenCount:(unsigned long long)a1;
- (id)activateTokens:(id)a0 unactivatedListFromServer:(id)a1;
- (BOOL)updateTokenFetchURL:(id)a0 authenticationType:(int)a1 ignoreInvalidCerts:(BOOL)a2;
- (id)generateRandomTokens:(unsigned long long)a0;
- (void)fetchPrivacyTokensOnInterface:(id)a0 tierType:(id)a1 proxyURL:(id)a2 tokenVendor:(id)a3 tokenIssuancePublicKey:(id)a4 tokenCount:(unsigned long long)a5 accessToken:(id)a6 retryAttempt:(unsigned long long)a7 completionHandler:(id /* block */)a8;
- (void)copyTokenInfo:(id)a0;

@end
