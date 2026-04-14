@interface _NSViewAnimator : _NSObjectAnimator

- (void)setHidden:(BOOL)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)addSubview:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)replaceSubview:(id)a0 with:(id)a1;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)removeFromSuperview;
- (void)removeFromSuperviewWithoutNeedingDisplay;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBoundsOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameRotation:(double)a0;
- (void)setAlphaValue:(double)a0;
- (id)superview;
- (void)addSubview:(id)a0 positioned:(long long)a1 relativeTo:(id)a2;
- (id)subviews;
- (void)setFrameCenterRotation:(double)a0;
- (struct CGPoint { double x0; double x1; })frameOrigin;
- (struct CGSize { double x0; double x1; })frameSize;
- (void)setBackgroundFilters:(id)a0;
- (void)setCompositingFilter:(id)a0;
- (void)setContentFilters:(id)a0;
- (void)setShadow:(id)a0;
- (BOOL)_useCoreAnimationFrameChanges;
- (BOOL)_useCoreAnimationFrameOriginChanges;
- (BOOL)_shouldDoAnimation;
- (BOOL)_shouldDoLayerAnimation;
- (BOOL)_isLayerBackedAtNotTheRootLayer;

@end
