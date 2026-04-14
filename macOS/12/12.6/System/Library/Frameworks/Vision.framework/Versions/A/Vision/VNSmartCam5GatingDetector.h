@class NSArray, NSDictionary, VNSaliencyOHeatmapBoundingBoxGenerator;

@interface VNSmartCam5GatingDetector : VNImageAnalyzerBasedDetector {
    NSDictionary *_documentIdentifierToSceneLabels;
    VNSaliencyOHeatmapBoundingBoxGenerator *_boundingBoxGenerator;
}

@property (readonly, copy) NSArray *supportedDocumentElementIdentifiers;

+ (id)modelNameForConfiguration:(id)a0;
+ (id)inputImageBlobNameForConfiguration:(id)a0;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)a0;

- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (id)supportedClassificationIdentifiersWithOptions:(id)a0 error:(id *)a1;
- (BOOL)configureImageAnalyzerOptions:(void *)a0 error:(id *)a1;
- (id)segmentationLabelsFileName;
- (unsigned int)analysisTypesForProcessOptions:(id)a0;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)a0 processOptions:(id)a1 originatingRequestSpecifier:(id)a2 error:(id *)a3;
- (unsigned long long)defaultImageCropAndScaleOption;
- (id)sceneLabelsFileName;

@end
