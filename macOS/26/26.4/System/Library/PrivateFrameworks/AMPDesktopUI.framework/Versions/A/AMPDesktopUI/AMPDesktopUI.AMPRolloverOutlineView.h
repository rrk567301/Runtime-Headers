@interface AMPDesktopUI.AMPRolloverOutlineView : NSOutlineView {
    void /* unknown type, empty encoding */ rolloverTracker;
    void /* unknown type, empty encoding */ currentRolloverRow;
    void /* unknown type, empty encoding */ tileReentryGuard;
}

- (void)reloadData;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)tile;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToWindow;
- (BOOL)_shouldDrawFocus;
- (void)mouseMoved:(id)a0;

@end
