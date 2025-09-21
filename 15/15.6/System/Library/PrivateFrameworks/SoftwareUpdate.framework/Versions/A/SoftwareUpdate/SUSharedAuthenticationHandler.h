@class NSMutableDictionary, NSURLCredential, NSMutableSet, NSLock;

@interface SUSharedAuthenticationHandler : NSObject {
    NSMutableDictionary *_certValidatedByHost;
    char _evCheckingDisabledByPref;
    NSMutableSet *_disabledHosts;
}

@property (retain, nonatomic) NSLock *stateLock;
@property (copy) NSURLCredential *stashedURLCredential;

+ (id)sharedAuthenticationHandler;

- (void)dealloc;
- (id)init;
- (void)_handleAuthenticationChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setCertValidated:(char)a0 forHost:(id)a1;
- (char)certValidatedForURL:(id)a0;
- (id /* block */)challengeBlock;
- (void)disableHostForEVCheck:(id)a0;
- (void)enableHostForEVCheck:(id)a0;
- (char)evValidatedForURL:(id)a0;
- (id /* block */)extendedChallengeBlock;
- (char)isHostDiabledForEVCheck:(id)a0;

@end
