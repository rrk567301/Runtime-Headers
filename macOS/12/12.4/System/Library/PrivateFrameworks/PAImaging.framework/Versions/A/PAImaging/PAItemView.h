@class PAItemViewConfiguration;

@interface PAItemView : NSView {
    PAItemViewConfiguration *_configuration;
    BOOL _inLiveResize;
}

@property (copy, nonatomic) PAItemViewConfiguration *configuration;
@property (nonatomic) struct CGSize { double x0; double x1; } originalSize;
@property (nonatomic) long long originalOrientation;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } originalTransform;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (nonatomic) double contentScale;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentAnchor;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } frameRenderTime;
@property (nonatomic) struct CGPoint { double x0; double x1; } viewAnchorPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOrigin;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOriginPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentClipRect;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } viewContentSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewContentBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleViewContentBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleOriginalContentBounds;

+ (id)keyPathsForValuesAffectingContentSize;
+ (id)originalTransformWithSize:(struct CGSize { double x0; double x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 orientation:(long long)a2 contentClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })originalTransformWithSize:(struct CGSize { double x0; double x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 orientation:(long long)a2;
+ (double)contentScaleToFitInSize:(struct CGSize { double x0; double x1; })a0 withContentSize:(struct CGSize { double x0; double x1; })a1;
+ (id)originalTransformWithSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleOriginalContentRectForViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 originalTransform:(id)a1 contentTransform:(id)a2;
+ (double)contentScaleToFitInSize:(struct CGSize { double x0; double x1; })a0 withOriginalTransform:(id)a1;

- (void).cxx_destruct;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)inLiveResize;
- (void)viewWillStartLiveResize;
- (void)viewDidEndLiveResize;
- (struct CGSize { double x0; double x1; })originalSize;
- (double)contentScale;
- (struct CGPoint { double x0; double x1; })contentOrigin;
- (long long)originalOrientation;
- (void)setOriginalOrientation:(long long)a0;
- (void)setContentScale:(double)a0;
- (void)setContentOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setOriginalSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewContentBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectToViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewRectToContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleViewContentBounds;
- (struct CGPoint { double x0; double x1; })contentPointToViewPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })viewPointToContentPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })viewContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleContentBounds;
- (struct CGPoint { double x0; double x1; })contentAnchor;
- (double)contentScaleToFitInSize:(struct CGSize { double x0; double x1; })a0;
- (void)setContentAnchor:(struct CGPoint { double x0; double x1; })a0;
- (void)updateTransforms;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })originalTransform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentClipRect;
- (double)_contentScaleToFitInSize:(struct CGSize { double x0; double x1; })a0 withContentSize:(struct CGSize { double x0; double x1; })a1;
- (double)contentScaleToFitInSize:(struct CGSize { double x0; double x1; })a0 withOriginalSize:(struct CGSize { double x0; double x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 orientation:(long long)a3 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (struct CGPoint { double x0; double x1; })originalPointToContentPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })contentPointToOriginalPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalRectToContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectToOriginalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canRescaleLayerDuringLiveResize;
- (void)setOriginalSizeHoldingScaleEquivalent:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1;
- (void)setOriginalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setContentClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleOriginalContentBounds;
- (double)contentScaleToFitInSize:(struct CGSize { double x0; double x1; })a0 withOriginalSize:(struct CGSize { double x0; double x1; })a1 orientation:(long long)a2;
- (struct CGPoint { double x0; double x1; })originalPointToViewPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })viewPointToOriginalPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalRectToViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewRectToOriginalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
