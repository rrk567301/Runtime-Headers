@interface CIConvolutionProcessor : CIImageProcessorKernel

+ (BOOL)canReduceOutputChannels;
+ (int)outputFormat;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)synchronizeInputs;
+ (id)applyBoxToImage:(id)a0 width:(int)a1 height:(int)a2;
+ (int)formatForInputAtIndex:(int)a0;
+ (id)applyConToImage:(id)a0 width:(int)a1 height:(int)a2 bias:(double)a3 weights:(id)a4;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)allowCompressedInputsAndOutputs;
+ (id)logDescription:(id)a0;
+ (BOOL)onlyUsesMetal;

@end
