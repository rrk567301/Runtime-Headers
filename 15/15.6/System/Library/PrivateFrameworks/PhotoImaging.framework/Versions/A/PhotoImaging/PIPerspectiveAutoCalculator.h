@class PIFaceObservationCache, NSString, NSMutableDictionary, CIImage, NSNumber;

@interface PIPerspectiveAutoCalculator : NUAutoCalculator <NUTimeBased, PIFaceObservingAutoCalculator>

@property (retain, nonatomic) CIImage *debugLineDetectionImage;
@property (copy) NSNumber *maxAutoYaw;
@property (copy) NSNumber *maxAutoPitch;
@property (copy) NSNumber *maxAutoAngle;
@property double minimumPitchCorrection;
@property double minimumYawCorrection;
@property double minimumAngleCorrection;
@property double minimumConfidence;
@property double maxFaceSize;
@property double minimumPitchCorrectionArea;
@property double minimumYawCorrectionArea;
@property char disableOnPanos;
@property char disableOnFrontFacingCameraImages;
@property char shouldRunBuildingCheck;
@property double angleSeedDegreesCCW;
@property char debugFilesEnabled;
@property (copy) NSString *debugFilesPrefix;
@property (readonly) NSMutableDictionary *debugDiagnostics;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PIFaceObservationCache *faceObservationCache;

+ (void)undoOrientation:(long long)a0 forPitch:(double *)a1 yaw:(double *)a2 angle:(double *)a3;

- (void).cxx_destruct;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (char)hasFrontFacingCameraDimentions:(struct { long long x0; long long x1; })a0;
- (void)submitVerified:(id /* block */)a0;
- (void)addMethodDiagnostics:(id)a0 details:(id)a1;
- (void)addMethodResultToDiagnostics:(id)a0 error:(id)a1 setYawPitchError:(char)a2;
- (char)canGenerateNewCropRect:(out id *)a0;
- (float)getSizeOfAllFaces:(id)a0;
- (char)isFrontFacingCameraImage:(id)a0 pixelSize:(struct { long long x0; long long x1; })a1;
- (char)passesBuildingCheck:(out id *)a0;
- (char)passesConfidenceCheck:(id)a0 error:(out id *)a1;
- (char)passesFaceCheck:(out id *)a0;
- (char)passesImagePropertiesCheck:(out id *)a0;
- (char)passesMinimumCorrectionCheck:(id)a0 error:(out id *)a1;
- (id)perspectiveErrorFromCoreImage:(id)a0;
- (id)primaryImageProperties:(out id *)a0;
- (id)wrapAsUnexpectedError:(id)a0;
- (void)writeDebugDiagnosticsToDisk;

@end
