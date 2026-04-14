@class RTPlatform, RTPlaceTypeClassifierMetricsCalculator, RTDistanceCalculator, RTLearnedLocationStore, NSDictionary, NSMutableArray, RTLearnedVisit;

@interface RTLearnedPlaceTypeInferenceGenerator : NSObject

@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTPlaceTypeClassifierMetricsCalculator *placeTypeClassifierMetricsCalculator;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) NSMutableArray *placeStats;
@property (retain, nonatomic) RTLearnedVisit *firstVisit;
@property (retain, nonatomic) RTLearnedVisit *lastVisit;
@property (retain, nonatomic) NSDictionary *placeStatsUUIDStringsToMLFeaturesMap;

+ (id)placeTypeClassificationSourceToString:(unsigned long long)a0;
+ (id)modelTypeToString:(unsigned long long)a0;
+ (id)placeTypeClassifierModelThresholdForPlatform:(id)a0 placeType:(unsigned long long)a1;
+ (id)placeTypeClassifierModelTargetClass:(unsigned long long)a0;
+ (id)sortPlaceStats:(id)a0;
+ (id)getCandidateGenerationParameters;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (id)initWithDistanceCalculator:(id)a0 learnedLocationStore:(id)a1 placeTypeClassifierMetricsCalculator:(id)a2 platform:(id)a3;
- (void)submitVisits:(id)a0 place:(id)a1;
- (id)inferPlaceTypesFromDailyPatterns;
- (id)inferPlaceTypesFromTopMedianDwellTime;
- (BOOL)supportsModel;
- (id)_inferPlaceTypesFromRankerModelForPlaceType:(unsigned long long)a0 placeStats:(id)a1 metricsData:(id)a2;
- (id)_inferPlaceTypesFromMultiClassModelForPlaceType:(unsigned long long)a0 placeStats:(id)a1 metricsData:(id)a2;
- (id)inferPlaceTypesFromModelForModelType:(unsigned long long)a0 placeType:(unsigned long long)a1 placeStats:(id)a2 metricsData:(id)a3;
- (id)inferPlaceTypesFromModelWithCandidateSelection:(BOOL)a0 homeModelType:(unsigned long long)a1 workModelType:(unsigned long long)a2;
- (id)inferPlaceTypesFromModel;
- (id)filteredPlaceStatsByWeeklyVisitThreshold:(double)a0;
- (id)inferPlaceTypesFromRuleEngine;
- (id)fuseInferences:(id)a0;
- (id)inferPlaceTypesFromFallback;
- (id)inferPlaceTypes;
- (id)placeCandidatesFromDailyPatternsForType:(unsigned long long)a0 parameters:(id)a1;
- (id)placeCandidatesFromTopMedianDwellTimeForType:(unsigned long long)a0 parameters:(id)a1;
- (id)filterPlaceStats:(id)a0 referenceLearnedPlace:(id)a1 minDistanceThreshold:(id)a2 maxDistanceThreshold:(id)a3;
- (id)placeCandidateStatsForType:(unsigned long long)a0 excludingPlaces:(id)a1 parameters:(id)a2 distanceThreshold:(double)a3;
- (void)_prepareMLFeatures;

@end
