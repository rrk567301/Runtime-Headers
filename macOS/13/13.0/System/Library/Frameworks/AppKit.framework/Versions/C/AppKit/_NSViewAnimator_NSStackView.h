@interface _NSViewAnimator_NSStackView : _NSViewAnimator

- (void)setEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setAlignment:(long long)a0;
- (void)setOrientation:(long long)a0;
- (void)removeView:(id)a0;
- (void)addArrangedSubview:(id)a0;
- (void)removeArrangedSubview:(id)a0;
- (void)insertArrangedSubview:(id)a0 atIndex:(long long)a1;
- (void)setSpacing:(double)a0;
- (void)setDistribution:(long long)a0;
- (void)setCustomSpacing:(double)a0 afterView:(id)a1;
- (void)insertView:(id)a0 atIndex:(unsigned long long)a1 inGravity:(long long)a2;
- (void)setVisibilityPriority:(float)a0 forView:(id)a1;
- (id)stackViewTarget;
- (void)addView:(id)a0 withGravity:(long long)a1;

@end
