@class PCDistanceWeightingConfig, PCHDBSCANClustering, NSArray;

@interface PCClusteringManager : NSObject {
    PCDistanceWeightingConfig *_config;
    PCHDBSCANClustering *_hdbscanClustering;
    NSArray *_cachedClusters;
}

- (id)init;
- (void).cxx_destruct;
- (id)_convertContextvalueToString:(id)a0 forKey:(id)a1;
- (id)_dominantSourceBundleIdentifierFromEvents:(id)a0;
- (id)_getClusterFrom:(id)a0 withEmbeddings:(id)a1 andCreationDate:(id)a2;
- (id)fetchCachedClusters;
- (id)generateClusters:(id)a0 withEmbeddings:(id)a1 error:(id *)a2;
- (id)getDistanceArrayFrom:(id)a0 toEmbeddings:(id)a1;
- (double)getEmbeddingDistanceFrom:(id)a0 to:(id)a1 withWeights:(id)a2;
- (id)getEmbeddingsFromBundles:(id)a0 forEmbeddingType:(unsigned long long)a1;
- (id)phenotypeDescription:(id)a0;
- (void)runHDBSCANClusteringOn:(id)a0;

@end
