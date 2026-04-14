@class NSLayoutConstraint;

@interface AMPCollapsableView : NSView {
    BOOL _collapsed;
    BOOL _animating;
}

@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic, getter=isAnimatedCollapsed) BOOL animatedCollapsed;
@property (nonatomic) double animationDuration;

- (void)didAddSubview:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setCollapsed:(BOOL)a0 animated:(BOOL)a1;
- (id)propertyKeysForViewSpy;
- (void)setCollapsedStateImmediately:(BOOL)a0;

@end
