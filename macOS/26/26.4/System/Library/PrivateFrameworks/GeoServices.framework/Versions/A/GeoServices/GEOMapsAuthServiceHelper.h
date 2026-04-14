@class NSString, geo_isolater;

@interface GEOMapsAuthServiceHelper : NSObject <GEOConfigChangeListenerDelegate, GEOResourceManifestTileGroupObserver> {
    struct atomic_flag { _Atomic BOOL _Value; } _isRenewing;
    NSString *_currentToken;
    geo_isolater *_currentEnvironmentStateIsolater;
    unsigned long long _currentEnvironmentState;
}

@property (class, readonly, nonatomic) GEOMapsAuthServiceHelper *sharedAuthHelper;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)doEnvironmentSwitchCheck:(id)a0 authProxyURL:(id)a1 suppressNotification:(BOOL)a2;
- (void)invalidateTokens;
- (void)refreshFromTask:(id)a0;
- (BOOL)isCurrentEnvironmentSecure;
- (void)requestFeatureFlagsWithURL:(id)a0 suppressNotification:(BOOL)a1;
- (void)addMapsAuthDidFinishObserver:(id)a0;
- (void)setConnectionProxyDictionary:(id)a0 url:(id)a1 proxyURL:(id)a2;
- (id)dictionaryForAuthTokenState;
- (void)removeMapsAuthDidFinishObserver:(id)a0;
- (void).cxx_destruct;
- (void)handleSecureProxyChallenge:(id)a0;
- (void)checkNetworkError:(id)a0 sendingGeoDErrorIfApplicable:(long long)a1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)refresh:(BOOL)a0;
- (id)init;
- (void)removeMapsAuthDidFinishObserver:(id)a0 forRequestType:(id)a1;
- (void)addMapsAuthDidFinishObserver:(id)a0 forRequestType:(id)a1;
- (void)renewMapsAuthProxyToken:(unsigned long long)a0 fromToken:(id)a1 authProxyURL:(id)a2 suppressNotification:(BOOL)a3;
- (void)sendProxyAuthNotification:(long long)a0;
- (void)addProxyAuthHeaderOrReAuth:(id)a0 authProxyURL:(id)a1;

@end
