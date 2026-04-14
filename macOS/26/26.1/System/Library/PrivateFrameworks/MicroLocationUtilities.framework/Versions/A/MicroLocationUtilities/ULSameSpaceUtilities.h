@interface ULSameSpaceUtilities : NSObject

+ (double)absoluteVerticalDistanceBetweenPredictionCoordinates:(id)a0 andLabelCoordinates:(SEL)a1;
+ (double)cosineSimilarityBetweenPredictionProbabilities:(id)a0 withPreCalculatedMagnitude:(double)a1 andLabelProbabilities:(id)a2;
+ (double)horizontalDistanceSquaredBetweenPredictionCoordinates:(id)a0 andLabelCoordinates:(SEL)a1;
+ (double)cosineSimilarityBetweenPredictionProbabilities:(id)a0 andLabelProbabilities:(id)a1;

@end
