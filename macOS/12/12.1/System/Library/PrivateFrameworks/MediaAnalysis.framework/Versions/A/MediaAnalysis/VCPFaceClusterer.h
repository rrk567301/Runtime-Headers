@class PHPhotoLibrary, VCPPhotosFaceProcessingContext, VCPClusterer;

@interface VCPFaceClusterer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPClusterer *_clusterer;
    VCPPhotosFaceProcessingContext *_context;
    id /* block */ _cancelBlock;
    id /* block */ _extendTimeoutBlock;
}

- (void).cxx_destruct;
- (void)stop;
- (BOOL)resetFaceClusteringState:(id *)a0;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id *)a0;
- (void)startAndSyncClusterCacheWithLibrary:(BOOL)a0 reply:(id /* block */)a1;
- (void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)a0;
- (void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)a0;
- (unsigned long long)numberOfFacesPendingClustering;
- (void)performFaceClusteringIfNecessaryAndWait;
- (void)performFaceClusteringAndWait;
- (void)performFaceClusteringWithCompletion:(id /* block */)a0;
- (void)cancelFaceClustering;
- (id)clusteringStatus;
- (unsigned long long)clustererState;
- (BOOL)getFaceClusters:(id *)a0 clusteringThreshold:(double *)a1 utilizingGPU:(BOOL *)a2 error:(id *)a3;
- (BOOL)clustererIsReadyToReturnSuggestions;
- (void)resetClusterer;
- (BOOL)_resetFaceClusteringStateWithContext:(id)a0 error:(id *)a1;
- (id)clusterer;
- (id)initWithPhotoLibrary:(id)a0 context:(id)a1 extendTimeoutBlock:(id /* block */)a2 andCancelBlock:(id /* block */)a3;
- (BOOL)reclusterFacesWithThreshold:(id)a0 shouldRecluster:(BOOL)a1 withContext:(id)a2 extendTimeout:(id /* block */)a3 cancel:(id /* block */)a4 error:(id *)a5;
- (int)clusterFacesWithExtendTimeoutBlock:(id /* block */)a0 andCancelBlock:(id /* block */)a1;
- (BOOL)reclusterFacesWithThreshold:(id)a0 shouldRecluster:(BOOL)a1 error:(id *)a2;
- (int)clusterFacesIfNecessaryWithExtendTimeoutBlock:(id /* block */)a0 andCancelBlock:(id /* block */)a1;

@end
