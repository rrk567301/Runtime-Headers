@interface PLMomentGenerationUtils : NSObject

+ (short)externalOriginatorStateForAsset:(id)a0;
+ (void)processLocationIfNecessaryInMoment:(id)a0 usingManager:(id)a1 frequentLocations:(id)a2 frequentLocationsDidChange:(BOOL)a3;
+ (unsigned short)_locationTypeForLocation:(id)a0 horizontalAccuracy:(double)a1 startDate:(id)a2 endDate:(id)a3 locationsOfInterest:(id)a4 frequentLocations:(id)a5;
+ (short)originatorStateForAsset:(id)a0;
+ (unsigned short)locationTypeForMoment:(id)a0 locationsOfInterest:(id)a1 frequentLocations:(id)a2;
+ (id)today;
+ (id)frequentLocationNearMoment:(id)a0 withFrequentLocations:(id)a1;
+ (id)importedByBundleIdentifiersToIncludeIfNotProcessed;
+ (id)_sortedOverlappingFrequentLocations:(id)a0;
+ (id)internalPredicateToIncludeExternalAssetsEligibleForProcessing;
+ (BOOL)isTopFrequentLocationForMoment:(id)a0 frequentLocations:(id)a1;
+ (BOOL)isTopFrequentLocationForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 startDate:(id)a1 endDate:(id)a2 frequentLocations:(id)a3;
+ (void)overrideTodayWithDate:(id)a0;
+ (id)frequentLocationsOverlappingStartDate:(id)a0 endDate:(id)a1 frequentLocations:(id)a2;
+ (BOOL)shouldConsiderAssetAsOutlierForMomentClustering:(id)a0;
+ (unsigned short)locationTypeForAsset:(id)a0 locationsOfInterest:(id)a1 frequentLocations:(id)a2;
+ (id)importedByBundleIdentifiersAllowListForMomentGeneration;

@end
