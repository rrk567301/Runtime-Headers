@interface PCEmbeddingDistanceCalculator : NSObject

+ (double)calculateCircularStandardDeviation:(id)a0 cosValues:(id)a1;
+ (void)calculateCircularStandardDeviationsForCluster:(id)a0 fromEmbeddings:(id)a1;
+ (void)calculateCircularStandardDeviationsForClusters:(id)a0 fromEmbeddings:(id)a1;
+ (double)calculateDistanceBetweenEmbedding:(id)a0 andEmbedding:(id)a1 withCluster:(id)a2 withWeights:(id)a3;
+ (double)calculateDistanceBetweenEmbedding:(id)a0 andEmbedding:(id)a1 withWeights:(id)a2;
+ (double)calculateDistanceFromFeatures:(id)a0 withWeights:(id)a1 fromEmbedding:(id)a2 toEmbedding:(id)a3;
+ (double)calculateGeographicalStandardDeviation:(id)a0 longValues:(id)a1;
+ (double)calculateValidMean:(id)a0;
+ (double)distanceFromLat1:(double)a0 lon1:(double)a1 toLat2:(double)a2 lon2:(double)a3;
+ (void)extractActivityContextDistances:(id)a0 embedding2:(id)a1 intoFeatureDistances:(id)a2;
+ (id)extractFeatureDistancesBetweenEmbedding:(id)a0 andEmbedding:(id)a1;
+ (id)extractFeatureDistancesBetweenEmbedding:(id)a0 andEmbedding:(id)a1 withCluster:(id)a2;
+ (void)extractLocationContextDistances:(id)a0 embedding2:(id)a1 intoFeatureDistances:(id)a2;
+ (void)extractTimeContextDistances:(id)a0 embedding2:(id)a1 intoFeatureDistances:(id)a2;

@end
