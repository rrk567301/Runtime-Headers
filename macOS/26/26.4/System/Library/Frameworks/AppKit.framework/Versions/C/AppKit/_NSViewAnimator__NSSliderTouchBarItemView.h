@class NSString, NSLayoutConstraint;

@interface _NSViewAnimator__NSSliderTouchBarItemView : _NSViewAnimator <CAAnimationDelegate> {
    NSLayoutConstraint *_collapseAnimationConstraint;
    long long _animationDepth;
    BOOL _animatingCollapse;
}

@property double valueAccessoryWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCollapsed:(BOOL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void)stopAndCleanupCollapseAnimation;
- (id)sliderItemViewTarget;

@end
