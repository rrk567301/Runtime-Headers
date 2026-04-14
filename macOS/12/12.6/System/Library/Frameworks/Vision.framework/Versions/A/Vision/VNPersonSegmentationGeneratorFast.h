@interface VNPersonSegmentationGeneratorFast : VNPersonSegmentationGenerator

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)inputMaskBlobName;
+ (id)outputMaskBlobName;
+ (id)inputImageBlobName;
+ (BOOL)inputMaskRequired;
+ (BOOL)rotateImageToMatchNetworkOrientation;

@end
