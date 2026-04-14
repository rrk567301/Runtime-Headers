@class NSObject;
@protocol OS_dispatch_source, _NSPopupMenuScrollViewDelegate;

@interface NSMenuScrollView : NSScrollView {
    NSObject<OS_dispatch_source> *_autoScrollTimer;
    BOOL _isScrollingBehaviorEnabled;
    BOOL _shouldContinueAutoScrolling;
    BOOL _isAutoScrollInProgress;
    BOOL _isScrollingUsingScrollWheel;
    BOOL _isTopScrollIndicatorVisible;
    BOOL _isObservingScrollIndicatorChanges;
}

@property (weak, nonatomic) id<_NSPopupMenuScrollViewDelegate> popUpDelegate;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tile;
- (void)scrollWheel:(id)a0;
- (void)performSetup;
- (void)_updateScrollIndicatorsWithTargetSize:(struct CGSize { double x0; double x1; })a0;
- (void)_scrollToNewOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)didObserveScrolling:(id)a0 withVerticalScrollingDelta:(double)a1 withTargetSize:(struct CGSize { double x0; double x1; })a2;
- (void)_updateScrollIndicatorsIfNeededForTargetSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isScrollWheelCurrentlyActive;
- (BOOL)isAutoScrollCurrentlyActive;
- (void)_scrollToNextItem:(long long)a0;
- (BOOL)wantsMouseMovedEvent:(id)a0;
- (void)_autoScrollWithDirection:(long long)a0 forEvent:(id)a1;
- (BOOL)shouldCancelEvent:(id)a0;

@end
