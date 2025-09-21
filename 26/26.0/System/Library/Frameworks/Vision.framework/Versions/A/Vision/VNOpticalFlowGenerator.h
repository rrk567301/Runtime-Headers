@interface VNOpticalFlowGenerator : VNDetector

+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedOutputPixelFormatsForOptions:(id)a0 error:(id *)a1;

- (id)validatedImageBuffersFromOptions:(id)a0 error:(id *)a1;

@end
