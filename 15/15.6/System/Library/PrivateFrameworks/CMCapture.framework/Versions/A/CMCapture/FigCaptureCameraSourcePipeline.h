@class NSMutableDictionary, FigCaptureSourceDepthDataFormat, BWMemoryPool, NSDictionary, FigCaptureCameraSourcePipelineConfiguration, NSMutableArray, BWSlaveFrameSynchronizerNode, BWFanOutNode, BWFigVideoCaptureDevice, NSString, BWMultiStreamCameraSourceNode, FigCaptureSourceVideoFormat, NSArray, BWNodeOutput;
@protocol BWCinematicFramingStatesProvider;

@interface FigCaptureCameraSourcePipeline : FigCaptureSourcePipeline <BWVISOverscanPredictionDelegate> {
    char _useCaptureOutputForPreview;
    int _deviceType;
    int _devicePosition;
    FigCaptureCameraSourcePipelineConfiguration *_configuration;
    NSMutableArray *_sourceNodes;
    BWMultiStreamCameraSourceNode *_sourceNode;
    BWMultiStreamCameraSourceNode *_telephotoSourceNode;
    BWMultiStreamCameraSourceNode *_superWideSourceNode;
    BWMultiStreamCameraSourceNode *_infraredSourceNode;
    BWNodeOutput *_sourceFormatReferenceOutput;
    NSMutableArray *_synchronizerNodes;
    BWSlaveFrameSynchronizerNode *_slaveFrameSynchronizerNode;
    NSArray *_previewFilters;
    NSMutableDictionary *_backgroundBlurNodesBySourceDeviceType;
    NSDictionary *_previewOutputsArrayBySourceDeviceType;
    NSDictionary *_stillImageOutputsByPortType;
    NSDictionary *_stillImageSensorRawOutputsByPortType;
    NSDictionary *_videoCaptureOutputsArrayBySourceDeviceType;
    NSDictionary *_numberOfFaceTrackingConnectionConfigurationsBySourceDeviceType;
    unsigned int _nextVideoCaptureOutputIndexBySourceDeviceType[21];
    unsigned int _nextPreviewOutputIndexBySourceDeviceType[21];
    NSArray *_pointCloudOutputs;
    unsigned int _nextPointCloudOutputIndex;
    NSDictionary *_detectedObjectsOutputsBySourceDeviceType;
    NSDictionary *_secureDetectedObjectsOutputsBySourceDeviceType;
    NSDictionary *_eyeReliefStatusOutputsBySourceDeviceType;
    NSDictionary *_trackedFacesOutputsBySourceDeviceType;
    NSDictionary *_faceIDReadinessOutputsBySourceDeviceType;
    NSDictionary *_motionToWakeOutputsBySourceDeviceType;
    NSDictionary *_visionDataOutputsBySourceDeviceType;
    BWNodeOutput *_depthOutput;
    NSMutableArray *_sourceDeviceTypesWithLightSourceMaskAndKeypointDescriptorDataEnabledOnVideoCaptureOutputs;
    NSDictionary *_semanticMasksOutputsBySourceDeviceType;
    BWFigVideoCaptureDevice *_captureDevice;
    struct OpaqueFigCaptureSource { } *_captureSource;
    FigCaptureSourceVideoFormat *_captureSourceVideoFormat;
    FigCaptureSourceDepthDataFormat *_captureSourceDepthDataFormat;
    char _stillImageOutputDerivesFromVideoCaptureOutput;
    BWMemoryPool *_memoryPool;
    char _overCapturePercentage;
    int _depthType;
    char _hardwareDepthFilteringEnabled;
    char _videoHDRImageStatisticsEnabled;
    int _maxFrameRateClientOverride;
    BWFanOutNode *_videoCaptureSplitterNode;
    char _enableSlaveFrameSynchronizerForZoomPIPOnly;
    char _powerOptimizedVISOverscanEnabled;
    NSMutableDictionary *_smartStyleLearningNodesBySourceDeviceType;
    NSMutableDictionary *_smartStyleMetadataSynchronizerNodesBySourceDeviceType;
    char _trueVideoCaptureEnabled;
    char _preLTMThumbnailEnabled;
    char _postColorProcessingThumbnailEnabled;
    int _stillImageOutputRetainedBufferCountOverride;
    id<BWCinematicFramingStatesProvider> _cinematicFramingCameraStatesProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)visOverscanPredictor:(id)a0 allowsReducedOverscan:(char)a1;

@end
