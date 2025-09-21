@class NSString, FigDepthDataCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCapturePreviewSinkPipelineConfiguration : NSObject {
    NSString *_sinkID;
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoThumbnailConnectionConfiguration;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_previewTimeMachineConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sensitiveContentAnalyzerConnectionConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _sceneClassifierPipelineVersion;
    int _sourceColorSpaceProperties;
    BOOL _sourcePixelFormatIsFullRange;
    BOOL _sourceIsBravoDevice;
    BOOL _clientIsCameraOrDerivative;
    struct { unsigned int val[8]; } _clientAuditToken;
    BOOL _vitalityScoringEnabled;
    BOOL _remoteVideoPreview;
    BOOL _overCaptureEnabled;
    BOOL _singleCameraOverCaptureEnabled;
    BOOL _primaryCaptureRectModificationEnabled;
    double _videoStabilizationOverscan;
    BOOL _trueVideoCaptureEnabled;
    double _trueVideoCaptureAdditionalZoomFactor;
    BOOL _focusBlurMapForDepthFiltersEnabled;
    BOOL _smartCameraMotionDetectionEnabled;
    BOOL _generatesHistogram;
    BOOL _cinematicVideoEnabled;
    int _maxLossyCompressionLevel;
    BOOL _videoHDRImageStatisticsEnabled;
    BOOL _zoomPIPSingleStreamModeEnabled;
    float _zoomPIPMinimumUIZoomFactor;
    float _zoomPIPSlaveStreamingFrameRate;
    BOOL _preallocatePreviewStitcherOutputBufferPool;
    BOOL _previewStabilizationEnabled;
    BOOL _lowLatencyStabilizationEnabled;
    BOOL _pocketDetectionEnabled;
    BOOL _smartStyleRenderingEnabled;
    BOOL _parallelGraphRebuildEnabled;
    BOOL _ispFastSwitchEnabled;
    BOOL _rebuildingGraphForTrueVideoTransition;
    struct BWLensSmudgeDetectionConfiguration { BOOL lensSmudgeDetectionEnabled; struct { long long value; int timescale; unsigned int flags; long long epoch; } lensSmudgeDetectionInterval; } _lensSmudgeDetectionConfiguration;
    NSString *_clientApplicationID;
    BOOL _deferredPrepareEnabled;
    BOOL _coreMediaFaceTrackingEnabled;
    int _smartStyleRenderingMethod;
    FigVideoCaptureConnectionConfiguration *_previewSmartStyleCoefficientsTimeMachineConnectionConfiguration;
}

- (void)dealloc;

@end
