@interface MPSNDArrayQuantizedConvolutionHost : MPSNDArrayConvolution2DHost

+ (BOOL)hasFusedKernelSupportForDevice:(unsigned long long)a0 environment:(unsigned long long)a1 ndArrayConvolution2DDescriptor:(id)a2 dataQuantizationDescriptor:(id)a3 weightsQuantizationDescriptor:(id)a4 srcNDArrayDescriptors:(id)a5;

@end
