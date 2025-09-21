@interface PCNeuralNetworkUtilities : NSObject

+ (void)applySinCosTransform:(id)a0 timeZone:(id)a1;
+ (id)buildMutableArrayCopyOfSwiftBridgedArray:(id)a0;
+ (id)calculateVisitValues:(double)a0 endTime:(float)a1 probs:(id)a2 thresholdStartTime:(float)a3 loi:(int)a4 probabilityCalculationMode:(long long)a5 probabilityPercentile:(float)a6 startIdx:(int)a7;
+ (id)convertToTimestepDataset:(double)a0 currentTime:(double)a1 visitHistory:(id)a2 transitionHistory:(id)a3 startTime:(double)a4 visitIndicies:(id)a5;
+ (id)createPredictedContextFromPredSequence:(float)a0 timestepSize:(double)a1 currentTime:(double)a2 preds:(id)a3 probabilityCalculationMode:(long long)a4 probabilityPercentile:(float)a5;
+ (id)generateClustersAndRemoveBias:(float)a0 calcMode:(long long)a1 currentTime:(double)a2 loiIdx:(int)a3 percentile:(float)a4 predSample:(id)a5 predictionArray:(id)a6 timestepSizeMinutes:(double)a7;
+ (id)kInfrequentString;
+ (id)kNilString;
+ (id)kTravelingString;
+ (id)kUnknownString;
+ (id)removeBiasFromCluster:(id)a0 percentile:(float)a1 prediction:(id)a2 startIdx:(int)a3;
+ (void)removeBiasesWith:(id)a0 loiIdx:(int)a1 mutablePreds:(id)a2;
+ (id)sequenceDataMatrix:(id)a0 seqLength:(int)a1;
+ (int)sequenceYlabels:(int)a0 xTrain:(id *)a1 outData:(id)a2 seqDataMat:(id)a3 yRows:(id *)a4;
+ (id)sortDictionaryByValues:(id)a0;
+ (id)sortLocationHistory:(id)a0;
+ (id)sortTransitionHistory:(id)a0;
+ (id)sortVisitHistory:(id)a0;

@end
