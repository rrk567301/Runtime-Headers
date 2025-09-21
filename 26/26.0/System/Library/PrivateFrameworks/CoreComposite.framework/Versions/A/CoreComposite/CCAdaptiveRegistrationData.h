@interface CCAdaptiveRegistrationData : CCData {
    struct { void /* unknown type, empty encoding */ columns[4]; } _dispToContentRenderMatrix[2];
    struct { void /* unknown type, empty encoding */ columns[4]; } _renderToDisplayHomographyMatrix[2];
    float _nearToFarModeFactor[2];
    float _smoothingAlpha;
    long long _adaptiveRegistrationMode;
    float _modeChangeGazeDistanceThreshold;
    float _modeChangeHeadMotionThreshold;
    float _gazeDistance;
    BOOL _goingToNear;
    BOOL _goingToNearDidChange;
    long long _dominantEye;
    void /* unknown type, empty encoding */ _clampOrigin[2];
    void /* unknown type, empty encoding */ _clampNormal[2];
    float _povcClampingPlaneOffset;
    struct { void /* unknown type, empty encoding */ columns[4]; } _previousViewMatrix[2];
    float _totalMotion;
    float _gazeZoneVRMetrics[2][3];
    BOOL _transitionToFarForBottomLayer;
    float _cameraWeight[2];
    float _bottomLayerCameraWeightCache[2];
    BOOL _visitBottomLayer;
    float _motionAccumulationArray[20];
    int _motionAccumulationHead;
    float _previousCameraWeight;
    int _frameCountThresholdInWrongMode;
    float _nearCameraRegistrationError;
    float _farCameraRegistrationError;
    struct { void /* unknown type, empty encoding */ columns[4]; } currentHomographyMatrix[2][5];
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
