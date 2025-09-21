@interface RTPOIHarvestUtilities : NSObject

+ (id)accessPointsForFingerprint:(id)a0 endDate:(id)a1 fingerprintManager:(id)a2 error:(id *)a3;
+ (id)determineFingerprintFallbackDateIntervalFromStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
+ (id)fingerprintsBetweenStartDate:(id)a0 endDate:(id)a1 isTimeWindowFallback:(BOOL *)a2 settledState:(unsigned long long)a3 fingerprintManager:(id)a4 error:(id *)a5;
+ (BOOL)harvestCuration:(id)a0 mapItem:(id)a1 referenceLocations:(id)a2 poiHarvester:(id)a3 error:(id *)a4;
+ (BOOL)harvestVisits:(id)a0 mapItem:(id)a1 harvestType:(unsigned long long)a2 poiHarvester:(id)a3 error:(id *)a4;
+ (id)locationsForAccessPoints:(id)a0 harvestParameters:(id)a1 locationManager:(id)a2 error:(id *)a3;
+ (id)locationsInDateInterval:(id)a0 harvestParameters:(id)a1 locationManager:(id)a2 error:(id *)a3;

@end
