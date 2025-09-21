@class PCDistanceWeightingConfig, NSArray;

@interface PCHDBSCANClustering : NSObject {
    struct unique_ptr<Hdbscan, std::default_delete<Hdbscan>> { struct Hdbscan *__ptr_; } _HDBSCAN;
    PCDistanceWeightingConfig *_config;
    NSArray *_bundleIDs;
}

- (id)initWithConfig:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vector<std::vector<double>, std::allocator<std::vector<double>>> { void *x0; void *x1; void *x2; })_getDistanceMatrixFrom:(id)a0;
- (id)getClusterLabels;
- (id)getDistanceArrayFrom:(id)a0 toEmbeddings:(id)a1;
- (double)getEmbeddingDistanceFrom:(id)a0 to:(id)a1 withWeights:(id)a2;
- (id)getMembershipProbability;
- (id)getNormalizedClusterLabels;
- (id)getOutlierScoreDict;
- (void)loadDistanceMatrix:(struct vector<std::vector<double>, std::allocator<std::vector<double>>> { void *x0; void *x1; void *x2; })a0;
- (void)runHDBSCANClusteringOn:(id)a0;

@end
