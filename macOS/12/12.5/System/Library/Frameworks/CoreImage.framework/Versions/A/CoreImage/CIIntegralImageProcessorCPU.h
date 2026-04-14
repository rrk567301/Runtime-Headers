@interface CIIntegralImageProcessorCPU : CIImageProcessorKernel

+ (int)outputFormat;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)canReduceOutputChannels;

@end
