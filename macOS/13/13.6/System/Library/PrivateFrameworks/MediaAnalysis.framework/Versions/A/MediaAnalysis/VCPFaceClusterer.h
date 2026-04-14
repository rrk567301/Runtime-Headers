@class PHPhotoLibrary, VCPPhotosFaceProcessingContext, VCPClusterer;

@interface VCPFaceClusterer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPClusterer *_clusterer;
    VCPPhotosFaceProcessingContext *_context;
    id /* block */ _cancelOrExtendTimeoutBlock;
}

- (void).cxx_destruct;
- (BOOL)resetFaceClusteringState:(id *)a0;
- (BOOL)clustererIsReadyToReturnSuggestions;
- (unsigned long long)clustererState;
- (unsigned long long)numberOfFacesPendingClustering;
- (void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)a0;
- (void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)a0;
- (id)clusterer;
- (BOOL)_resetFaceClusteringState:(id *)a0;
- (int)clusterFaces;
- (int)clusterFacesIfNecessary;
- (BOOL)getFaceClusters:(id *)a0 clusteringThreshold:(double *)a1 utilizingGPU:(BOOL *)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3 error:(id *)a4;
- (id)initWithPhotoLibrary:(id)a0 context:(id)a1 cancelOrExtendTimeoutBlock:(id /* block */)a2;
- (BOOL)reclusterFacesWithThreshold:(id)a0 shouldRecluster:(BOOL)a1 error:(id *)a2;

@end
