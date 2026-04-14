@class NSArray, CAShapeLayer, NSBezierPath, CALayer, NSMutableArray, NSColor;
@protocol VKCImageCustomHighlightViewDelegate;

@interface VKCImageCustomHighlightView : VKCImageBaseOverlayView

@property (readonly, nonatomic) NSColor *highlightColor;
@property (retain, nonatomic) NSArray *selectionRects;
@property (retain, nonatomic) NSArray *matchedRanges;
@property (retain, nonatomic) NSArray *highlightRanges;
@property (retain, nonatomic) CAShapeLayer *highlightLayer;
@property (retain, nonatomic) CALayer *highlightShadowLayer;
@property (retain, nonatomic) CAShapeLayer *highlightColorLayer;
@property (retain, nonatomic) NSBezierPath *normalizedHighlightPath;
@property (retain, nonatomic) NSBezierPath *borderedNormalizedHighlightPath;
@property (nonatomic) BOOL isConfiguringHighlights;
@property (retain, nonatomic) NSMutableArray *highlightDots;
@property (weak, nonatomic) id<VKCImageCustomHighlightViewDelegate> highlightViewDelegate;

- (void).cxx_destruct;
- (void)layout;
- (void)updateLayer;
- (id)initWithDelegate:(id)a0;
- (BOOL)wantsLayer;
- (BOOL)isFlipped;
- (void)normalizedVisibleRectDidChange;
- (void)clearHighlightsAnimated:(BOOL)a0;
- (void)clearHighlightsAnimated:(BOOL)a0 hideLayers:(BOOL)a1;
- (void)updateHighlightLayerGeometryIfVisible;
- (void)updateHighlightLayerGeometry;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentContentsRectInLayerCoordinates;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForHighlightLayerInCurrentBounds;
- (void)beginHighlightWithRanges:(id)a0 animated:(BOOL)a1;
- (void)performHighlightForRanges:(id)a0 animated:(BOOL)a1 isReplacingResults:(BOOL)a2;
- (void)_configureHighlightDotForRanges:(id)a0;

@end
