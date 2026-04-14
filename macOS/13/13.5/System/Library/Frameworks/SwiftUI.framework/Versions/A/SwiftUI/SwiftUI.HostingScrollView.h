@interface SwiftUI.HostingScrollView : SwiftUI.AppKitScrollView <NSScrollViewDelegate> {
    void /* unknown type, empty encoding */ viewType;
    void /* unknown type, empty encoding */ layoutState;
    void /* unknown type, empty encoding */ eventState;
    void /* unknown type, empty encoding */ prefetchState;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ layoutDirection;
    void /* unknown type, empty encoding */ ignoreUpdates;
    void /* unknown type, empty encoding */ pendingUpdate;
    void /* unknown type, empty encoding */ animationTarget;
    void /* unknown type, empty encoding */ animationTargetConfig;
    void /* unknown type, empty encoding */ animationOffset;
    void /* unknown type, empty encoding */ isAnimatingScroll;
    void /* unknown type, empty encoding */ isAnimationCompletionCheckPending;
    void /* unknown type, empty encoding */ beginDraggingOffset;
    void /* unknown type, empty encoding */ isTracking;
    void /* unknown type, empty encoding */ isDecelerating;
    void /* unknown type, empty encoding */ configuration;
}

@property (class, nonatomic, readonly) BOOL compatibleWithResponsiveScrolling;

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_nextResponderForEvent:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewBeganMomentum:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)viewDidMoveToWindow;
- (BOOL)wantsForwardedScrollEventsForAxis:(long long)a0;
- (void)scrollViewDidBeginLiveScrollingWithNotification:(id)a0;
- (void)scrollViewDidEndLiveScrollingWithNotification:(id)a0;
- (void)scrollViewDidScrollWithNotification:(id)a0;

@end
