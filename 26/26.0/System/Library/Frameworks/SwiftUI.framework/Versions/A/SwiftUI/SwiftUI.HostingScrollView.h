@interface SwiftUI.HostingScrollView : SwiftUI.AppKitScrollView <NSScrollViewDelegate> {
    void /* unknown type, empty encoding */ viewType;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ parentContainer;
    void /* unknown type, empty encoding */ responder;
    void /* unknown type, empty encoding */ layoutDirection;
    void /* unknown type, empty encoding */ rtlAdjustment;
    void /* unknown type, empty encoding */ lastOrigin;
    void /* unknown type, empty encoding */ safeAreaHelper;
    void /* unknown type, empty encoding */ nonScrollableEdgeInsets;
    void /* unknown type, empty encoding */ pendingContext;
    void /* unknown type, empty encoding */ animationTarget;
    void /* unknown type, empty encoding */ animationTargetConfig;
    void /* unknown type, empty encoding */ animationOffset;
    void /* unknown type, empty encoding */ lastScrollGestureAxis;
    void /* unknown type, empty encoding */ orthogonalAccumulator;
    void /* unknown type, empty encoding */ accumulatedAxisChangeThreshold;
    void /* unknown type, empty encoding */ oldContentMargins;
    void /* unknown type, empty encoding */ viewGraph;
    void /* unknown type, empty encoding */ pinnedViews;
    void /* unknown type, empty encoding */ configuration;
}

@property (class, nonatomic, readonly) BOOL compatibleWithResponsiveScrolling;

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } computedScrollViewFrame;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_nextResponderForEvent:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (void)scrollWheel:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsForwardedScrollEventsForAxis:(long long)a0;
- (void)scrollViewDidScrollWithNotification:(id)a0;

@end
