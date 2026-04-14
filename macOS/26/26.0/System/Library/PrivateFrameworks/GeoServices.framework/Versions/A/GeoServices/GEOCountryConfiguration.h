@class NSMutableArray, NSString, _GEOCountryConfigurationInfo, NSMutableDictionary, geo_isolater;
@protocol _GEOCountryConfigurationServerProxy;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate> {
    int _tileGroupChangedToken;
    geo_isolater *_isolater;
    _GEOCountryConfigurationInfo *_countryCodeInfo;
    struct atomic_flag { _Atomic BOOL _Value; } _isUpdating;
    NSMutableArray *_updateCompletionHandlers;
    NSMutableDictionary *_supportedFeatures;
    geo_isolater *_currentCountrySupportsNavigationIsolater;
    BOOL _currentCountrySupportsNavigation;
    BOOL _determinedCurrentCountrySupportsNavigation;
    double _urlAuthenticationTimeToLive;
    BOOL _hasURLAuthenticationTimeToLive;
    id<_GEOCountryConfigurationServerProxy> _serverProxy;
}

@property (class, readonly) GEOCountryConfiguration *sharedConfiguration;

@property (readonly, nonatomic) BOOL zilchPointsSupported;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL currentCountrySupportsTraffic;
@property (readonly, nonatomic) BOOL currentCountrySupportsDirections;
@property (readonly, nonatomic) BOOL currentCountrySupportsNavigation;
@property (readonly, nonatomic) BOOL currentCountrySupportsRouteGenius;
@property (readonly, nonatomic) BOOL currentCountrySupportsCarIntegration;
@property (readonly, nonatomic) BOOL currentCountrySupportsCommute;
@property (readonly, nonatomic) BOOL currentCountrySupportsElectricVehicleRouting;
@property (readonly, nonatomic) BOOL currentCountrySupportsAvoidStairs;
@property (readonly, nonatomic) BOOL currentCountrySupportsCustomRouteCreation;
@property (readonly, nonatomic) BOOL currentCountrySupportsTopographicMap;
@property (readonly, nonatomic) BOOL currentCountrySupportsCuratedRoutes;
@property (readonly, nonatomic) double urlAuthenticationTimeToLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)proxyClass;
+ (void)disableServerConnection;
+ (void)setProxyClass:(Class)a0;

- (void)fetchGEOIPCountryCode:(id)a0 callback:(id /* block */)a1;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1;
- (void)serverProxy:(id)a0 countryCodeDidChange:(id)a1;
- (void)dealloc;
- (void)fetchGEOIPCountryCode:(id)a0 auditToken:(id)a1 callback:(id /* block */)a2;
- (BOOL)countryCode:(id)a0 supportsFeature:(long long)a1;
- (BOOL)_currentCountrySupportsNavigation;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (BOOL)currentCountrySupportsFeature:(long long)a0;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (id)countryCodeWithSource:(unsigned int *)a0 updatedAtTime:(id *)a1;
- (void)serverProxyProvidersDidChange:(id)a0;
- (id)init;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1 decoder:(id /* block */)a2;
- (void)updateCountryConfiguration:(id /* block */)a0;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1 sourcePtr:(long long *)a2 decoder:(id /* block */)a3;
- (void)updateCountryConfiguration:(id /* block */)a0 callbackQueue:(id)a1;
- (void)updateProvidersForCurrentCountry;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1 sourcePtr:(long long *)a2;
- (BOOL)currentCountrySupportsNavigationIgnoringDevice;
- (void).cxx_destruct;

@end
