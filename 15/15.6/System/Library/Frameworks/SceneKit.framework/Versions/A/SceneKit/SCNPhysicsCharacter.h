@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsCharacter : SCNPhysicsBehavior {
    struct { SCNPhysicsBody *characterBody; struct SCNVector3 { double x; double y; double z; } direction; double velocity; double jumpSpeed; } _definition;
    struct btCharacterControllerInterface { void /* function */ **x0; } *_characterController;
    void *_ghostObject;
    struct btOverlapFilterCallback { void /* function */ **x0; } *_filterCallback;
    struct btCapsuleShape { void /* function */ **x0; int x1; void *x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; float x6; int x7; } *_capsuleShape;
    SCNPhysicsWorld *_world;
}

@property (nonatomic) double velocity;
@property (nonatomic) double jumpSpeed;

- (void)dealloc;
- (void)_update;
- (void)setWalkingDirection:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (char)canJump;
- (void)_addToPhysicsWorld:(id)a0 definition:(struct { unsigned char x0[296]; })a1;
- (void)_copyDefinition:(struct { unsigned char x0[296]; } *)a0;
- (void)_handleCreateIfNeeded:(char)a0;
- (void)_willRemoveFromPhysicsWorld:(id)a0;
- (id)initWithCharacter:(id)a0;
- (void)jump;

@end
