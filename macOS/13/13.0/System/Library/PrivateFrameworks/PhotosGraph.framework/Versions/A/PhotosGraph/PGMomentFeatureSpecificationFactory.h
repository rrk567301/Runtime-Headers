@class CLSSceneTaxonomyHierarchy, CVNLPCLIPModel, NSObject;
@protocol OS_os_log;

@interface PGMomentFeatureSpecificationFactory : NSObject {
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
    NSObject<OS_os_log> *_loggingConnection;
    CVNLPCLIPModel *_CLIPModel;
}

- (void).cxx_destruct;
- (id)initWithSceneTaxonomy:(id)a0 loggingConnection:(id)a1;
- (id)allSupportedFeatureTypes;
- (id)specificationsForFeatureType:(unsigned long long)a0 progressReporter:(id)a1;
- (id)_trendsSpecifications;
- (id)_CLIPTrendsSpecificationsWithProgress:(id)a0;
- (id)_petSpecification;
- (id)_babySpecification;
- (id)_beachROISpecification;
- (id)_urbanROISpecification;
- (id)_waterROISpecification;
- (id)_mountainROISpecification;
- (id)_natureROISpecification;
- (id)defaultPeopleAssetFilter;
- (id)_peopleSpecification;
- (id)_socialGroupSpecification;
- (id)_petPersonSpecification;
- (id)_excitementAudioSpecification;
- (id)_foodSpecification;

@end
