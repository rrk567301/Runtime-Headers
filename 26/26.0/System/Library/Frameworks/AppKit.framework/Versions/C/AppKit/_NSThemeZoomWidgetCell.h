@class NSString, NSTrackingArea, NSMenu, NSWindow;

@interface _NSThemeZoomWidgetCell : _NSThemeWidgetCell <NSMenuDelegate> {
    struct CGPoint { double x; double y; } _mouseLocation;
    unsigned char _performedHandoff : 1;
    unsigned char _stoppedTracking : 1;
    unsigned char _eligibleForHandoff : 1;
    unsigned char _trackingMouse : 1;
    unsigned char _trackingPopupMenu : 1;
    unsigned char _isMouseInside : 1;
}

@property (retain) NSMenu *contextMenu;
@property (weak) NSWindow *trackedWindow;
@property (retain) NSTrackingArea *exitTrackingArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_cancelWarmup;
+ (void)_warmUpImmediately:(BOOL)a0;
+ (void)_warmUpService;

- (void)setHighlighted:(BOOL)a0;
- (void)dealloc;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)_setMouseTrackingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1;
- (void)_hoverTriggeredShowMenuForView:(id)a0;
- (void)performHandoff:(id)a0;
- (BOOL)_hasRolloverAppearance;
- (BOOL)_hitTestForTrackMouseEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (void)_mouseExited;
- (BOOL)_sendActionFrom:(id)a0;
- (void)_setTemporaryMouseOutsideLeftGroup:(BOOL)a0 ofView:(id)a1;
- (id)_zoomWidget;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityPerformShowMenu;
- (void)addHoverObservers;
- (BOOL)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (void)flagsChanged;
- (void)handleStopTrackingHoverEvent:(id)a0;
- (BOOL)isZoomButton;
- (void)menuDidClose:(id)a0;
- (int)menuOption;
- (void)menuWillOpen:(id)a0;
- (void)performClick:(id)a0;
- (void)removeHoverObservers;
- (void)showMenu:(id)a0;
- (BOOL)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)startTrackingForDismissal;
- (void)startTrackingHover;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(BOOL)a3;
- (void)stopTrackingForDismissal;
- (void)stopTrackingHover;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;
- (BOOL)wantsHoverTracking;
- (BOOL)wantsMenu;

@end
