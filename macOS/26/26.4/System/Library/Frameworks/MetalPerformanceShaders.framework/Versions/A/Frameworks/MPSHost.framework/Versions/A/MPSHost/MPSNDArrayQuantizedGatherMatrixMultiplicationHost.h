@interface MPSNDArrayQuantizedGatherMatrixMultiplicationHost : MPSNDArrayQuantizedMatrixMultiplicationHost

+ (BOOL)hasFusedKernelSupportForDevice:(unsigned long long)a0 environment:(unsigned long long)a1 dataQuantizationDescriptor:(id)a2 weightsQuantizationDescriptor:(id)a3 srcNDArrayDescriptors:(id)a4;

@end
