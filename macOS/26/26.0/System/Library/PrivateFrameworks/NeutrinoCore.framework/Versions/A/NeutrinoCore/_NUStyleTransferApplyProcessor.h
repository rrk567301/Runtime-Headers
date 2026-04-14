@interface _NUStyleTransferApplyProcessor : CIImageProcessorKernel

+ (int)outputFormat;
+ (BOOL)synchronizeInputs;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)allowPartialOutputRegion;
+ (int)formatForInputAtIndex:(int)a0 arguments:(id)a1;
+ (BOOL)outputIsOpaque;
+ (id)roiTileArrayForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)applyStyle:(id)a0 toImage:(id)a1 thumbnail:(id)a2 target:(id)a3 deltaMap:(id)a4 colorSpace:(id)a5 configuration:(id)a6 tuningParameters:(id)a7 noiseModel:(id)a8 error:(out id *)a9;

@end
