@class PHPhotoLibrary, VCPPhotosFaceProcessingContext, VCPClusterer;

@interface VCPFaceClusterer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPClusterer *_clusterer;
    VCPPhotosFaceProcessingContext *_context;
    id /* block */ _cancelOrExtendTimeoutBlock;
}

- (void).cxx_destruct;
- (BOOL)resetFaceClusteringState:(id *)a0;
- (void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)a0;
- (void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)a0;
- (unsigned long long)numberOfFacesPendingClustering;
- (unsigned long long)clustererState;
- (BOOL)clustererIsReadyToReturnSuggestions;
- (id)clusterer;
- (int)clusterFaces;
- (id)initWithPhotoLibrary:(id)a0 context:(id)a1 cancelOrExtendTimeoutBlock:(id /* block */)a2;
- (BOOL)getFaceClusters:(id *)a0 clusteringThreshold:(double *)a1 utilizingGPU:(BOOL *)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3 error:(id *)a4;
- (BOOL)_resetFaceClusteringState:(id *)a0;
- (BOOL)reclusterFacesWithThreshold:(id)a0 shouldRecluster:(BOOL)a1 error:(id *)a2;
- (int)clusterFacesIfNecessary;

@end
