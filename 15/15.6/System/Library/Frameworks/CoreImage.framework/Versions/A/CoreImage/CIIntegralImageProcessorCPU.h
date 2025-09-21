@interface CIIntegralImageProcessorCPU : CIImageProcessorKernel

+ (int)outputFormat;
+ (BOOL)canReduceOutputChannels;
+ (char)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;

@end
