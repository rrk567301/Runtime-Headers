@interface GKAgent3D : GKAgent

@property (nonatomic) void /* unknown type, empty encoding */ position;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ velocity;
@property (nonatomic) char rightHanded;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } rotation;

+ (char)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applyBrakingForce:(float)a0 deltaTime:(double)a1;
- (void)applySteeringForce:(SEL)a0 deltaTime:(double)a1;
- (void)updateWithDeltaTime:(double)a0;

@end
