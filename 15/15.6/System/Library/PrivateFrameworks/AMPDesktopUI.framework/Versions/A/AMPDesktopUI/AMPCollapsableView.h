@class NSLayoutConstraint;

@interface AMPCollapsableView : NSView {
    char _collapsed;
    char _animating;
}

@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, getter=isCollapsed) char collapsed;
@property (nonatomic, getter=isAnimatedCollapsed) char animatedCollapsed;

- (id)init;
- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (void)setCollapsed:(char)a0 animated:(char)a1;
- (id)propertyKeysForViewSpy;
- (void)setCollapsedStateImmediately:(char)a0;

@end
