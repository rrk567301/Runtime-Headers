@interface CIIntegralImageProcessorGPU : CIImageProcessorKernel

+ (int)outputFormat;
+ (BOOL)onlyUsesMetal;
+ (BOOL)canReduceOutputChannels;
+ (BOOL)synchronizeInputs;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;

@end
