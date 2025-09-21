@class NSArray, NSHashTable;
@protocol _MKStackViewDelegate, _MKAnimationStackViewDelegate;

@interface _MKStackView : NSView {
    NSArray *_stackConstraints;
    NSHashTable *_viewsNeedingWidthConstraints;
}

@property (weak, nonatomic) id<_MKStackViewDelegate> stackDelegate;
@property (weak, nonatomic) id<_MKAnimationStackViewDelegate> stackAnimationDelegate;
@property (copy, nonatomic) NSArray *stackedSubviews;
@property (nonatomic) char bottomConstraintShouldBeGreaterThanOrEqual;

- (void).cxx_destruct;
- (void)addSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)_createConstraints;
- (void)setStackedSubviews:(id)a0 animated:(char)a1;
- (void)setStackedSubviews:(id)a0 animated:(char)a1 isNeedLayout:(char)a2;

@end
