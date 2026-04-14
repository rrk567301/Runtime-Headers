@class EKUIGadgetContainer, NSTrackingArea;

@interface EKUIGadgetContainerView : NSView {
    NSTrackingArea *_trackingArea;
}

@property (weak) EKUIGadgetContainer *container;

- (BOOL)resignFirstResponder;
- (void)mouseUp:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)canBecomeKeyView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)updateTrackingAreas;
- (void)dealloc;

@end
