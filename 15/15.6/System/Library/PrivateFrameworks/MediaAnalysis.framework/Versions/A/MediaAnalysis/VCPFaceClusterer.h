@class PHPhotoLibrary, VCPPhotosFaceProcessingContext, VCPClusterer;

@interface VCPFaceClusterer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPClusterer *_clusterer;
    VCPPhotosFaceProcessingContext *_context;
    id /* block */ _cancelOrExtendTimeoutBlock;
}

- (void).cxx_destruct;
- (id)clusterer;
- (char)resetFaceClusteringState:(id *)a0;
- (char)_resetFaceClusteringState:(id *)a0;
- (int)clusterFaces;
- (int)clusterFacesIfNecessary;
- (char)clustererIsReadyToReturnSuggestions;
- (unsigned long long)clustererState;
- (char)getFaceClusters:(id *)a0 clusteringThreshold:(double *)a1 utilizingGPU:(char *)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3 error:(id *)a4;
- (id)initWithPhotoLibrary:(id)a0 context:(id)a1 cancelOrExtendTimeoutBlock:(id /* block */)a2;
- (unsigned long long)numberOfFacesPendingClustering;
- (char)reclusterFacesWithThreshold:(id)a0 shouldRecluster:(char)a1 error:(id *)a2;
- (void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)a0;
- (void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)a0;

@end
