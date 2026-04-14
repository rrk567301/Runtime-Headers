@class EKUIGadgetContainer, NSTrackingArea;

@interface EKUIGadgetContainerView : NSView {
    NSTrackingArea *_trackingArea;
}

@property (weak) EKUIGadgetContainer *container;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;
- (BOOL)canBecomeKeyView;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)updateTrackingAreas;
- (void)dealloc;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (BOOL)isFlipped;
- (void)keyDown:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
