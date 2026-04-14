@interface HMIFloodFillProcessorKernel : CIImageProcessorKernel

+ (int)outputFormat;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (int)formatForInputAtIndex:(int)a0;

@end
