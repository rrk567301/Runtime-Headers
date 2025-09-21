@class NSString, TSDFrameSpec;

@interface TSDFrame : TSDStroke {
    NSString *_frameName;
    double _leftWidth;
    double _rightWidth;
    double _topHeight;
    double _bottomHeight;
    struct CGSize { double width; double height; } _adornmentSize;
}

@property (readonly, nonatomic) NSString *archivableFrameName;
@property (readonly, nonatomic) NSString *frameName;
@property (readonly, nonatomic) double assetScale;
@property (readonly, nonatomic) TSDFrameSpec *frameSpec;
@property (readonly, nonatomic) char hasMask;
@property (readonly, nonatomic) double minimumAssetScale;

+ (Class)mutableClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (char)isFrame;
- (char)isNearlyWhite;
- (char)shouldRender;
- (char)supportsColor;
- (char)canApplyDirectlyToRepRenderable;
- (struct _TSDStrokeOutsets { double x0; double x1; double x2; double x3; })outsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_coverageRectWithoutAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)supportsPattern;
- (char)canApplyToShapeRenderable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coverageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coverageRectWithoutAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (char)drawsInOneStep;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })i_adornmentRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)i_bottomHeight;
- (double)i_leftWidth;
- (double)i_rightWidth;
- (double)i_topHeight;
- (char)i_willRenderForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithFrameName:(id)a0;
- (id)initWithFrameSpec:(id)a0;
- (id)initWithFrameSpec:(id)a0 assetScale:(double)a1;
- (id)initWithFrameSpec:(id)a0 assetScale:(double)a1 archivableFrameName:(id)a2;
- (char)isNullStroke;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_coverageRectWithAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })p_minimumRenderedSize;
- (void)paintPath:(struct CGPath { } *)a0 wantsInteriorStroke:(char)a1 inContext:(struct CGContext { } *)a2 useFastDrawing:(char)a3;
- (char)prefersToApplyToShapeRenderableDuringManipulation;
- (char)shouldRenderForSizeIncludingCoverage:(struct CGSize { double x0; double x1; })a0;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (char)supportsLineOptions;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (char)containsPoint:(struct CGPoint { double x0; double x1; })a0 whenStrokingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)equivalentStrokeWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_uncoveredRectWithoutAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
