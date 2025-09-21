@class RTLearnedVisit, RTPlatform, NSDictionary, RTBiomeManager, RTDefaultsManager, RTDistanceCalculator, RTPlaceTypeClassifierMetricsCalculator, RTLearnedLocationStore, NSMutableArray;

@interface RTLearnedPlaceTypeInferenceGenerator : NSObject

@property (retain, nonatomic) RTBiomeManager *biomeManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTPlaceTypeClassifierMetricsCalculator *placeTypeClassifierMetricsCalculator;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) NSMutableArray *placeStats;
@property (retain, nonatomic) RTLearnedVisit *firstVisit;
@property (retain, nonatomic) RTLearnedVisit *lastVisit;
@property (retain, nonatomic) NSDictionary *placeStatsUUIDStringsToMLFeaturesMap;

+ (id)sortPlaceStats:(id)a0;
+ (id)getCandidateGenerationParameters;
+ (id)modelTypeToString:(unsigned long long)a0;
+ (id)placeTypeClassificationSourceToString:(unsigned long long)a0;
+ (id)placeTypeClassifierModelTargetClass:(unsigned long long)a0;
+ (id)placeTypeClassifierModelThresholdForPlatform:(id)a0 placeType:(unsigned long long)a1;

- (void)log;
- (id)init;
- (void).cxx_destruct;
- (id)fuseInferences:(id)a0;
- (id)inferPlaceTypes;
- (id)_getCandidatePlaceStatsFromPlaceStats:(id)a0;
- (id)_getFullLocationHistoryDateInterval;
- (id)_inferPlaceTypesFromMultiClassModelForPlaceType:(unsigned long long)a0 placeStats:(id)a1 metricsData:(id)a2;
- (id)_inferPlaceTypesFromRankerModelForPlaceType:(unsigned long long)a0 placeStats:(id)a1 metricsData:(id)a2;
- (void)_prepareMLFeaturesWithPlaceStats:(id)a0;
- (void)_storeMetricsForNonFallbackPlacesWithHome:(id)a0 homeSource:(unsigned long long)a1 work:(id)a2 workSource:(unsigned long long)a3;
- (id)filterPlaceStats:(id)a0 referenceLearnedPlace:(id)a1 minDistanceThreshold:(id)a2 maxDistanceThreshold:(id)a3;
- (id)filteredPlaceStatsByWeeklyVisitThreshold:(double)a0 placeStats:(id)a1;
- (id)inferPlaceTypesFromDailyPatternsWithPlaceStats:(id)a0 dateInterval:(id)a1;
- (id)inferPlaceTypesFromFallbackWithPlaceStats:(id)a0 dateInterval:(id)a1;
- (id)inferPlaceTypesFromModelForModelType:(unsigned long long)a0 placeType:(unsigned long long)a1 placeStats:(id)a2 metricsData:(id)a3;
- (id)inferPlaceTypesFromModelWithCandidateSelection:(BOOL)a0 homeModelType:(unsigned long long)a1 workModelType:(unsigned long long)a2 placeStats:(id)a3 dateInterval:(id)a4;
- (id)inferPlaceTypesFromModelWithPlaceStats:(id)a0 dateInterval:(id)a1;
- (id)inferPlaceTypesFromRuleEngineWithPlaceStats:(id)a0 dateInterval:(id)a1;
- (id)inferPlaceTypesFromTopMedianDwellTimeWithPlaceStats:(id)a0 dateInterval:(id)a1;
- (id)inferWorkFromHistoryAndPlaceStats:(id)a0;
- (id)initWithBiomeManager:(id)a0 defaultsManager:(id)a1 distanceCalculator:(id)a2 learnedLocationStore:(id)a3 placeTypeClassifierMetricsCalculator:(id)a4 platform:(id)a5;
- (id)placeCandidateStatsForType:(unsigned long long)a0 placeStats:(id)a1 dateInterval:(id)a2 excludingPlaces:(id)a3 parameters:(id)a4 distanceThreshold:(double)a5;
- (id)placeCandidatesFromDailyPatternsForType:(unsigned long long)a0 placeStats:(id)a1 parameters:(id)a2;
- (id)placeCandidatesFromTopMedianDwellTimeForType:(unsigned long long)a0 placeStats:(id)a1 parameters:(id)a2;
- (void)submitVisits:(id)a0 place:(id)a1;
- (BOOL)supportsModel;
- (void)updateTopCandidates:(id)a0 withPlaceStat:(id)a1 predictedProbability:(id)a2 placeType:(unsigned long long)a3;

@end
