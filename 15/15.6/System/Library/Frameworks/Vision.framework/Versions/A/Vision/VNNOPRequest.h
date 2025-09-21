@class VNSupportedImageSize;

@interface VNNOPRequest : VNImageBasedRequest

@property (copy, nonatomic) VNSupportedImageSize *detectorPreferredImageSize;
@property (nonatomic) char detectorWantsAnisotropicScaling;
@property (nonatomic) double detectorExecutionTimeInterval;

+ (Class)configurationClass;

- (struct CGSize { double x0; double x1; })_actualSizeForDesiredSize:(id)a0 ofSourceImageWidth:(unsigned long long)a1 height:(unsigned long long)a2;
- (struct __CVBuffer { } *)_createScaledImagePixelBufferFromCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofImageBuffer:(id)a1 inPixelFormat:(unsigned int)a2 forDetectorInputImageSize:(struct CGSize { double x0; double x1; })a3 usingAnisotropicScaling:(char)a4 error:(id *)a5;
- (struct __CVBuffer { } *)_createScaledImagePixelBufferFromImageBuffer:(id)a0 inPixelFormat:(unsigned int)a1 forDetectorInputImageSize:(struct CGSize { double x0; double x1; })a2 usingAnisotropicScaling:(char)a3 error:(id *)a4;
- (char)_performNOPForRevision:(unsigned long long)a0 inContext:(id)a1 detectorCompletionSemaphore:(id)a2 error:(id *)a3;
- (char)hasCancellationHook;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)supportedComputeStageDevicesAndReturnError:(id *)a0;
- (id)supportedImageSizeSet;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
