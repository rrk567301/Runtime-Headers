@class FigDepthDataCaptureConnectionConfiguration, NSString, FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCapturePreviewSinkPipelineConfiguration : NSObject {
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoThumbnailConnectionConfiguration;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_previewTimeMachineConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _sceneClassifierPipelineVersion;
    int _sourceColorSpaceProperties;
    char _sourcePixelFormatIsFullRange;
    char _sourceIsBravoDevice;
    char _clientIsCameraOrDerivative;
    struct { unsigned int val[8]; } _clientAuditToken;
    char _vitalityScoringEnabled;
    char _deferredPrepareEnabled;
    char _remoteVideoPreview;
    char _overCaptureEnabled;
    char _primaryCaptureRectModificationEnabled;
    double _videoStabilizationOverscan;
    char _trueVideoCaptureEnabled;
    double _trueVideoCaptureAdditionalZoomFactor;
    char _focusBlurMapForDepthFiltersEnabled;
    char _depthFromMonocularNetworkEnabled;
    char _smartCameraMotionDetectionEnabled;
    char _generatesHistogram;
    char _cinematicVideoEnabled;
    int _maxLossyCompressionLevel;
    char _videoHDRImageStatisticsEnabled;
    char _zoomPIPSingleStreamModeEnabled;
    float _zoomPIPMinimumUIZoomFactor;
    float _zoomPIPSlaveStreamingFrameRate;
    char _preallocatePreviewStitcherOutputBufferPool;
    char _previewStabilizationEnabled;
    char _smartStyleRenderingEnabled;
    char _parallelGraphRebuildEnabled;
    char _ispFastSwitchEnabled;
    char _rebuildingGraphForTrueVideoTransition;
    NSString *_clientApplicationID;
    char _coreMediaFaceTrackingEnabled;
    int _smartStyleRenderingMethod;
    FigVideoCaptureConnectionConfiguration *_previewSmartStyleCoefficientsTimeMachineConnectionConfiguration;
}

- (void)dealloc;

@end
