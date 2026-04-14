@class NSDictionary, PGGraph, NSObject, CLSSceneTaxonomyHierarchy;
@protocol OS_os_log;

@interface PGPublicEventCriteriaFactory : NSObject {
    PGGraph *_graph;
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly, nonatomic) NSDictionary *disambiguationCriteriaByEventCategory;
@property (readonly, nonatomic) NSDictionary *highConfidenceCriteriaByEventCategory;
@property (readonly, nonatomic) NSDictionary *prohibitedCriteriaByEventCategory;

+ (id)publicEventCriteriaByCategoryForGraph:(id)a0 sceneTaxonomy:(id)a1 loggingConnection:(id)a2;

- (void).cxx_destruct;
- (id)_festivalsAndFairsCriteriaArray;
- (id)_appleEventsCriteriaArray;
- (id)_artsAndMuseumsCriteriaArray;
- (id)_danceCriteriaArray;
- (id)_meaningCriteriaByEventCategoryForEventCategoriesByMeaningIdentifier:(id)a0 inferenceType:(unsigned long long)a1;
- (id)_musicConcertsCriteriaArray;
- (id)_nightLifeCriteriaArray;
- (id)_publicEventCriteriaByCategory;
- (id)_sportsCriteriaArray;
- (id)_theaterCriteriaArray;
- (id)initWithGraph:(id)a0 sceneTaxonomy:(id)a1 loggingConnection:(id)a2;

@end
