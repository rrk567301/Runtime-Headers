@class EKUIGadgetContainer, NSTrackingArea;

@interface EKUIGadgetContainerView : NSView {
    NSTrackingArea *_trackingArea;
}

@property (weak) EKUIGadgetContainer *container;

- (void)dealloc;
- (void).cxx_destruct;
- (char)acceptsFirstResponder;
- (char)becomeFirstResponder;
- (char)canBecomeKeyView;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (char)isFlipped;
- (void)keyDown:(id)a0;
- (void)mouseUp:(id)a0;
- (char)resignFirstResponder;
- (void)updateConstraints;
- (void)updateTrackingAreas;

@end
