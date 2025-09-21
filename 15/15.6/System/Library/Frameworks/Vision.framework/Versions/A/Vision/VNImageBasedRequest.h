@class NSArray, NSString;

@interface VNImageBasedRequest : VNRequest <VNFaceObservationAcceptingInternal, VNDetectedObjectObservationAcceptingInternal, VNImageIdealImageSizeProviding>

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } regionOfInterest;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *inputDetectedObjectObservations;
@property (readonly) NSArray *supportedImageSizeSet;

+ (Class)configurationClass;

- (id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)a0;
- (id)VNCoreMLTransformerDetectionprintAndReturnError:(id *)a0;
- (id)VNCoreMLTransformerSceneprintsAndReturnError:(id *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })VNImageProcessingSessionRegionOfInterest;
- (id)_detectedObjectObservationsForRegionOfInterestContainingDetectedObjectObservations:(id)a0 relationWithRegionOfInterest:(unsigned long long)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (char)getOptionalValidatedInputDetectedObjectObservations:(id *)a0 forObservationClass:(Class)a1 relationWithRegionOfInterest:(unsigned long long)a2 error:(id *)a3;
- (char)getOptionalValidatedInputFaceObservations:(id *)a0 clippedToRegionOfInterest:(char)a1 error:(id *)a2;
- (char)isFullCoverageRegionOfInterest;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOfInterestNonIntegralPixelRectForWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOfInterestPixelRectForWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (char)validateConfigurationAndReturnError:(id *)a0;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
