@interface PISegmentationInwardFillProcessor : CIImageProcessorKernel

+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)synchronizeInputs;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)allowPartialOutputRegion;
+ (BOOL)outputIsOpaque;

@end
