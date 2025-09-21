@interface MUImageDownsamplingUtilities : NSObject

+ (id)_flattenEXIFOrientation:(char)a0 withDownsampling:(char)a1 sourceContent:(id)a2 withContentType:(id)a3;
+ (char)_flattenEXIFOrientationOfImage:(id)a0 toDestination:(id)a1;
+ (double)_maxDimensionOfSize:(struct CGSize { double x0; double x1; })a0 fittingToArea:(double)a1;
+ (struct CGImageSource { } *)_newImageSourceWithSourceContent:(id)a0;
+ (id)_preferredFileDisplayNameForSourceContent:(id)a0;
+ (void)_shouldFlattenEXIFOrientation:(char *)a0 andDownsample:(char *)a1 sourceContent:(id)a2;
+ (struct CGSize { double x0; double x1; })_sizeFittingArea:(double)a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (id)_sourceContentType:(id)a0;
+ (id)_uniqueTemporaryDirectory;

@end
