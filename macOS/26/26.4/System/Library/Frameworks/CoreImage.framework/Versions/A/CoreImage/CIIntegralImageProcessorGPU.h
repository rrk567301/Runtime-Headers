@interface CIIntegralImageProcessorGPU : CIImageProcessorKernel

+ (int)outputFormat;
+ (BOOL)canReduceOutputChannels;
+ (BOOL)onlyUsesMetal;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)synchronizeInputs;

@end
