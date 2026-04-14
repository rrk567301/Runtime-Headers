@class NSMutableDictionary, NSURLCredential, NSMutableSet, NSLock;

@interface SUSharedAuthenticationHandler : NSObject {
    NSMutableDictionary *_certValidatedByHost;
    BOOL _evCheckingDisabledByPref;
    NSMutableSet *_disabledHosts;
}

@property (retain, nonatomic) NSLock *stateLock;
@property (retain) NSURLCredential *stashedURLCredential;

+ (id)sharedAuthenticationHandler;

- (void)dealloc;
- (id)init;
- (BOOL)evValidatedForURL:(id)a0;
- (void)disableHostForEVCheck:(id)a0;
- (BOOL)certValidatedForURL:(id)a0;
- (void)enableHostForEVCheck:(id)a0;
- (id /* block */)challengeBlock;
- (id /* block */)extendedChallengeBlock;
- (BOOL)isHostDiabledForEVCheck:(id)a0;
- (void)_setCertValidated:(BOOL)a0 forHost:(id)a1;

@end
