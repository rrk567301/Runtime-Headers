@class FigCaptureSourceConfiguration, NSArray, NSString, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureVideoDataSinkPipelineConfiguration : NSObject {
    struct FigCaptureVideoTransform { char mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } _sourceVideoTransform;
    char _sourceHasAppliedAllZoom;
    int _videoStabilizationType;
    int _motionAttachmentsSource;
    char _faceTrackingEnabled;
    char _offlineVISMotionDataEnabled;
    NSArray *_portTypesWithGeometricDistortionCorrectionInVISEnabled;
    char _P3ToBT2020ConversionEnabled;
    int _sourceNodeColorSpaceProperties;
    int _maxLossyCompressionLevel;
    char _forcePixelTransfer;
    char _videoSTFEnabled;
    FigCaptureSourceConfiguration *_sourceConfiguration;
    int _sourceDeviceType;
    struct { int width; int height; } _visOutputDimensions;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    struct { unsigned int val[8]; } _clientAuditToken;
    char _previewStabilizationEnabled;
    char _cinematicFramingEnabled;
    int _centerStageFramingMode;
    char _deskCamEnabled;
    char _subjectSelectionEnabled;
    char _gazeSelectionEnabled;
    int _overheadCameraMode;
    char _temporalFilterEnabled;
    NSString *_clientApplicationID;
    char _smartStyleRenderingEnabled;
    char _manualCinematicFramingEnabled;
    int _smartStyleRenderingMethod;
    float _manualFramingZoomFactor;
    float _manualFramingPanningAngleX;
    float _manualFramingPanningAngleY;
}

- (void)dealloc;

@end
