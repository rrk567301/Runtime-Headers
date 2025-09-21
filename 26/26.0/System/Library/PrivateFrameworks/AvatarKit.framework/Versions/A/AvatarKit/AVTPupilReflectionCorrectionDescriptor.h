@class VFXMorpher, VFXMaterial;

@interface AVTPupilReflectionCorrectionDescriptor : NSObject {
    VFXMorpher *_readMorpher;
    VFXMaterial *_leftEyeMaterial;
    VFXMaterial *_rightEyeMaterial;
    long long _leftEyeTargetIndex;
    long long _rightEyeTargetIndex;
}

- (void).cxx_destruct;

@end
