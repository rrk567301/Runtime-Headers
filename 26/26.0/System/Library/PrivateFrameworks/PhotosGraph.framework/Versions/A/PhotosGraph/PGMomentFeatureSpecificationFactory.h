@class CSUCLIPTextEncoderV3, PNBackgroundMemoriesEmbeddingSearcher, PHPhotoLibrary, NSObject, CLSSceneTaxonomyHierarchy;
@protocol OS_os_log;

@interface PGMomentFeatureSpecificationFactory : NSObject {
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    CSUCLIPTextEncoderV3 *_CLIPTextEncoder;
    PNBackgroundMemoriesEmbeddingSearcher *_embeddingsBasedAssetFetcher;
}

- (void).cxx_destruct;
- (id)_CLIPTrendsSpecificationsWithProgress:(id)a0;
- (id)_beachROISpecification;
- (id)_excitementAudioSpecification;
- (id)_foodSpecification;
- (id)_generateSceneAssetFilterForTrendsConfiguration:(id)a0;
- (BOOL)_isUnifiedEmbeddingModelAvailable;
- (id)_mountainROISpecification;
- (id)_natureROISpecification;
- (id)_peopleSpecification;
- (id)_petPersonSpecification;
- (id)_petSpecification;
- (id)_socialGroupSpecification;
- (id)_trendsSpecifications;
- (id)_unifiedSearchTrendsFeatureSpecificationsForTrendsConfigurations:(id)a0 withProgress:(id)a1;
- (id)_urbanROISpecification;
- (id)_v3TrendsFeatureSpecificationsForTrendsConfigurations:(id)a0 withProgress:(id)a1;
- (BOOL)_vskIndexIsFullClusteredForCurrentEmbeddingVersionWithPhotoLibrary:(id)a0;
- (id)_waterROISpecification;
- (id)allSupportedFeatureTypes;
- (id)defaultPeopleAssetFilter;
- (id)initWithSceneTaxonomy:(id)a0 photoLibrary:(id)a1 loggingConnection:(id)a2;
- (id)specificationsForFeatureType:(unsigned long long)a0 progressReporter:(id)a1;

@end
