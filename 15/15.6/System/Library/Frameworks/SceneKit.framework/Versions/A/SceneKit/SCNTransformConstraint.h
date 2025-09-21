@interface SCNTransformConstraint : SCNConstraint

+ (char)supportsSecureCoding;
+ (id)orientationConstraintInWorldSpace:(char)a0 withBlock:(id /* block */)a1;
+ (id)positionConstraintInWorldSpace:(char)a0 withBlock:(id /* block */)a1;
+ (id)transformConstraintInWorldSpace:(char)a0 withBlock:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initTransformInWorld:(char)a0 withBlock:(id /* block */)a1;
- (id)initOrientationInWorldSpace:(char)a0 withBlock:(id /* block */)a1;
- (id)initPositionInWorld:(char)a0 withBlock:(id /* block */)a1;

@end
