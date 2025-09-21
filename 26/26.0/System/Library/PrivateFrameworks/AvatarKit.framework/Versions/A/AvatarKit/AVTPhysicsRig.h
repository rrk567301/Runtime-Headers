@class VFXNode, VFXPhysicsBody, VFXPhysicsConeTwistJoint;

@interface AVTPhysicsRig : NSObject {
    float _coneConstraintLength;
    float _coneConstraintSinusAngularLimit;
    VFXNode *_rig;
    VFXNode *_chainRoot;
    VFXPhysicsBody *_physicsBody;
    VFXPhysicsConeTwistJoint *_physicsBehavior;
    double _downForceFactor;
    void /* unknown type, empty encoding */ _restPosition_chainRoot;
    void /* unknown type, empty encoding */ _restGravityVector_chainRoot;
    struct { void /* unknown type, empty encoding */ columns[3]; } _coneConstraintBasis_chainParent;
    struct { void /* unknown type, empty encoding */ columns[4]; } _coneConstraintAnchorB;
}

- (void).cxx_destruct;

@end
