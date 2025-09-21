@interface PISegmentationInwardFillProcessor : CIImageProcessorKernel

+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)synchronizeInputs;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)allowPartialOutputRegion;
+ (BOOL)outputIsOpaque;

@end
