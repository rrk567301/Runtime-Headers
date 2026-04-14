@class NSArray, NSDictionary, ShotflowDetector, VNFaceBBoxAligner;

@interface VNANFDMultiDetector : VNEspressoModelFileBasedDetector {
    VNFaceBBoxAligner *_faceBBoxAligner;
}

@property (class, readonly) Class detectorClass;
@property (class, readonly) NSArray *knownAnimalIdentifiers;
@property (class, readonly) NSDictionary *detectedObjectClassToRequestKey;
@property (class, readonly) NSDictionary *detectedObjectRequestKeyToRequestInfo;
@property (class, readonly) NSDictionary *recognizedAnimalObjectClassToAnimalName;

@property (readonly, nonatomic) ShotflowDetector *shotflowDetector;

+ (void)_printDebugInfo:(id)a0 detectedObjectsRaw:(id)a1 faceDetectorBGRAImage:(struct __CVBuffer { } *)a2 tempImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a3;
+ (Class)anfdMultiDetectorClassToProcessRequest:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)a0;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)requestInfoForRequest:(id)a0;
+ (BOOL)shouldAlignFacesForRequestWithSpecifier:(id)a0;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)_alignFace:(id)a0 imageBuffer:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 error:(id *)a4;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 warningRecorder:(id)a2 pixelBuffer:(struct __CVBuffer **)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (BOOL)isDetectedObject:(id)a0 ofAGivenObjectSubClass:(id)a1;
- (BOOL)processDetectedObject:(id)a0 originatingRequestSpecifier:(id)a1 objectBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 imageBuffer:(id)a3 qosClass:(unsigned int)a4 warningRecorder:(id)a5 detectedObjectResults:(id)a6 error:(id *)a7;
- (void)processRecognizedObjectWithIdentifier:(id)a0 originatingRequestSpecifier:(id)a1 objectBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 objectConfidence:(float)a3 detectedObjectResults:(id)a4;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)splitDetectedClassResultsIntoSubclasses:(id)a0;
- (BOOL)updateRuntimeParametersFromOptions:(id)a0 error:(id *)a1;

@end
