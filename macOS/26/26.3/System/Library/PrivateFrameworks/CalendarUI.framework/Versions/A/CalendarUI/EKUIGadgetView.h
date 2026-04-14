@class NSTrackingArea, NSView, EKUIGadget;

@interface EKUIGadgetView : NSView

@property (retain) NSTrackingArea *trackingArea;
@property (weak) NSView *cachedPreviousKeyView;
@property (weak) NSView *cachedNextKeyView;
@property (weak) EKUIGadget *gadget;
@property BOOL shouldAbsorbMouseClickEvents;
@property BOOL shouldAbsorbMouseUpEvents;

- (void)mouseUp:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)updateConstraints;
- (void)updateTrackingAreas;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mouseDown:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_indicatorOverlayMaskRectForView:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (BOOL)performDragOperation:(id)a0;

@end
