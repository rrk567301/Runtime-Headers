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
@property (nonatomic) char isConfiguringHighlights;
@property (retain, nonatomic) NSMutableArray *highlightDots;
@property (weak, nonatomic) id<VKCImageCustomHighlightViewDelegate> highlightViewDelegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)layout;
- (char)isFlipped;
- (void)updateLayer;
- (char)wantsLayer;
- (void)_configureHighlightDotForRanges:(id)a0;
- (void)beginHighlightWithRanges:(id)a0 animated:(char)a1;
- (void)clearHighlightsAnimated:(char)a0;
- (void)clearHighlightsAnimated:(char)a0 hideLayers:(char)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentContentsRectInLayerCoordinates;
- (void)normalizedVisibleRectDidChange;
- (void)performHighlightForRanges:(id)a0 animated:(char)a1 isReplacingResults:(char)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForHighlightLayerInCurrentBounds;
- (void)updateHighlightLayerGeometry;
- (void)updateHighlightLayerGeometryIfVisible;

@end
