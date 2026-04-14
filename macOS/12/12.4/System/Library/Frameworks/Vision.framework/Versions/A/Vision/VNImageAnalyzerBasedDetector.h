@class NSArray;

@interface VNImageAnalyzerBasedDetector : VNDetector {
    struct unique_ptr<vision::mod::ImageAnalyzer, std::default_delete<vision::mod::ImageAnalyzer>> { struct __compressed_pair<vision::mod::ImageAnalyzer *, std::default_delete<vision::mod::ImageAnalyzer>> { struct ImageAnalyzer *__value_; } __ptr_; } _imageAnalyzer;
    struct _Geometry2D_size2D_ { float height; float width; } _networkRequiredInputImageSize;
    BOOL _networkUsesAnisotropicScaling;
    NSArray *_cachedSupportedClassificationIdentifiers;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (id)modelNameForConfiguration:(id)a0;
+ (id)inputImageBlobNameForConfiguration:(id)a0;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CGSize { double x0; double x1; })inputImageSize;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)supportsProcessingDevice:(id)a0;
- (id)supportedClassificationIdentifiersAcceptedByBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)configureImageAnalyzerOptions:(void *)a0 error:(id *)a1;
- (id)segmentationLabelsFileName;
- (unsigned int)analysisTypesForProcessOptions:(id)a0;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)a0 processOptions:(id)a1 originatingRequestSpecifier:(id)a2 error:(id *)a3;
- (unsigned long long)defaultImageCropAndScaleOption;
- (BOOL)providesSceneLabels;
- (id)sceneLabelsFileName;
- (BOOL)providesSegmentationLabels;
- (id)observationsForSceneLabelsFromLastAnalysisOfImageAnalyzer:(void *)a0 identifierAcceptingBlock:(id /* block */)a1 operationPointsProvider:(id)a2 originatingRequestSpecifier:(id)a3 error:(id *)a4;

@end
