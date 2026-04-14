@class NSArray, NSDictionary, VNSaliencyOHeatmapBoundingBoxGenerator;

@interface VNSmartCam5GatingDetector : VNImageAnalyzerBasedDetector {
    NSDictionary *_documentIdentifierToSceneLabels;
    VNSaliencyOHeatmapBoundingBoxGenerator *_boundingBoxGenerator;
}

@property (readonly, copy) NSArray *supportedDocumentElementIdentifiers;

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)a0;
+ (id)availableVNInferenceNetworkIdentifierSmartCamVersions;
+ (id)inferenceNetworkIdentifiers;
+ (id)inputImageBlobNameForConfiguration:(id)a0;
+ (id)modelNameForConfiguration:(id)a0;
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierSmartCam_5_0_0;

- (void).cxx_destruct;
- (unsigned int)analysisTypesForProcessOptions:(id)a0;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)configureImageAnalyzerOptions:(void *)a0 error:(id *)a1;
- (unsigned long long)defaultImageCropAndScaleOption;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)a0 processOptions:(id)a1 originatingRequestSpecifier:(id)a2 qosClass:(unsigned int)a3 error:(id *)a4;
- (id)sceneLabelsFileName;
- (id)segmentationLabelsFileName;
- (id)supportedClassificationIdentifiersWithOptions:(id)a0 error:(id *)a1;

@end
