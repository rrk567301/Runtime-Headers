@class VCPFaceClusterer, NSMutableDictionary, PHPhotoLibrary, VCPPhotosFaceProcessingContext, VCPPhotosPersistenceDelegate;

@interface VCPPersonBuilder : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPFaceClusterer *_faceClusterer;
    VCPPhotosFaceProcessingContext *_context;
    VCPPhotosPersistenceDelegate *_persistenceDelegate;
    NSMutableDictionary *_state;
    unsigned long long _lastMinimumFaceGroupSizeForCreatingMergeCandidates;
    BOOL _personBuilderMergeCandidatesEnabled;
}

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 andFaceClusterer:(id)a1 andContext:(id)a2;
- (void)_readFaceAnalysisState;
- (void)_setFaceAnalysisStateValue:(id)a0 forKey:(id)a1;
- (void)setPersonBuilderMergeCandidatesEnabled:(BOOL)a0;
- (void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)a0;
- (BOOL)_setAllFaceGroupsNeedPersonBuilding;
- (BOOL)performPersonBuildingWithCancelOrExtendTimeoutBlock:(id /* block */)a0 error:(id *)a1;

@end
