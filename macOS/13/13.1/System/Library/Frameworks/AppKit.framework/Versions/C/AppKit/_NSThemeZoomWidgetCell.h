@class NSString, NSTrackingArea, NSMenu, NSWindow;

@interface _NSThemeZoomWidgetCell : _NSThemeWidgetCell <NSMenuDelegate> {
    BOOL _performedHandoff;
    BOOL _stoppedTracking;
    BOOL _eligibleForHandoff;
    struct CGPoint { double x; double y; } _mouseLocation;
    BOOL _trackingMouse;
    BOOL _trackingPopupMenu;
    BOOL _isMouseInside;
}

@property (retain) NSMenu *contextMenu;
@property (weak) NSWindow *trackedWindow;
@property (retain) NSTrackingArea *exitTrackingArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityActionNames;
- (void)_setMouseTrackingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)menuDidClose:(id)a0;
- (void)startTrackingHover;
- (void)stopTrackingHover;
- (void)performClick:(id)a0;
- (BOOL)accessibilityPerformShowMenu;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;
- (BOOL)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (BOOL)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (BOOL)_sendActionFrom:(id)a0;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(BOOL)a3;
- (BOOL)_hasRolloverContentArt;
- (BOOL)_hitTestForTrackMouseEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (void)flagsChanged;
- (void)handleStopTrackingHoverEvent:(id)a0;
- (void)_hoverTriggeredShowMenuForView:(id)a0;
- (void)performHandoff:(id)a0;
- (BOOL)isZoomButton;
- (int)menuOption;
- (BOOL)wantsHoverTracking;
- (BOOL)wantsMenu;
- (void)addHoverObservers;
- (void)removeHoverObservers;
- (void)startTrackingForDismissal;
- (void)stopTrackingForDismissal;
- (void)showMenu:(id)a0;
- (void)_setTemporaryMouseOutsideLeftGroup:(BOOL)a0 ofView:(id)a1;

@end
