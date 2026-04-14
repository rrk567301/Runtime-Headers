@interface MUImageDownsamplingUtilities : NSObject

+ (id)_sourceContentType:(id)a0;
+ (struct CGImageSource { } *)_newImageSourceWithSourceContent:(id)a0;
+ (void)_shouldFlattenEXIFOrientation:(BOOL *)a0 andDownsample:(BOOL *)a1 sourceContent:(id)a2;
+ (id)_flattenEXIFOrientation:(BOOL)a0 withDownsampling:(BOOL)a1 sourceContent:(id)a2 withContentType:(id)a3;
+ (BOOL)_flattenEXIFOrientationOfImage:(id)a0 toDestination:(id)a1;
+ (id)_uniqueTemporaryDirectory;
+ (id)_preferredFileDisplayNameForSourceContent:(id)a0;
+ (struct CGSize { double x0; double x1; })_sizeFittingArea:(double)a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (double)_maxDimensionOfSize:(struct CGSize { double x0; double x1; })a0 fittingToArea:(double)a1;

@end
