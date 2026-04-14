@class NSTrackingArea;

@interface IANewAccountTableRowView : NSTableRowView {
    BOOL _mouseInside;
    NSTrackingArea *_trackingArea;
}

@property BOOL mouseInside;
@property BOOL mouseDown;

- (void)dealloc;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (void)drawSeparatorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)mouseInside;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)windowResignedKey:(id)a0;
- (void)setMouseInside:(BOOL)a0;
- (void)_ensureTrackingArea;
- (void)undoMouseDown;

@end
