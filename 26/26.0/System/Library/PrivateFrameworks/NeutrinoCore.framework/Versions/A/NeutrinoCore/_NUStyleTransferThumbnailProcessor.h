@interface _NUStyleTransferThumbnailProcessor : CIImageProcessorKernel

+ (int)outputFormat;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)synchronizeInputs;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (BOOL)allowPartialOutputRegion;
+ (BOOL)outputIsOpaque;
+ (id)roiTileArrayForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)generateThumbnailForImage:(id)a0 targetSize:(struct { long long x0; long long x1; })a1 colorSpace:(id)a2 configuration:(id)a3 tuningParameters:(id)a4 error:(out id *)a5;

@end
