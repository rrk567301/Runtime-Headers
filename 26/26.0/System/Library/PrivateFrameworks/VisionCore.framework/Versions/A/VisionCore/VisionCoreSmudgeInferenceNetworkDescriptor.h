@interface VisionCoreSmudgeInferenceNetworkDescriptor : VisionCoreE5RTInferenceFunctionDescriptor

+ (id)modelFileURLForModelVersion:(unsigned long long)a0 error:(id *)a1;
+ (id)smudgeDetectionNetworkForModelVersion:(unsigned long long)a0 error:(id *)a1;
+ (id)_createDescriptorWithError:(id *)a0;
+ (long long)supportedANEGenerationLowerBoundForModelFileName:(id)a0;
+ (long long)supportedFullANEResidencyGenerationLowerBoundForModelFileName:(id)a0;

- (BOOL)isEqual:(id)a0;

@end
