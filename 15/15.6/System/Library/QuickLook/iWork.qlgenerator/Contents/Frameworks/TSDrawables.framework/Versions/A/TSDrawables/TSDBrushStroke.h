@interface TSDBrushStroke : TSDSmartStroke

@property (class, readonly, nonatomic) char brushStrokeUsesOpenGL;
@property (class, readonly, nonatomic) char brushStrokeUsesMetal;

+ (Class)mutableClass;
+ (void)p_drawColor:(id)a0 intoContext:(struct CGContext { } *)a1 usingImageAsMask:(struct CGImage { } *)a2 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (void)backgroundLoadAllBrushStrokes;
+ (void)p_clearFrameBuffers:(id)a0;
+ (void)p_drawFrameBuffers:(id)a0 intoFrameBuffer:(id)a1 withAlpha:(double)a2 usingDataBuffer:(id)a3;
+ (id)p_glContextArray;
+ (unsigned long long)p_glContextCount;
+ (id)p_glContextQueue;
+ (id)p_glContextSemaphore;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (int)cap;
- (void)paintLineEnd:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 atAngle:(double)a2 withScale:(double)a3 inContext:(struct CGContext { } *)a4 useFastDrawing:(char)a5;
- (id)strokeLineEnd:(id)a0;
- (char)supportsPattern;
- (char)canApplyToShapeRenderable;
- (char)drawsInOneStep;
- (double)horizontalMarginForSwatch;
- (void)i_setCap:(int)a0;
- (id)initWithArchive:(const struct StrokeArchive { } *)a0 unarchiver:(id)a1;
- (id)initWithName:(id)a0 color:(id)a1 width:(double)a2 cap:(int)a3 join:(int)a4 pattern:(id)a5 miterLimit:(double)a6;
- (double)lineEndInsetAdjustment;
- (char)needsToExtendJoinsForBoundsCalculation;
- (void)p_brushPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 orDirectly:(id)a2 parameterized:(char)a3 drawRasterized:(char)a4 shouldReverseDrawOrder:(char)a5 withLayoutOptions:(id)a6;
- (void)p_brushPath:(id)a0 withScaling:(struct { double x0; double x1; })a1 inElementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 intoPath:(id)a3 orIntoVector:(void *)a4 sectionIndex:(unsigned long long *)a5 viewScale:(double)a6 withLayoutOptions:(id)a7 currentSubpathIndex:(unsigned long long)a8 cachedCurrentElementPercentage:(struct { id x0; unsigned long long x1; double x2; } *)a9;
- (void)p_brushSection:(id)a0 sectionIndex:(unsigned long long)a1 ontoPath:(id)a2 inElementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 intoPath:(id)a4 orIntoVector:(void *)a5 viewScale:(double)a6 strokeTileLayout:(struct { double x0; double x1; double x2; double x3; })a7 cachedCurrentElementPercentage:(struct { id x0; unsigned long long x1; double x2; } *)a8;
- (long long)p_fastElementPercentage:(double *)a0 forOverallPercentage:(double)a1 onPath:(id)a2 withCachedCurrentElementPercentage:(struct { id x0; unsigned long long x1; double x2; } *)a3;
- (char)p_isDrawingRasterizedIntoPDFWithContext:(struct CGContext { } *)a0;
- (char)p_isFreehandDrawingStrokeWithFixedTileWidth;
- (char)p_prefersRasterRenderingInContext:(struct CGContext { } *)a0;
- (void)p_rasterBrushPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 orDirectly:(id)a2 parameterized:(char)a3 shouldReverseDrawOrder:(char)a4 withLayoutOptions:(id)a5;
- (void)p_rasterRenderSection:(id)a0 sectionIndex:(unsigned long long)a1 ontoPath:(id)a2 inElementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 into:(void *)a4 viewScale:(double)a5 strokeTileLayout:(struct { double x0; double x1; double x2; double x3; })a6 cachedCurrentElementPercentage:(struct { id x0; unsigned long long x1; double x2; } *)a7;
- (char)p_shouldDrawAsVectorInContext:(struct CGContext { } *)a0;
- (void)paintPath:(struct CGPath { } *)a0 wantsInteriorStroke:(char)a1 inContext:(struct CGContext { } *)a2 useFastDrawing:(char)a3 parameterized:(char)a4 shouldReverseDrawOrder:(char)a5;
- (void)paintPath:(struct CGPath { } *)a0 wantsInteriorStroke:(char)a1 inContext:(struct CGContext { } *)a2 useFastDrawing:(char)a3 parameterized:(char)a4 shouldReverseDrawOrder:(char)a5 withLayoutOptions:(id)a6;
- (char)prefersToApplyToShapeRenderableDuringManipulation;
- (double)suggestedMinimumLineWidth;
- (void)p_finishOpenGLRenderInContext:(struct CGContext { } *)a0 orDirectly:(id)a1 pathVertexData:(void *)a2 parameterized:(char)a3 shouldReverseDrawOrder:(char)a4 withLayoutOptions:(id)a5;
- (id)p_glTextureForCurrentStrokeAndContext;
- (struct CGImage { } *)p_newCGImageFromGLWithWidth:(int)a0 height:(int)a1;
- (char)p_shouldSplitAtSharpAngles;
- (char)usesOpenGL;

@end
