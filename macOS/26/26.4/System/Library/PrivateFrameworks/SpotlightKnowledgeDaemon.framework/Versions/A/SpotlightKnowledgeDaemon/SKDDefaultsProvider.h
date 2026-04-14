@class NSArray, NSString, NSLocale;
@protocol SKDSpotlightResourcesProviding, SKDLocaleProviding, SKDFeatureFlagsProviding, SKDDeviceProviding;

@interface SKDDefaultsProvider : NSObject <SKDDefaultsProviding> {
    id<SKDSpotlightResourcesProviding> _spotlightResourcesProvider;
    id<SKDFeatureFlagsProviding> _featureFlagsProvider;
    id<SKDLocaleProviding> _localeProvider;
    id<SKDDeviceProviding> _deviceProvider;
}

@property (readonly, nonatomic, getter=isEmbeddingsEnabled) BOOL embeddingsEnabled;
@property (readonly, nonatomic, getter=isOfflineLocationsEnabled) BOOL offlineLocationsEnabled;
@property (readonly, nonatomic, getter=isOnlineLocationsEnabled) BOOL onlineLocationsEnabled;
@property (readonly, nonatomic) NSArray *globalExcludeBundles;
@property (readonly, nonatomic) NSString *geoResourcesPath;
@property (readonly, nonatomic) NSArray *geoTerritoryTypes;
@property (readonly, nonatomic, getter=isGenerativeMLSupported) BOOL generativeMLSupported;
@property (readonly, nonatomic, getter=isPipelineEnabled) BOOL pipelineEnabled;
@property (readonly, nonatomic, getter=isPipelineRefactorStandalone) BOOL pipelineRefactorStandalone;
@property (readonly, nonatomic, getter=isPipelineDebugEnabled) BOOL pipelineDebugEnabled;
@property (readonly, nonatomic, getter=isMetricsJobRefactorEnabled) BOOL metricsJobRefactorEnabled;
@property (readonly, nonatomic, getter=isFullTextEmbeddingEnabled) BOOL fullTextEmbeddingEnabled;
@property (readonly, nonatomic) NSLocale *currentLocale;
@property (readonly, nonatomic) NSString *currentRegion;
@property (readonly, nonatomic) NSArray *currentPreferredLanguages;

- (void).cxx_destruct;
- (BOOL)isAppleIntelligenceEnabled;
- (BOOL)enabledForPipeline:(id)a0;
- (id)initWithSpotlightResourcesProvider:(id)a0 featureFlagsProvider:(id)a1 localeProvider:(id)a2 deviceProvider:(id)a3;
- (id)subscribeToLocaleChanges:(id /* block */)a0;
- (id)subscribeToSpotlightResourcesChanges:(id /* block */)a0;
- (id)versionForPipeline:(id)a0;

@end
