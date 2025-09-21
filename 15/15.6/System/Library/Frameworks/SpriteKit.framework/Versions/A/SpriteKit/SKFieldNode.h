@class SKTexture, SKRegion, PKPhysicsField;

@interface SKFieldNode : SKNode {
    PKPhysicsField *_field;
}

@property (retain, nonatomic) SKRegion *region;
@property (nonatomic) float strength;
@property (nonatomic) float falloff;
@property (nonatomic) float minimumRadius;
@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic, getter=isExclusive) char exclusive;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) void /* unknown type, empty encoding */ direction;
@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;
@property (retain, nonatomic) SKTexture *texture;

+ (char)supportsSecureCoding;
+ (id)magneticField;
+ (id)customFieldWithEvaluationBlock:(id /* block */)a0;
+ (id)dragField;
+ (id)electricField;
+ (id)noiseFieldWithSmoothness:(double)a0 animationSpeed:(double)a1;
+ (id)radialGravityField;
+ (id)springField;
+ (id)turbulenceFieldWithSmoothness:(double)a0 animationSpeed:(double)a1;
+ (id)vortexField;
+ (id)linearGravityFieldWithVector:(SEL)a0;
+ (id)velocityFieldWithVector:(SEL)a0;
+ (id)velocityFieldWithTexture:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)field;
- (char)isEqualToNode:(id)a0;
- (void)setPhysicsField:(id)a0;
- (id)_descriptionClassName;
- (id)initWithCoder:(id)a0 field:(id)a1;

@end
