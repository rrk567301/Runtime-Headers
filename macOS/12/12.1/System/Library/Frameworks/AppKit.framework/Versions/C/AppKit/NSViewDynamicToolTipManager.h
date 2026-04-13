@class NSView;

@interface NSViewDynamicToolTipManager : NSObject {
    NSView *_view;
    struct __CFRunLoopTimer { } *_monitorMovementTimerRef;
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
    unsigned int _reserved : 29;
}

@property (readonly) NSView *view;

+ (void)abortAllToolTips;
+ (id)_dynamicToolTipManagerInstances;
+ (void)_registerDynamicToolTipManagerInstance:(id)a0;
+ (void)_unregisterDynamicToolTipManagerInstance:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)abortToolTip;
- (void)_windowChangedKeyState;
- (void)viewDidEndLiveResize;
- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithView:(id)a0;
- (void)detatchFromView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dynamicToolTipRectAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)dynamicToolTipStringAtPoint:(struct CGPoint { double x0; double x1; })a0 trackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)dynamicToolTipRevealoverInfoAtPoint:(struct CGPoint { double x0; double x1; })a0 trackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)view:(id)a0 customToolTip:(long long)a1 drawInView:(id)a2 displayInfo:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })view:(id)a0 customToolTip:(long long)a1 frameForToolTipWithDisplayInfo:(id)a2;
- (BOOL)view:(id)a0 customToolTip:(long long)a1 fadeOutAllowedForToolTipWithDisplayInfo:(id)a2;
- (BOOL)isExpansionToolTipInView:(id)a0 withDisplayInfo:(id)a1;
- (void)viewWillResetCursorRects;
- (void)windowDidEnableToolTipCreationAndDisplay;
- (void)windowChangedKeyState;
- (void)_cancelMovementTrackingTimer;
- (void)_cancelCurrentToolTipWindowImmediately:(BOOL)a0;
- (void)_removeToolTipTrackingRectIfNecessary;
- (struct CGPoint { double x0; double x1; })_currentLocalMousePoint;
- (void)_restartMovementTracking;
- (void)_disabledTrackingInNeighborhoodOfMouse;
- (void)_setupForWindow:(id)a0;
- (void)_appActivationChanged:(id)a0;
- (void)_removeVisibleViewTrackingRectIfNecessary;
- (void)_removeAllTrackingRects;
- (void)_abortAndRestartTracking:(BOOL)a0;
- (void)_viewVisibleBoundsChanged;
- (void)windowDidBecomeVisibleNotification:(id)a0;
- (void)_threadsafeViewVisibleBoundsChanged;
- (void)_windowDidEnableToolTipCreationAndDisplay;
- (BOOL)_canShowToolTip;
- (void)_markMovementTrackingInfo;
- (BOOL)_shouldTrack;
- (BOOL)_shouldRestartMovementTracking;
- (int)_displayToolTipIfNecessaryIgnoringTime:(BOOL)a0;
- (BOOL)_shouldShowRegularToolTipOnExpansionToolTip;
- (void)_continueMovementTracking;
- (void)setWantsExpansionToolTips:(BOOL)a0;

@end
