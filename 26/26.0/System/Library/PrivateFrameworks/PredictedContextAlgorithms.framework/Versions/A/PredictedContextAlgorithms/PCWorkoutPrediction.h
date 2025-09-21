@class PCWorkoutPredictionAlgorithm, NSMutableArray, PCClusteringManager;

@interface PCWorkoutPrediction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PCClusteringManager *clusteringManager;
@property (retain, nonatomic) NSMutableArray *embeddings;
@property (retain, nonatomic) NSMutableArray *clusters;
@property (retain, nonatomic) PCWorkoutPredictionAlgorithm *predictionAlgorithm;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addEmbedding:(id)a0;
- (id)fetchEmbeddings;
- (id)_annotateEventBundlesWithStartDate:(id)a0 endDate:(id)a1 allEvents:(id)a2;
- (id)_bundleEvents:(id)a0;
- (id)_bundleEvents:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)_createEmbeddingFromVisitEvent:(id)a0 atTime:(double)a1;
- (id)_createEventFromVisit:(id)a0 loiMap:(id)a1;
- (id)_createEventFromWorkout:(id)a0;
- (id)_decodeClustersFromProtobuf;
- (id)_decodeEmbeddingsFromProtobuf;
- (void)_generateClustersFromBundles:(id)a0;
- (id)_predictWorkoutsForVisit:(id)a0 atTime:(double)a1;
- (void)_updateProtobufCluster:(id)a0 withNewFeatures:(id)a1;
- (BOOL)computeWithLocationHistory:(id)a0 workoutHistory:(id)a1 LOIs:(id)a2 atTime:(double)a3 error:(id *)a4;
- (id)fetchClusters;
- (id)fetchPCPEmbeddings;
- (void)predictWithLocationHistory:(id)a0 workoutHistory:(id)a1 LOIs:(id)a2 atTime:(double)a3 workoutPredictions:(id *)a4;

@end
