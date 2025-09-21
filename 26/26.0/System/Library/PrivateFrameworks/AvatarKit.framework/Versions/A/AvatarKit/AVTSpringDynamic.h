@class NSString, VFXNode, AVTMassSpringDamperSystem;

@interface AVTSpringDynamic : NSObject <AVTAvatarDynamic> {
    VFXNode *_dynamicNode;
    VFXNode *_dynamicPresentationNode;
    VFXNode *_dynamicParentPresentationNode;
    VFXNode *_targetPresentationNode;
    BOOL _hasMaxOffsets;
    void /* unknown type, empty encoding */ _maxOffsets;
    AVTMassSpringDamperSystem *_system;
    double _beginTime;
    void /* unknown type, empty encoding */ _beginVelocity;
    void /* unknown type, empty encoding */ _beginWorldPosition;
    void /* unknown type, empty encoding */ _endWorldPosition;
    double _lastEvaluationTime;
    void /* unknown type, empty encoding */ _lastWorldPosition;
    BOOL _shouldReset;
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
