@protocol MTLTexture, MTLBuffer;

@interface CCVisualizationData : CCData {
    BOOL _isDisabled;
    float _M2PAngularThreshold;
    float _EM2PAngularThreshold;
    struct CCEyeMotion2Photon { unsigned long long gazeTimestampNanos; unsigned long long initialGazeTimestampNanos; void /* unknown type, empty encoding */ initialGazeDirection; void /* unknown type, empty encoding */ gazeDirection; BOOL enabled; } _refoveationEM2P;
    struct CCEyeMotion2Photon { unsigned long long gazeTimestampNanos; unsigned long long initialGazeTimestampNanos; void /* unknown type, empty encoding */ initialGazeDirection; void /* unknown type, empty encoding */ gazeDirection; BOOL enabled; } _foveationEM2P;
    BOOL _showGazeMarker;
    BOOL _showCompositorMissFrameMarker;
    long long _compositorMissFrameType;
    BOOL _showClientsMissFrameMarker;
    BOOL _compositorMissedPreviousFrame;
    BOOL _clientsMissedCurrentFrame;
    BOOL _showEyetrackingRegionMarker;
    BOOL _showInputVRRGrid;
    BOOL _showOutputVRRGrid;
    BOOL _showPixelScaleDifferential;
    BOOL _showPotentialResamplingLoss;
    BOOL _showStencilBoundary;
    BOOL _showSystemCPUThrottlingMarker;
    BOOL _isSystemCPUThrottling;
    BOOL _isThermalMitigationThrottling;
    BOOL _isUserOutsideEyeBox;
    BOOL _showClientFrameRateDropMarker;
    BOOL _showGazeDropMarker;
    BOOL _showGravityRoll;
    BOOL _showGravityPitch;
    BOOL _showGeometricCenterCrosshair;
    float _innerEyeTrackedAngleInDegrees;
    float _outerEyeTrackedAngleInDegrees;
    float _percentageOfScreenForWhiteFlash;
    long long _gazeLossMode;
    BOOL _showZoomBorder;
    float _transitionWeight;
    unsigned long long _frameNumber;
    unsigned long long _targetVsyncID;
    void /* unknown type, empty encoding */ _cursorColor;
    void /* unknown type, empty encoding */ _gravityVector;
    void /* unknown type, empty encoding */ _fieldOfViewBoundaries;
    void /* unknown type, empty encoding */ _alignmentGuideGridLines;
    long long _visualizeTouchedPixelControl;
    struct { BOOL enabled; BOOL signOfLife; long long pointType; struct { BOOL enabled; struct { void /* unknown type, empty encoding */ columns[4]; } pointsToWorld; id<MTLBuffer> pointsBuffer; unsigned long long updates; id<MTLBuffer> modelViewProjectionBuffer; } points[5]; struct { BOOL enabled; struct { void /* unknown type, empty encoding */ columns[4]; } meshToWorld; id<MTLTexture> texture; id<MTLBuffer> vertexBuffer; unsigned long long updates; id<MTLBuffer> modelViewProjectionBuffer; } meshes[5]; } _debugLayer;
    BOOL _showCompositorFrameRate;
    long long _compositorFrameRate;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
