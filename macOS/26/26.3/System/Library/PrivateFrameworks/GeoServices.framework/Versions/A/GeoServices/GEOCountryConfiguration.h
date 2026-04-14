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

+ (void)disableServerConnection;
+ (void)setProxyClass:(Class)a0;
+ (Class)proxyClass;

- (id)defaultForKey:(id)a0 defaultValue:(id)a1;
- (void)updateCountryConfiguration:(id /* block */)a0;
- (void)fetchGEOIPCountryCode:(id)a0 auditToken:(id)a1 callback:(id /* block */)a2;
- (BOOL)currentCountrySupportsNavigationIgnoringDevice;
- (void)serverProxyProvidersDidChange:(id)a0;
- (void)serverProxy:(id)a0 countryCodeDidChange:(id)a1;
- (id)countryCodeWithSource:(unsigned int *)a0 updatedAtTime:(id *)a1;
- (id)init;
- (BOOL)_currentCountrySupportsNavigation;
- (BOOL)countryCode:(id)a0 supportsFeature:(long long)a1;
- (void).cxx_destruct;
- (BOOL)currentCountrySupportsFeature:(long long)a0;
- (void)updateProvidersForCurrentCountry;
- (void)dealloc;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1 sourcePtr:(long long *)a2;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1 sourcePtr:(long long *)a2 decoder:(id /* block */)a3;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1 decoder:(id /* block */)a2;
- (void)fetchGEOIPCountryCode:(id)a0 callback:(id /* block */)a1;
- (void)updateCountryConfiguration:(id /* block */)a0 callbackQueue:(id)a1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;

@end
