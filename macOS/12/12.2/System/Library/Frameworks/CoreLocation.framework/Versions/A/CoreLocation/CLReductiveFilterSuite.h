@interface CLReductiveFilterSuite : NSObject

+ (double)rangeForTransmitPower:(double)a0;
+ (id)filterOutliers:(id)a0 options:(id)a1;
+ (double)rangeForReductiveFilterOptions:(id)a0;
+ (id)deriveLocationFromLocations:(id)a0 options:(id)a1;
+ (id)filterOutliers:(id)a0;
+ (id)deriveLocationFromLocations:(id)a0;
+ (id)applyFilterToLocationObservations:(id)a0 options:(id)a1;
+ (id)applyFilterToLocationTrace:(id)a0 options:(id)a1;

@end
