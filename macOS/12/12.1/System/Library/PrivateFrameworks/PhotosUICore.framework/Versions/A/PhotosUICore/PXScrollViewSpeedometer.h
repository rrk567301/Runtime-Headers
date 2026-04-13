@class NSTimer, PXScrollViewController, NSString;

@interface PXScrollViewSpeedometer : PXObservable <PXScrollViewControllerObserver>

@property (nonatomic, setter=_setLastVisibleRect:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastVisibleRect;
@property (nonatomic, setter=_setLastTime:) double _lastTime;
@property (retain, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer;
@property (nonatomic, setter=_setNextRegime:) long long _nextRegime;
@property (nonatomic, setter=_setNextRegimeCount:) long long _nextRegimeCount;
@property (nonatomic) struct CGPoint { double x; double y; } scrollVelocity;
@property (nonatomic) struct CGPoint { double x; double y; } scrollAcceleration;
@property (nonatomic) struct CGPoint { double x; double y; } lastScrollDirection;
@property (nonatomic) BOOL hasRampedUpForCurrentAnimatedScroll;
@property (readonly, nonatomic) PXScrollViewController *scrollViewController;
@property (readonly, nonatomic) long long regime;
@property (readonly, nonatomic) long long previousRegime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void)scrollViewControllerDidEndScrolling:(id)a0;
- (void)scrollViewControllerWillBeginScrollingAnimation:(id)a0 towardsContentEdges:(unsigned long long)a1;
- (void)scrollViewControllerDidEndScrollingAnimation:(id)a0;
- (id)initWithScrollController:(id)a0;
- (void)_updateScrollRegime;
- (void)_handleScrollEvent:(id)a0 didScrollingEnd:(BOOL)a1;
- (void)_setRegime:(long long)a0;
- (void)_setPreviousRegime:(long long)a0;
- (double)mediumLowerThreshold;
- (double)mediumUpperThreshold;
- (double)fastLowerThreshold;
- (double)fastUpperThreshold;
- (void)_scheduleScrubbingTimeout;
- (void)_handleScrubbingTimeout;
- (void)_rescheduleTimeout;
- (void)_handleTimeoutTimer:(id)a0;

@end
