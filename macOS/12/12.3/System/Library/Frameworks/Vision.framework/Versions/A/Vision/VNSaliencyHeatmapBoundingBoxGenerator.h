@interface VNSaliencyHeatmapBoundingBoxGenerator : VNEspressoModelFileBasedDetector

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)a0;
+ (id)calculateSaliencyBoundingBoxesForDetectorType:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 configurationOptions:(id)a2 originatingRequestSpecifier:(id)a3 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 warningRecorder:(id)a5 error:(id *)a6;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (struct __CVBuffer { } *)_createScaledOneComponent32FloatPixelBufferFromImageBuffer:(id)a0 options:(id)a1 error:(id *)a2;
- (id)_observationsForOneComponent32FloatPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 error:(id *)a3;

@end
