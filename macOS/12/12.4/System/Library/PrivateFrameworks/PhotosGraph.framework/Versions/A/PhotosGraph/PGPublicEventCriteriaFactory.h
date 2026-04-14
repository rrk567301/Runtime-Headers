@class PGGraph, NSDictionary;

@interface PGPublicEventCriteriaFactory : NSObject

@property (retain, nonatomic) PGGraph *graph;
@property (readonly, nonatomic) NSDictionary *disambiguationCriteriaByEventCategory;
@property (readonly, nonatomic) NSDictionary *highConfidenceCriteriaByEventCategory;
@property (readonly, nonatomic) NSDictionary *prohibitedCriteriaByEventCategory;

+ (id)publicEventCriteriaByCategoryForGraph:(id)a0;

- (void).cxx_destruct;
- (id)_publicEventCriteriaByCategory;
- (id)_sportsCriteriaArray;
- (id)_musicConcertsCriteriaArray;
- (id)_nightLifeCriteriaArray;
- (id)_festivalsAndFairsCriteriaArray;
- (id)_theaterCriteriaArray;
- (id)_danceCriteriaArray;
- (id)_artsAndMuseumsCriteriaArray;
- (id)_appleEventsCriteriaArray;
- (id)_meaningCriteriaByEventCategoryForMeaningIdentifierByEventCategories:(id)a0 inferenceType:(unsigned long long)a1;

@end
