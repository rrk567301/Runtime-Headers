@class NSString, VFXNode, VFXMorpher;

@interface AVTPhysicalizedMorpherDynamic : NSObject <AVTAvatarDynamic> {
    float _simulationFactor;
    VFXNode *_referenceNode;
    VFXNode *_drivingNode;
    VFXMorpher *_writeMorpher;
    unsigned long long _forwardMorphTargetIndex;
    unsigned long long _backwardMorphTargetIndex;
    unsigned long long _leftwardMorphTargetIndex;
    unsigned long long _rightwardMorphTargetIndex;
    unsigned long long _upwardMorphTargetIndex;
    unsigned long long _downwardMorphTargetIndex;
    VFXNode *_extraSimulationFactorReadMorpherNode;
    unsigned long long _extraSimulationFactorTargetIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)affectsNode:(id)a0;
- (void)evaluateAtTime:(double)a0 physicsController:(id)a1;
- (void)resetTarget;

@end
