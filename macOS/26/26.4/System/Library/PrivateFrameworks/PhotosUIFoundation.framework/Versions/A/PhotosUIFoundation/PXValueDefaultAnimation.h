@interface PXValueDefaultAnimation : PXValueAnimation {
    double _initialValue;
    long long _curve;
}

- (double)currentValue;
- (double)approximateVelocity;
- (id)initWithDuration:(double)a0 currentMediaTime:(double)a1 spec:(struct PXValueAnimationSpec { long long x0; double x1; long long x2; double x3; double x4; double x5; double x6; float x7; float x8; float x9; float x10; })a2;
- (id)initWithFromValue:(double)a0 currentMediaTime:(double)a1 spec:(struct PXValueAnimationSpec { long long x0; double x1; long long x2; double x3; double x4; double x5; double x6; float x7; float x8; float x9; float x10; })a2;

@end
