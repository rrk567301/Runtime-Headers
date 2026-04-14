@class NSColor, CAShapeLayer;

@interface AXVHighlightPointView : AXVHighlightView

@property (retain, nonatomic, setter=_setCircleLayer:) CAShapeLayer *_circleLayer;
@property (nonatomic) struct CGPoint { double x; double y; } highlightPoint;
@property (retain, nonatomic) NSColor *highlightPointColor;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrameSpanningAllScreens;

@end
