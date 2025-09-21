@class VCPFaceClusterer, NSMutableDictionary, PHPhotoLibrary, VCPPhotosFaceProcessingContext, VCPPhotosPersistenceDelegate;

@interface VCPPersonBuilder : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPFaceClusterer *_faceClusterer;
    VCPPhotosFaceProcessingContext *_context;
    VCPPhotosPersistenceDelegate *_persistenceDelegate;
    NSMutableDictionary *_state;
    unsigned long long _lastMinimumFaceGroupSizeForCreatingMergeCandidates;
    char _personBuilderMergeCandidatesEnabled;
}

- (void).cxx_destruct;
- (void)_readFaceAnalysisState;
- (char)_setAllFaceGroupsNeedPersonBuilding;
- (void)_setFaceAnalysisStateValue:(id)a0 forKey:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 andFaceClusterer:(id)a1 andContext:(id)a2;
- (char)performPersonBuildingWithCancelOrExtendTimeoutBlock:(id /* block */)a0 error:(id *)a1;
- (void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)a0;
- (void)setPersonBuilderMergeCandidatesEnabled:(char)a0;

@end
