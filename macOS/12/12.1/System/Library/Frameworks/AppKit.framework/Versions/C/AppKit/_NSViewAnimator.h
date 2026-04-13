@interface _NSViewAnimator : _NSObjectAnimator

- (void)setHidden:(BOOL)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setCompositingFilter:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)superview;
- (void)addSubview:(id)a0;
- (void)addSubview:(id)a0 positioned:(long long)a1 relativeTo:(id)a2;
- (void)removeFromSuperview;
- (void)setBoundsOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)subviews;
- (void)setAlphaValue:(double)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)replaceSubview:(id)a0 with:(id)a1;
- (void)removeFromSuperviewWithoutNeedingDisplay;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameRotation:(double)a0;
- (void)setShadow:(id)a0;
- (void)setBackgroundFilters:(id)a0;
- (void)setContentFilters:(id)a0;
- (BOOL)_useCoreAnimationFrameChanges;
- (void)setFrameCenterRotation:(double)a0;
- (struct CGPoint { double x0; double x1; })frameOrigin;
- (struct CGSize { double x0; double x1; })frameSize;
- (BOOL)_useCoreAnimationFrameOriginChanges;
- (BOOL)_shouldDoAnimation;
- (BOOL)_isLayerBackedAtNotTheRootLayer;
- (BOOL)_shouldDoLayerAnimation;

@end
