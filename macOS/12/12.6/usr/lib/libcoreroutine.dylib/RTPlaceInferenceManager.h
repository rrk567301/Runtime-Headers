@class NSObject, RTInferredMapItemFuser, NSMutableArray, NSDictionary, RTDefaultsManager, RTDistanceCalculator, RTMetricManager, RTLearnedLocationStore, RTLocationManager;
@protocol OS_dispatch_queue;

@interface RTPlaceInferenceManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTInferredMapItemFuser *inferredMapItemFuser;
@property (readonly, nonatomic) RTMetricManager *metricManager;
@property (readonly, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) NSDictionary *mapItemProviders;
@property (nonatomic) unsigned long long placeInferencesLimit;
@property (readonly, nonatomic) NSMutableArray *cachedLocations;
@property (readonly, nonatomic) unsigned long long cachedLocationIndex;

+ (void)sanityCheckMapItemProviders:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 defaultsManager:(id)a1 distanceCalculator:(id)a2 eventManager:(id)a3 fingerprintManager:(id)a4 inferredMapItemFuser:(id)a5 learnedLocationStore:(id)a6 locationManager:(id)a7 mapServiceManager:(id)a8 mapsSupportManager:(id)a9 metricManager:(id)a10 motionActivityManager:(id)a11 platform:(id)a12 portraitManager:(id)a13;
- (id)createAllMapItemProvidersWithDefaultManager:(id)a0 distanceCalculator:(id)a1 eventManager:(id)a2 fingerprintManager:(id)a3 learnedLocationStore:(id)a4 locationManager:(id)a5 mapServiceManager:(id)a6 mapsSupportManager:(id)a7 motionActivityManager:(id)a8 platform:(id)a9 portraitManager:(id)a10;
- (id)_placeInferencesForOptions:(id)a0 error:(id *)a1;
- (id)_selectLastLocationFromLocations:(id)a0 maxHorizontalUncertainty:(double)a1;
- (id)_estimatedLocationFromSortedLocations:(id)a0;
- (void)_updateCachedLocationsWithLocation:(id)a0;
- (id)_closestCachedLocationForLocation:(id)a0;
- (id)_selectMapItemProvidersForOptions:(id)a0;
- (BOOL)_learnedPlaceTypeForInferredMapItem:(id)a0 placeType:(unsigned long long *)a1 placeTypeSource:(unsigned long long *)a2 error:(id *)a3;
- (id)_getFallbackMapItemProviderForOptions:(id)a0;
- (id)_placeInferenceFromInferredMapItem:(id)a0 referenceLocation:(id)a1 error:(id *)a2;
- (id)_selectBestCandidateAndUpdateReferenceLocation:(id)a0;
- (void)sendPlaceInferenceMetrics:(id)a0 inferredMapItems:(id)a1 fusedMapItems:(id)a2 fallbackInferredMapItems:(id)a3 finalPlaceInferences:(id)a4 referenceLocation:(id)a5;
- (id)_selectMapItemProvidersForOptions:(id)a0 targetProvider:(unsigned long long)a1;
- (void)_addMapItemProviderFromArray:(id)a0 toSet:(id)a1;
- (BOOL)_inferUserSpecificPlaceTypeForInferredMapItem:(id)a0 userSpecificPlaceType:(unsigned long long *)a1 userSpecificPlaceTypeSource:(unsigned long long *)a2 error:(id *)a3;
- (unsigned long long)_learnedPlaceTypeFromUserSpecificPlaceType:(unsigned long long)a0;
- (unsigned long long)_learnedPlaceTypeSourceFromUserSpecificPlaceTypeSource:(unsigned long long)a0;
- (unsigned long long)_userSpecificPlaceTypeFromLearnedPlaceType:(unsigned long long)a0;
- (unsigned long long)_userSpecificPlaceTypeSourceFromLearnedPlaceTypeSource:(unsigned long long)a0;
- (id)_loiIdentifierForInferredMapItem:(id)a0;
- (void)fetchPlaceInferencesForOptions:(id)a0 handler:(id /* block */)a1;

@end
