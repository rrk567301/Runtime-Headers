@interface VN4nFZhnOcBOiJmeVWzBWsv : VNImageAnalyzerBasedDetector

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)a0;
+ (id)inputImageBlobNameForConfiguration:(id)a0;
+ (id)modelPathForConfiguration:(id)a0 error:(id *)a1;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;

- (unsigned int)analysisTypesForProcessOptions:(id)a0;
- (char)configureImageAnalyzerOptions:(void *)a0 error:(id *)a1;
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)a0 processOptions:(id)a1 originatingRequestSpecifier:(id)a2 qosClass:(unsigned int)a3 error:(id *)a4;

@end
