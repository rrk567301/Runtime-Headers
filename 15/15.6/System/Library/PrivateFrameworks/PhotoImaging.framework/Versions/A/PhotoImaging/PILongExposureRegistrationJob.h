@class CIImage, VNImageHomographicAlignmentObservation;

@interface PILongExposureRegistrationJob : NURenderJob

@property (nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } guideExtent;
@property (retain, nonatomic) CIImage *stillImage;
@property (retain, nonatomic) VNImageHomographicAlignmentObservation *observation;

- (void).cxx_destruct;
- (id)result;
- (char)render:(out id *)a0;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (char)prepare:(out id *)a0;
- (id)scalePolicy;
- (char)wantsCompleteStage;
- (char)wantsOutputGeometry;
- (char)wantsOutputImage;
- (char)wantsRenderScaleClampedToNativeScale;
- (id)registrationRequest;

@end
