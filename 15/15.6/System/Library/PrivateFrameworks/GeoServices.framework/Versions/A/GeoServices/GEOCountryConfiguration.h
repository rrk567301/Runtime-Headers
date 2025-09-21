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
    char _currentCountrySupportsNavigation;
    char _determinedCurrentCountrySupportsNavigation;
    double _urlAuthenticationTimeToLive;
    char _hasURLAuthenticationTimeToLive;
    id<_GEOCountryConfigurationServerProxy> _serverProxy;
}

@property (class, readonly) GEOCountryConfiguration *sharedConfiguration;

@property (readonly, nonatomic) char zilchPointsSupported;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) char currentCountrySupportsTraffic;
@property (readonly, nonatomic) char currentCountrySupportsDirections;
@property (readonly, nonatomic) char currentCountrySupportsNavigation;
@property (readonly, nonatomic) char currentCountrySupportsRouteGenius;
@property (readonly, nonatomic) char currentCountrySupportsCarIntegration;
@property (readonly, nonatomic) char currentCountrySupportsCommute;
@property (readonly, nonatomic) char currentCountrySupportsElectricVehicleRouting;
@property (readonly, nonatomic) char currentCountrySupportsAvoidStairs;
@property (readonly, nonatomic) char currentCountrySupportsCustomRouteCreation;
@property (readonly, nonatomic) char currentCountrySupportsTopographicMap;
@property (readonly, nonatomic) char currentCountrySupportsCuratedRoutes;
@property (readonly, nonatomic) double urlAuthenticationTimeToLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)disableServerConnection;
+ (void)setUseLocalProxy:(char)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1;
- (char)_currentCountrySupportsNavigation;
- (char)countryCode:(id)a0 supportsFeature:(long long)a1;
- (id)countryCodeWithSource:(unsigned int *)a0 updatedAtTime:(id *)a1;
- (char)currentCountrySupportsFeature:(long long)a0;
- (char)currentCountrySupportsNavigationIgnoringDevice;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1 decoder:(id /* block */)a2;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1 sourcePtr:(long long *)a2;
- (id)defaultForKey:(id)a0 defaultValue:(id)a1 sourcePtr:(long long *)a2 decoder:(id /* block */)a3;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (void)serverProxy:(id)a0 countryCodeDidChange:(id)a1;
- (void)serverProxyProvidersDidChange:(id)a0;
- (void)updateCountryConfiguration:(id /* block */)a0;
- (void)updateCountryConfiguration:(id /* block */)a0 callbackQueue:(id)a1;
- (void)updateProvidersForCurrentCountry;

@end
