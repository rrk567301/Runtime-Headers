@class NSArray, NSDictionary, VNSaliencyOHeatmapBoundingBoxGenerator;

@interface VNSmartCam5GatingDetector : VNImageAnalyzerBasedDetector {
    NSDictionary *_documentIdentifierToSceneLabels;
    VNSaliencyOHeatmapBoundingBoxGenerator *_boundingBoxGenerator;
}

@property (readonly, copy) NSArray *supportedDocumentElementIdentifiers;

+ (id)inferenceNetworkIdentifiers;
+ (id)modelNameForConfiguration:(id)a0;
+ (id)inputImageBlobNameForConfiguration:(id)a0;
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)a0;
+ (id)availableVNInferenceNetworkIdentifierSmartCamVersions;
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSmartCam_5_0_0;

- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)configureImageAnalyzerOptions:(void *)a0 error:(id *)a1;
- (unsigned int)analysisTypesForProcessOptions:(id)a0;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)a0 processOptions:(id)a1 originatingRequestSpecifier:(id)a2 qosClass:(unsigned int)a3 error:(id *)a4;
- (id)segmentationLabelsFileName;
- (unsigned long long)defaultImageCropAndScaleOption;
- (id)sceneLabelsFileName;
- (id)supportedClassificationIdentifiersWithOptions:(id)a0 error:(id *)a1;

@end
