@interface WebScrollAnimationHelperDelegate : NSObject {
    struct NakedPtr<WebCore::ScrollAnimatorMac> { struct ScrollAnimatorMac *m_ptr; } _animator;
}

- (void)invalidate;
- (id).cxx_construct;
- (id)window;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)superview;
- (id)documentView;
- (struct CGPoint { double x0; double x1; })_pixelAlignProposedScrollPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)_immediateScrollToPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })convertSizeToBacking:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })convertSizeFromBacking:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })convertSizeToBase:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })convertSizeFromBase:(struct CGSize { double x0; double x1; })a0;
- (id)initWithScrollAnimator:(struct NakedPtr<WebCore::ScrollAnimatorMac> { struct ScrollAnimatorMac *x0; })a0;
- (void)_recursiveRecomputeToolTips;

@end
