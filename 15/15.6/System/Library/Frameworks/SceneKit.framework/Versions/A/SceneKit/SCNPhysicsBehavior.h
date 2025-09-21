@interface SCNPhysicsBehavior : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

+ (id)SCNUID_creationOptions;
+ (id)SCNUID_instanciateWithOption:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bodyA;
- (id)bodyB;
- (char)hasReferenceToPhysicsBody:(id)a0;

@end
