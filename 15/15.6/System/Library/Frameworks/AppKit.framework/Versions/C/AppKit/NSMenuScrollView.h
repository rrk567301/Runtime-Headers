@class NSCocoaMenuImpl;
@protocol _NSPopupMenuScrollViewDelegate;

@interface NSMenuScrollView : NSScrollView {
    id _consumptionEventMonitor;
    struct __CFRunLoopTimer { } *_autoScrollTimer;
    double _coalescedDeltaY;
    double _accelerationMultiplier;
    double _lineHeight;
    double _accelerationStartTime;
    char _isScrollingBehaviorEnabled;
    char _shouldContinueAutoScrolling;
    char _isAutoScrollInProgress;
    char _isScrollingUsingScrollWheel;
    char _isTopScrollIndicatorVisible;
    char _isEligibleForScrollAcceleration;
    char _preventMouseEventReentry;
    char _hasPendingScrollIndicatorUpdates;
    char _hasPendingSizeUpdates;
}

@property (weak, nonatomic) NSCocoaMenuImpl<_NSPopupMenuScrollViewDelegate> *contextMenuDelegate;
@property (nonatomic) long long scrollingBehavior;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_autoScrollWithDirection:(long long)a0 forEvent:(id)a1;
- (void)_handleScrollEvent:(id)a0;
- (void)_lineScroll:(long long)a0 numberOfLines:(long long)a1;
- (void)_sendDelegateHighlightItemUnderMouse;
- (void)_updateElasticity;
- (void)_updateIndicatorsForScrollOrigin:(struct CGPoint { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1 afterScrolling:(struct CGPoint { double x0; double x1; })a2;
- (char)accessibilityIsIgnored;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAutoScrollCurrentlyActive;
- (char)isScrollWheelCurrentlyActive;
- (void)performSetup;
- (void)removeFromSuperview;
- (void)scrollToVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollWheel:(id)a0;
- (char)scrollsDynamically;
- (char)shouldCancelEvent:(id)a0;
- (void)updateScrollIndicatorsForTargetSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateScrollIndicatorsForTargetSize:(struct CGSize { double x0; double x1; })a0 afterScrolling:(struct CGPoint { double x0; double x1; })a1;
- (char)wantsMouseMovedEvent:(id)a0;

@end
