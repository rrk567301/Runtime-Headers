@interface SwiftUI.HostingScrollView : NSScrollView {
    void /* unknown type, empty encoding */ viewType;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ prefetchState;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ layoutDirection;
    void /* unknown type, empty encoding */ ignoreUpdates;
    void /* unknown type, empty encoding */ pendingUpdate;
    void /* unknown type, empty encoding */ animationTarget;
    void /* unknown type, empty encoding */ animationOffset;
    void /* unknown type, empty encoding */ isAnimatingScroll;
    void /* unknown type, empty encoding */ isAnimationCompletionCheckPending;
    void /* unknown type, empty encoding */ animationListener;
    void /* unknown type, empty encoding */ isTracking;
    void /* unknown type, empty encoding */ configuration;
}

@property (class, nonatomic, readonly) BOOL compatibleWithResponsiveScrolling;
@property (class, nonatomic, readonly) Class _horizontalScrollerClass;
@property (class, nonatomic, readonly) Class _verticalScrollerClass;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsForwardedScrollEventsForAxis:(long long)a0;
- (id)_nextResponderForEvent:(id)a0;
- (void)scrollViewDidScrollWithNotification:(id)a0;
- (void)scrollViewDidBeginLiveScrollingWithNotification:(id)a0;
- (void)scrollViewDidEndLiveScrollingWithNotification:(id)a0;
- (void)preferredScrollerStyleDidChangeWithNotification:(id)a0;

@end
