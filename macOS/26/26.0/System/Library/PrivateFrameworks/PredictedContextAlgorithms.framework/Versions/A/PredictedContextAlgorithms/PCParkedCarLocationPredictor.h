@interface PCParkedCarLocationPredictor : NSObject

+ (id)createParkedCarLocationPredictionWithCar:(id)a0 probability:(double)a1 distanceFromUser:(double)a2 candidateVisits:(id)a3 currentTime:(double)a4;
+ (id)createPredictedContextDateIntervalAtTime:(double)a0 fromCandidateVisits:(id)a1 distanceFromUser:(double)a2;
+ (BOOL)isCarLocation:(id)a0 awayFromHomeLocations:(id)a1;
+ (BOOL)isUserCloseToCarWithDistance:(double)a0;
+ (void)predictParkedCarLocation:(id)a0 locationHistory:(id)a1 locationsOfInterest:(id)a2 candidateVisits:(id)a3 atTime:(double)a4 locations:(id *)a5;

@end
