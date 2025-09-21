@interface PXValueAnimation : NSObject

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) struct PXValueAnimationSpec { long long type; double duration; long long curve; double epsilon; double stiffness; double dampingRatio; double initialVelocity; float controlPoint1x; float controlPoint1y; float controlPoint2x; float controlPoint2y; } spec;
@property (readonly, nonatomic) double currentValue;
@property (readonly, nonatomic) double approximateVelocity;
@property (readonly, nonatomic) BOOL completed;
@property (nonatomic) double startTime;
@property (nonatomic) double currentMediaTime;

- (double)elapsedTime;
- (double)remainingTime;
- (id)init;
- (id)description;
- (id)initWithDuration:(double)a0 currentMediaTime:(double)a1 spec:(struct PXValueAnimationSpec { long long x0; double x1; long long x2; double x3; double x4; double x5; double x6; float x7; float x8; float x9; float x10; })a2;
- (double)valueForProgress:(double)a0;

@end
