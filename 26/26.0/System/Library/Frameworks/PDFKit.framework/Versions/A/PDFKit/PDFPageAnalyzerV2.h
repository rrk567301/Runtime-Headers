@interface PDFPageAnalyzerV2 : NSObject

+ (void)addDisplayList:(struct CGDisplayList { } *)a0 toPage:(id)a1;
+ (BOOL)addFormFieldsFromVisionDocument:(id)a0 documentImage:(struct __CVBuffer { } *)a1 toPage:(id)a2 withBox:(long long)a3;
+ (BOOL)addTablesFromVisionDocument:(id)a0 documentImage:(struct __CVBuffer { } *)a1 toPage:(id)a2 withBox:(long long)a3;
+ (BOOL)addTextFromVisionDocument:(id)a0 documentImage:(struct __CVBuffer { } *)a1 toPage:(id)a2 withBox:(long long)a3;
+ (unsigned long long)analyzePage:(id)a0 withBox:(long long)a1 requestTypes:(unsigned long long)a2;
+ (id)createImageFromImage:(id)a0 withBoundingQuad:(const struct PDFQuadPoints { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; } *)a1;
+ (id)createImageFromImage:(id)a0 withBounds:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
+ (struct __CVBuffer { } *)createPixelBufferForPage:(id)a0 withBox:(long long)a1;
+ (void)drawQuad:(const struct PDFQuadPoints { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; } *)a0 lineAngle:(double)a1 baselineOffset:(double)a2 inContext:(struct CGContext { } *)a3;
+ (struct tuple<unsigned long, unsigned long> { struct __tuple_impl<std::__tuple_indices<0, 1>, unsigned long, unsigned long> { unsigned long long x0; unsigned long long x1; } x0; })getBaselineAndHeightFromRowAverages:(struct CGImage { } *)a0;
+ (struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; char *x2; })getVectorFromAveragesImage:(struct CGImage { } *)a0;
+ (struct tuple<unsigned long, unsigned long> { struct __tuple_impl<std::__tuple_indices<0, 1>, unsigned long, unsigned long> { unsigned long long x0; unsigned long long x1; } x0; })getXInsetsFromColAverages:(struct CGImage { } *)a0;
+ (BOOL)isCreatedByCalendar:(id)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })normalizedToCIImageTransformForImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })normalizedToPageTransformForPageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (double)sizeOfFont:(struct __CTFont { } *)a0 withHeight:(double)a1 string:(id)a2;

@end
