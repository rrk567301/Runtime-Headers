@class NSString, VFXWorld, _TtC3VFX16VFXMotionTracker;

@interface VFXTriggerManager : NSObject <VFXPhysicsContactDelegate, NSSecureCoding> {
    VFXWorld *_world;
    struct VFXTriggerEnabledTypes { unsigned char tapBegan : 1; unsigned char tapEnded : 1; unsigned char tapDragged : 1; unsigned char mouseMoved : 1; unsigned char tapCancelled : 1; unsigned char keyDown : 1; unsigned char keyUp : 1; unsigned char collisionBegan : 1; unsigned char collisionUpdate : 1; unsigned char collisionEnded : 1; unsigned char handTracking : 1; unsigned char gazeTracking : 1; unsigned char motionTracking : 1; unsigned char particleCollision : 1; } _enabledTypes;
    BOOL _handTrackerActive;
    BOOL _gazeTrackerActive;
    _TtC3VFX16VFXMotionTracker *_motionTracker;
    BOOL _isHandTrackingScriptPresent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct VFXTriggerEnabledTypes { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; } *enabledTypes;
@property (nonatomic) BOOL isHandTrackingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)world;
- (void)physicsWorld:(id)a0 didBeginContact:(id)a1;
- (void)physicsWorld:(id)a0 didEndContact:(id)a1;
- (void)physicsWorld:(id)a0 didUpdateContact:(id)a1;
- (BOOL)isPresentation;
- (void)setWorld:(id)a0;
- (void)_updateActiveTriggerTypesWithMoveNeeded:(BOOL)a0;
- (void)enableTriggerTypes:(id)a0;
- (void)setHandTrackingEnabled:(BOOL)a0;
- (void)triggerEvent:(id)a0 fromView:(id)a1;
- (void)triggerType:(id)a0 event:(id)a1 fromView:(id)a2;

@end
