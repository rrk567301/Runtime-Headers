@interface _TtCV14CoreChartSwift23InteractionHandlingView10NSViewType : NSView {
    void /* unknown type, empty encoding */ dispatcher;
    void /* unknown type, empty encoding */ currentTrackingArea;
}

@property (nonatomic, readonly) BOOL flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;

@end
