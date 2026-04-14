@interface _NSViewAnimator : _NSObjectAnimator

- (void)removeFromSuperview;
- (void)addSubview:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAlphaValue:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)superview;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (BOOL)_isLayerBackedAtNotTheRootLayer;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldDoAnimation;
- (BOOL)_shouldDoLayerAnimation;
- (BOOL)_useCoreAnimationFrameChanges;
- (BOOL)_useCoreAnimationFrameOriginChanges;
- (void)addSubview:(id)a0 positioned:(long long)a1 relativeTo:(id)a2;
- (struct CGPoint { double x0; double x1; })frameOrigin;
- (struct CGSize { double x0; double x1; })frameSize;
- (void)removeFromSuperviewWithoutNeedingDisplay;
- (void)replaceSubview:(id)a0 with:(id)a1;
- (void)setBackgroundFilters:(id)a0;
- (void)setBoundsOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setCompositingFilter:(id)a0;
- (void)setContentFilters:(id)a0;
- (void)setFrameCenterRotation:(double)a0;
- (void)setFrameRotation:(double)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setShadow:(id)a0;
- (id)subviews;

@end
