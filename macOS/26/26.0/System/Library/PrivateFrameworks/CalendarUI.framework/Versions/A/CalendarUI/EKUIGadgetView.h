@class NSTrackingArea, NSView, EKUIGadget;

@interface EKUIGadgetView : NSView

@property (retain) NSTrackingArea *trackingArea;
@property (weak) NSView *cachedPreviousKeyView;
@property (weak) NSView *cachedNextKeyView;
@property (weak) EKUIGadget *gadget;
@property BOOL shouldAbsorbMouseClickEvents;
@property BOOL shouldAbsorbMouseUpEvents;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)updateTrackingAreas;
- (void)updateConstraints;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_indicatorOverlayMaskRectForView:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (BOOL)performDragOperation:(id)a0;

@end
