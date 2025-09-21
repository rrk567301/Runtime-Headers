@class PHPhotoLibrary, VCPPhotosFaceProcessingContext;

@interface VCPFaceCropManager : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPPhotosFaceProcessingContext *_context;
}

+ (char)_allowANE;

- (void).cxx_destruct;
- (char)_updateFace:(id)a0 withFaceCrop:(id)a1 error:(id *)a2;
- (char)_updateFaceprint:(id)a0 forFace:(id)a1 error:(id *)a2;
- (id)_associateFace:(id)a0 withFaceCrop:(id)a1 error:(id *)a2;
- (id)_bestFaceForFacePrintRequest:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_bestObservationInAnimalObservations:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (char)_clearDirtyStateOnFaceCrop:(id)a0 error:(id *)a1;
- (id)_faceAssociatedWithFaceCrop:(id)a0;
- (id)_faceFromFaceCrop:(id)a0 error:(id *)a1;
- (char)_generateAndAssociateFaceprintedFaceForFaceCrop:(id)a0 faceCropFaceLocalIdentifier:(id *)a1 error:(id *)a2;
- (char)_persistGeneratedFaceCrops:(id)a0 forAsset:(id)a1 error:(id *)a2;
- (char)_processDirtyFaceCrop:(id)a0 faceCropFaceLocalIdentifier:(id *)a1 error:(id *)a2;
- (char)_recordNeedToPersonBuildOnFaceGroupContainingFace:(id)a0 error:(id *)a1;
- (id)_vcpAnimalFaceWithFaceCrop:(id)a0 animalFaceObservations:(id)a1 animalBodyObservations:(id)a2 animalprintRequest:(id)a3 normalizedFaceCropBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 faceCropImageDimension:(struct CGSize { double x0; double x1; })a5 error:(id *)a6;
- (id)_vcpFaceCropFromPHFaceCrop:(id)a0;
- (id)_vcpHumanFaceWithFaceCrop:(id)a0 imageRequestHandler:(id)a1 faceDetectionRequest:(id)a2 normalizedFaceCropBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 faceCropImageDimension:(struct CGSize { double x0; double x1; })a4 faceprintRequest:(id)a5 error:(id *)a6;
- (char)generateAndPersistFaceCropsForFaces:(id)a0 withAsset:(id)a1 resource:(id)a2 resourceURL:(id)a3 error:(id *)a4;
- (id)initWithPhotoLibrary:(id)a0 andContext:(id)a1;
- (int)processDirtyFaceCrops:(unsigned long long *)a0 withCancelBlock:(id /* block */)a1 andExtendTimeoutBlock:(id /* block */)a2;

@end
