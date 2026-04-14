@class PCDistanceWeightingConfig, NSArray;

@interface PCWorkoutPredictionAlgorithm : NSObject {
    NSArray *_homeWorkScoreAnchorsX;
    NSArray *_otherScoreAnchorsX;
    NSArray *_probabilityAnchorsY;
}

@property (readonly, nonatomic) PCDistanceWeightingConfig *config;

- (id)init;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (double)mapScoreToProbability:(double)a0 forVisit:(id)a1;
- (id)_createDateIntervalStartingAt:(id)a0 probability:(double)a1 embeddings:(id)a2;
- (id)_createPredictionFromCluster:(id)a0 probability:(double)a1 atTime:(id)a2 embeddings:(id)a3;
- (id)_createSourcesFromEmbeddings:(id)a0;
- (BOOL)_isWorkoutTypeAlreadyPredicted:(id)a0 inPredictions:(id)a1;
- (double)_piecewiseLinearMap:(double)a0 anchorsX:(id)a1 anchorsY:(id)a2 minValue:(double)a3 maxValue:(double)a4;
- (id)_sortClustersByProbability:(id)a0;
- (id)_subselectEmbeddings:(id)a0 fromCluster:(id)a1;
- (void)_updateActivityInfoForPrediction:(id)a0 fromActivityType:(id)a1;
- (id)calculateClusterProbabilities:(id)a0 embeddings:(id)a1 clusters:(id)a2;
- (double)calculateScoreFromFeatures:(id)a0 identifier:(id)a1;
- (id)generateWorkoutPredictionsFromProbabilities:(id)a0 atTime:(double)a1 embeddings:(id)a2 clusters:(id)a3;
- (BOOL)isHomeOrWorkLocation:(id)a0;

@end
