@interface PISegmentationInwardFillProcessor : CIImageProcessorKernel

+ (BOOL)synchronizeInputs;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)allowPartialOutputRegion;
+ (BOOL)outputIsOpaque;

@end
