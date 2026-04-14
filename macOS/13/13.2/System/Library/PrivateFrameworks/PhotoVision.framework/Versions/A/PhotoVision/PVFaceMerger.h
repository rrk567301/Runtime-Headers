@class PVContext;
@protocol PVVisionIntegrating;

@interface PVFaceMerger : NSObject {
    PVContext *_context;
    id<PVVisionIntegrating> _visionIntegration;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 visionIntegration:(id)a1;
- (id)mergeExistingFaces:(id)a0 withDetectedFaces:(id)a1 forImage:(id)a2;
- (void)_configureRequest:(id)a0;
- (id)_faceObservationsWithBBoxFromPVFaces:(id)a0 mapping:(id)a1;
- (id)_bboxAlignedFaceObservationsFromFaceObservations:(id)a0 inImage:(id)a1 withError:(id *)a2;
- (BOOL)_alignBBoxForPVFaces:(id)a0 forImage:(id)a1;
- (id)_sortedViableFaceMergePairsFromQueryFaces:(id)a0 andCandidateFaces:(id)a1;

@end
