@class FigDepthDataCaptureConnectionConfiguration, NSString, NSArray, NSDictionary, FigMetadataItemCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, FigAudioCaptureConnectionConfiguration, FigCaptureSourceConfiguration;

@interface FigCaptureMovieFileSinkPipelineConfiguration : NSObject {
    FigCaptureSourceConfiguration *_primaryCameraConfiguration;
    FigVideoCaptureConnectionConfiguration *_primaryVideoConnectionConfiguration;
    NSArray *_videoConnectionConfigurations;
    FigAudioCaptureConnectionConfiguration *_audioConnectionConfiguration;
    FigMetadataItemCaptureConnectionConfiguration *_cameraDebugInfoMetadataConnectionConfiguration;
    NSArray *_detectedObjectMetadataConnectionConfigurations;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    struct { int width; int height; } _depthOutputDimensions;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    struct FigCaptureVideoTransform { BOOL mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } _videoSourceCaptureTransform;
    NSDictionary *_visConfigurationsByConnectionID;
    BOOL _boxedMetadataPostVISEnabled;
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _smartCameraPipelineVersion;
    BOOL _offlineVISEnabled;
    NSArray *_portTypesWithGeometricDistortionCorrectionInVISEnabled;
    BOOL _vitalityScoringEnabled;
    BOOL _captureDeviceHasOverCaptureEnabled;
    BOOL _overCaptureEnabled;
    BOOL _frameReconstructionEnabled;
    BOOL _semanticStyleRenderingEnabled;
    BOOL _P3ToBT2020ConversionEnabled;
    int _maxLossyCompressionLevel;
    BOOL _videoSTFEnabled;
    BOOL _videoGreenGhostMitigationEnabled;
    BOOL _ispFastSwitchEnabled;
    BOOL _trueVideoCaptureEnabled;
    BOOL _cinematicAudioEnabled;
    NSString *_clientApplicationID;
    long long _maximumAllowedInFlightCompressedBytes;
    BOOL _lightSourceMaskAndKeypointDescriptorDataEnabled;
    struct BWLensSmudgeDetectionConfiguration { BOOL lensSmudgeDetectionEnabled; struct { long long value; int timescale; unsigned int flags; long long epoch; } lensSmudgeDetectionInterval; } _lensSmudgeDetectionConfiguration;
    BOOL _depthDataDeliveryEnabled;
    BOOL _lowResImageUsedByVideoEncoderEnabled;
    BOOL _smartStyleRenderingEnabled;
    BOOL _smartStyleReversibilityEnabled;
    BOOL _videoGreenGhostOfflineMetadataEnabled;
    BOOL _videoGreenGhostOfflineLightSourceMaskEnabled;
    BOOL _lowLatencyStabilizationEnabled;
    int _smartStyleRenderingMethod;
}

- (void)dealloc;

@end
