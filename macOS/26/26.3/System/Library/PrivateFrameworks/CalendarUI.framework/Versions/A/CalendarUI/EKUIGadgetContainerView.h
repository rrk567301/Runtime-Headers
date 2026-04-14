@class EKUIGadgetContainer, NSTrackingArea;

@interface EKUIGadgetContainerView : NSView {
    NSTrackingArea *_trackingArea;
}

@property (weak) EKUIGadgetContainer *container;

- (void)mouseUp:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeKeyView;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)updateConstraints;
- (void)updateTrackingAreas;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)keyDown:(id)a0;

@end
