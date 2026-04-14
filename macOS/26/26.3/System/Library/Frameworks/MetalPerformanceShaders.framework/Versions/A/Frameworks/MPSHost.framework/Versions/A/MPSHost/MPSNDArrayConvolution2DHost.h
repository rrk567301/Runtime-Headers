@interface MPSNDArrayConvolution2DHost : MPSNDArrayMultiaryKernelHost

+ (BOOL)supportsPostfixForDevice:(unsigned long long)a0 environment:(unsigned long long)a1;
+ (BOOL)supportsPrefixForDevice:(unsigned long long)a0 environment:(unsigned long long)a1;
+ (unsigned int)getConvolutionAlgorithmForDevice:(unsigned long long)a0 environment:(unsigned long long)a1 ndArrayConvolution2DDescriptor:(id)a2 srcNDArrayDescriptors:(id)a3;

@end
