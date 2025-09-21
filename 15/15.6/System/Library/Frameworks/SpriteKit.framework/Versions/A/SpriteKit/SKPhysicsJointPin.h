@interface SKPhysicsJointPin : SKPhysicsJoint

@property (readonly) struct CGPoint { double x; double y; } anchor;
@property (nonatomic) char shouldEnableLimits;
@property (nonatomic) double lowerAngleLimit;
@property (nonatomic) double upperAngleLimit;
@property (nonatomic) double frictionTorque;
@property (nonatomic) double rotationSpeed;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)supportsSecureCoding;
+ (id)jointWithBodyA:(id)a0 bodyB:(id)a1 anchor:(struct CGPoint { double x0; double x1; })a2;

@end
