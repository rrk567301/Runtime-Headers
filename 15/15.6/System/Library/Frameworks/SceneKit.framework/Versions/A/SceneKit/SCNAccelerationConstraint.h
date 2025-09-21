@interface SCNAccelerationConstraint : SCNConstraint {
    float _maximumLinearVelocity;
    float _maximumLinearAcceleration;
    float _decelerationDistance;
    float _damping;
}

@property (nonatomic) double maximumLinearAcceleration;
@property (nonatomic) double maximumLinearVelocity;
@property (nonatomic) double decelerationDistance;
@property (nonatomic) double damping;

+ (char)supportsSecureCoding;
+ (id)accelerationConstraint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
