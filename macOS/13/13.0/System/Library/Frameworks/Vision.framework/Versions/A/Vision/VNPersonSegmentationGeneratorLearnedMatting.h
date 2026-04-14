@interface VNPersonSegmentationGeneratorLearnedMatting : VNSegmentationGenerator

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)inputImageBlobName;
+ (id)inputMaskBlobName;
+ (id)outputMaskBlobNames;
+ (BOOL)rotateImageToMatchNetworkOrientation;
+ (BOOL)inputMaskRequired;

@end
