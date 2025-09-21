@class FigDepthDataCaptureConnectionConfiguration, NSString, NSArray, NSObject, FigMetadataItemCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, FigAudioCaptureConnectionConfiguration, FigCaptureSourceConfiguration;
@protocol OS_dispatch_semaphore;

@interface FigCaptureMovieFileSinkPipelineConfiguration : NSObject {
    FigCaptureSourceConfiguration *_cameraConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoConnectionConfiguration;
    FigAudioCaptureConnectionConfiguration *_audioConnectionConfiguration;
    FigMetadataItemCaptureConnectionConfiguration *_cameraDebugInfoMetadataConnectionConfiguration;
    NSArray *_detectedObjectMetadataConnectionConfigurations;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    struct { int width; int height; } _depthOutputDimensions;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    struct FigCaptureVideoTransform { char mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } _videoSourceCaptureTransform;
    struct { int width; int height; } _visOutputDimensions;
    int _videoStabilizationType;
    char _boxedMetadataPostVISEnabled;
    int _motionAttachmentsSource;
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _smartCameraPipelineVersion;
    char _offlineVISEnabled;
    NSArray *_portTypesWithGeometricDistortionCorrectionInVISEnabled;
    char _vitalityScoringEnabled;
    char _captureDeviceHasOverCaptureEnabled;
    char _overCaptureEnabled;
    char _frameReconstructionEnabled;
    char _semanticStyleRenderingEnabled;
    char _P3ToBT2020ConversionEnabled;
    int _maxLossyCompressionLevel;
    char _videoSTFEnabled;
    char _videoGreenGhostMitigationEnabled;
    char _ispFastSwitchEnabled;
    char _trueVideoCaptureEnabled;
    NSObject<OS_dispatch_semaphore> *_visProcessingSemaphore;
    char _cinematicAudioEnabled;
    float _videoStabilizationOverscanOverride;
    int _videoStabilizationStrength;
    NSString *_clientApplicationID;
    long long _maximumAllowedInFlightCompressedBytes;
    char _lightSourceMaskAndKeypointDescriptorDataEnabled;
    char _depthDataDeliveryEnabled;
    char _lowResImageUsedByVideoEncoderEnabled;
    char _smartStyleRenderingEnabled;
    char _smartStyleReversibilityEnabled;
    int _smartStyleRenderingMethod;
}

- (void)dealloc;

@end
