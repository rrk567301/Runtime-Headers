@class VFXMorpher, VFXNode;

@interface AVTEyeSkinningDescriptor : NSObject {
    VFXMorpher *_readMorpher;
    VFXNode *_leftEyeJoint;
    VFXNode *_rightEyeJoint;
    long long _leftEyeLookDownTargetIndex;
    long long _leftEyeLookInTargetIndex;
    long long _leftEyeLookOutTargetIndex;
    long long _leftEyeLookUpTargetIndex;
    long long _rightEyeLookDownTargetIndex;
    long long _rightEyeLookInTargetIndex;
    long long _rightEyeLookOutTargetIndex;
    long long _rightEyeLookUpTargetIndex;
}

- (void).cxx_destruct;

@end
