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
+ (void)_registerDynamicToolTipManagerInstance:(id)a0;
+ (void)_unregisterDynamicToolTipManagerInstance:(id)a0;
+ (id)_dynamicToolTipManagerInstances;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)initWithView:(id)a0;
- (void)_windowChangedKeyState;
- (void)viewDidEndLiveResize;
- (void)viewWillMoveToWindow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dynamicToolTipRectAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)dynamicToolTipStringAtPoint:(struct CGPoint { double x0; double x1; })a0 trackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)dynamicToolTipRevealoverInfoAtPoint:(struct CGPoint { double x0; double x1; })a0 trackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)view:(id)a0 customToolTip:(long long)a1 drawInView:(id)a2 displayInfo:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })view:(id)a0 customToolTip:(long long)a1 frameForToolTipWithDisplayInfo:(id)a2;
- (void)abortToolTip;
- (BOOL)view:(id)a0 customToolTip:(long long)a1 fadeOutAllowedForToolTipWithDisplayInfo:(id)a2;
- (BOOL)isExpansionToolTipInView:(id)a0 withDisplayInfo:(id)a1;
- (void)_appActivationChanged:(id)a0;
- (void)windowDidBecomeVisibleNotification:(id)a0;
- (void)_removeToolTipTrackingRectIfNecessary;
- (void)_removeVisibleViewTrackingRectIfNecessary;
- (void)_abortAndRestartTracking:(BOOL)a0;
- (void)_removeAllTrackingRects;
- (void)detatchFromView;
- (void)_viewVisibleBoundsChanged;
- (void)_threadsafeViewVisibleBoundsChanged;
- (void)_setupForWindow:(id)a0;
- (void)viewWillResetCursorRects;
- (void)setWantsExpansionToolTips:(BOOL)a0;
- (void)_windowDidEnableToolTipCreationAndDisplay;
- (void)windowDidEnableToolTipCreationAndDisplay;
- (void)windowChangedKeyState;
- (void)_cancelCurrentToolTipWindowImmediately:(BOOL)a0;
- (BOOL)_canShowToolTip;
- (BOOL)_shouldTrack;
- (int)_displayToolTipIfNecessaryIgnoringTime:(BOOL)a0;
- (BOOL)_shouldRestartMovementTracking;
- (void)_markMovementTrackingInfo;
- (BOOL)_shouldShowRegularToolTipOnExpansionToolTip;
- (void)_cancelMovementTrackingTimer;
- (void)_disabledTrackingInNeighborhoodOfMouse;
- (void)_continueMovementTracking;
- (void)_restartMovementTracking;
- (struct CGPoint { double x0; double x1; })_currentLocalMousePoint;

@end
