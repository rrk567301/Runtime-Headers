@interface EKStructuredLocationPrediction : NSObject

+ (id)_mockLocationForEventTitle:(id)a0;
+ (BOOL)shouldDoLocationPredictionForEvent:(id)a0;
+ (id)locationPredictionForTitle:(id)a0 location:(id)a1 calendar:(id)a2 error:(id *)a3 timeout:(double)a4;
+ (void)userInteractionWithPredictedLocationOfInterest:(id)a0 interaction:(unsigned long long)a1;

@end
