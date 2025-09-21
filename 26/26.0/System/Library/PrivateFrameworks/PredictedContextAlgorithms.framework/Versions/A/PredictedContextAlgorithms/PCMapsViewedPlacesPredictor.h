@interface PCMapsViewedPlacesPredictor : NSObject

+ (void)collectStatistics:(id)a0 history:(id)a1 searchesWithVisits:(long long *)a2 totalGap:(double *)a3 totalDuration:(double *)a4 timeBlockVisits:(id *)a5 timeBlockDurations:(id *)a6 timeBlockGaps:(id *)a7 timeBlockGapVariances:(id *)a8 timeBlockDurationVariances:(id *)a9;
+ (void)computeWithViewedPlaces:(id)a0 history:(id)a1;
+ (id)findFirstVisitWithin24HoursAfterPlaceViewed:(id)a0 fromHistory:(id)a1;
+ (long long)getTimeBlock:(double)a0;
+ (void)predictWithViewedPlaces:(id)a0 history:(id)a1 atTime:(double)a2 results:(id *)a3;

@end
