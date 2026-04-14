@interface PCHomeKitPredictor : NSObject

+ (double)calculateMinDistanceFrom:(id)a0 to:(id)a1;
+ (double)calculateProbabilityFromDistance:(double)a0;
+ (id)createHomeKitLocationPredictionWithHome:(id)a0 probability:(double)a1 distanceFromUser:(double)a2 candidateVisits:(id)a3 currentTime:(double)a4;
+ (id)createPredictedContextDateIntervalAtTime:(double)a0 fromCandidateVisits:(id)a1 distanceFromUser:(double)a2;
+ (void)predictHomeKitLocation:(id)a0 locationHistory:(id)a1 locationsOfInterest:(id)a2 candidateVisits:(id)a3 atTime:(double)a4 locations:(id *)a5;
+ (void)predictHomeLocation:(id)a0 locationHistory:(id)a1 locationsOfInterest:(id)a2 candidateVisits:(id)a3 atTime:(double)a4 locations:(id *)a5;

@end
