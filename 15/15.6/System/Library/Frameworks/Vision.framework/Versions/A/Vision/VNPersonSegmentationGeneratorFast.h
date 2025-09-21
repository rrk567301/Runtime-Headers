@interface VNPersonSegmentationGeneratorFast : VNSegmentationGenerator

+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)inputImageBlobName;
+ (id)inputMaskBlobName;
+ (char)inputMaskRequired;
+ (id)outputMaskBlobNameToRequestKey;
+ (id)outputMaskBlobNames;
+ (char)rotateImageToMatchNetworkOrientation;

@end
