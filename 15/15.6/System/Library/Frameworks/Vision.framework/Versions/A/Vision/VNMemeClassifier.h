@interface VNMemeClassifier : VNImageAnalyzerBasedDetector {
    int _modelDrop;
}

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)inputImageBlobNameForConfiguration:(id)a0;
+ (id)modelPathForConfiguration:(id)a0 error:(id *)a1;
+ (char)providesSceneLabelsForConfiguration:(id)a0;
+ (id)sceneLabelsFilePathForConfiguration:(id)a0 error:(id *)a1;

- (unsigned int)analysisTypesForProcessOptions:(id)a0;
- (char)completeInitializationForSession:(id)a0 error:(id *)a1;
- (char)configureImageAnalyzerOptions:(void *)a0 error:(id *)a1;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)a0 processOptions:(id)a1 originatingRequestSpecifier:(id)a2 qosClass:(unsigned int)a3 error:(id *)a4;
- (id)supportedIdentifiersWithOptions:(id)a0 error:(id *)a1;

@end
