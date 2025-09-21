@class NSView;

@interface NSViewDynamicToolTipManager : NSObject {
    NSView *_view;
    struct __CFRunLoopTimer { } *_monitorMovementTimerRef;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _trackedBounds;
    struct CGPoint { double x; double y; } _lastFixedMousePoint;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastFixedMousePointToolTipRect;
    double _lastFixedMousePointTime;
    double _displayToolTipDelay;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toolTipTrackingRect;
    long long _toolTipTrackingRectTag;
    long long _visibleViewTrackingRectTag;
    unsigned char _trackingAreaAroundMouse : 1;
    unsigned char _inQuickToolTipMode : 1;
    unsigned char _mouseInsideVisibleTrackingRect : 1;
}

@property (readonly) NSView *view;

+ (id)_dynamicToolTipManagerInstances;
+ (void)_registerDynamicToolTipManagerInstance:(id)a0;
+ (void)_unregisterDynamicToolTipManagerInstance:(id)a0;
+ (void)abortAllToolTips;

- (void)dealloc;
- (void).cxx_destruct;
- (char)_canShowToolTip;
- (void)detatchFromView;
- (void)_abortAndRestartTracking:(char)a0;
- (void)_appActivationChanged:(id)a0;
- (void)_cancelCurrentToolTipWindowImmediately:(char)a0;
- (void)_cancelMovementTrackingTimer;
- (void)_continueMovementTracking;
- (struct CGPoint { double x0; double x1; })_currentLocalMousePoint;
- (void)_disabledTrackingInNeighborhoodOfMouse;
- (int)_displayToolTipIfNecessaryIgnoringTime:(char)a0;
- (void)_markMovementTrackingInfo;
- (void)_removeAllTrackingRects;
- (void)_removeToolTipTrackingRectIfNecessary;
- (void)_removeVisibleViewTrackingRectIfNecessary;
- (void)_restartMovementTracking;
- (void)_setupForWindow:(id)a0;
- (char)_shouldRestartMovementTracking;
- (char)_shouldShowRegularToolTipOnExpansionToolTip;
- (char)_shouldTrack;
- (void)_threadsafeViewVisibleBoundsChanged;
- (void)_viewVisibleBoundsChanged;
- (void)_windowChangedKeyState;
- (void)_windowDidEnableToolTipCreationAndDisplay;
- (void)abortToolTip;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dynamicToolTipRectAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)dynamicToolTipRevealoverInfoAtPoint:(struct CGPoint { double x0; double x1; })a0 trackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)dynamicToolTipStringAtPoint:(struct CGPoint { double x0; double x1; })a0 trackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)initWithView:(id)a0;
- (char)isExpansionToolTipInView:(id)a0 withDisplayInfo:(id)a1;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setWantsExpansionToolTips:(char)a0;
- (void)view:(id)a0 customToolTip:(long long)a1 drawInView:(id)a2 displayInfo:(id)a3;
- (char)view:(id)a0 customToolTip:(long long)a1 fadeOutAllowedForToolTipWithDisplayInfo:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })view:(id)a0 customToolTip:(long long)a1 frameForToolTipWithDisplayInfo:(id)a2;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)viewWillResetCursorRects;
- (void)windowChangedKeyState;
- (void)windowDidBecomeVisibleNotification:(id)a0;
- (void)windowDidEnableToolTipCreationAndDisplay;

@end
