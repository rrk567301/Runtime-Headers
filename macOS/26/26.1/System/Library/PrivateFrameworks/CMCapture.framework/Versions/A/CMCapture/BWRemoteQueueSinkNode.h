@class NSString, NSArray, BWSceneStabilityMonitor, FigCaptureFrameCounter, BWVideoDataOutputAnalyticsPayload, CMCaptureFrameSenderService, FigCaptureTrie, BWMovieLevelMetadataForProResRaw, NSDictionary;
@protocol BWRemoteQueueSinkNodeDelegate;

@interface BWRemoteQueueSinkNode : BWSinkNode {
    BOOL _mediaTypeIsVideo;
    BOOL _mediaTypeIsPointCloud;
    BOOL _mediaTypeIsAudio;
    struct localQueueOpaque { } *_localQueue;
    unsigned int _numberOfMediaBuffersLocallyEnqueued;
    unsigned int _numberOfMediaBuffersLocallyDequeued;
    int _clientVideoRetainedBufferCount;
    BOOL _discardsLateSampleBuffers;
    BOOL _attachPanoramaMetadata;
    BOOL _attachInternalMetadata;
    BOOL _sentDiagnosticMetadataForPanorama;
    BOOL _disableFlatDictionaryVDOMetadata;
    struct OpaqueFigFlatDictionaryKeySpec { } *_makerNoteKeySpec;
    BOOL _cameraSupportsFlash;
    BOOL _attachDetectedObjectsInfo;
    BOOL _removeCameraIntrinsicMatrixAttachment;
    struct opaqueCMFormatDescription { } *_cachedFormatDescription;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPTS;
    BOOL _panoramaRequiresLTMLocking;
    BWSceneStabilityMonitor *_stabilityMonitor;
    FigCaptureTrie *_requestedBufferAttachmentsTrie;
    BOOL _moveCMIOExensionMetadataToTransportLayerAttachment;
    CMCaptureFrameSenderService *_frameSender;
    BOOL _frameSenderSupportEnabled;
    NSString *_clientApplicationID;
    long long _totalNumberOfFrames;
    long long _totalNumberOfFramesDropped;
    long long _totalNumberOfISPFramesDropped;
    FigCaptureFrameCounter *_frameCounter;
    BWVideoDataOutputAnalyticsPayload *_analyticsPayload;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstPTS;
    BOOL _proresVideo;
    BOOL _proresRawVideo;
    BWMovieLevelMetadataForProResRaw *_movieLevelMetadataForProResRaw;
    NSDictionary *_cameraInfoByPortType;
    struct OpaqueFigSimpleMutex { } *_stateMutex;
    BOOL _didNotifyFirstFrame;
    BOOL _videoHDRImageStatisticsEnabled;
}

@property (nonatomic) id<BWRemoteQueueSinkNodeDelegate> delegate;
@property (retain, nonatomic) NSString *captureDeviceUniqueID;
@property (readonly, nonatomic) NSArray *movieLevelMetadata;

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)updateClientAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)videoHDRImageStatisticsEnabled;
- (void)setVideoHDRImageStatisticsEnabled:(BOOL)a0;
- (id)nodeSubType;
- (void)setFrameSenderSupportEnabled:(BOOL)a0;
- (void)setClientVideoRetainedBufferCount:(int)a0;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (BOOL)removeCameraIntrinsicMatrixAttachment;
- (BOOL)moveCMIOExensionMetadataToTransportLayerAttachment;
- (void)setMoveCMIOExensionMetadataToTransportLayerAttachment:(BOOL)a0;
- (id)requestedBufferAttachmentsTrie;
- (BOOL)panoramaRequiresLTMLocking;
- (void)setAttachPanoramaMetadata:(BOOL)a0;
- (void)setPanoramaRequiresLTMLocking:(BOOL)a0;
- (void)dealloc;
- (BOOL)cameraSupportsFlash;
- (void)setCameraSupportsFlash:(BOOL)a0;
- (void)registerSurfacesFromSourcePool:(id)a0;
- (BOOL)frameSenderSupportEnabled;
- (void)setRequestedBufferAttachmentsTrie:(id)a0;
- (void)setSceneStabilityMetadataEnabled:(BOOL)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)setDiscardsLateSampleBuffers:(BOOL)a0;
- (int)clientVideoRetainedBufferCount;
- (BOOL)sceneStabilityMetadataEnabled;
- (void)setRemoveCameraIntrinsicMatrixAttachment:(BOOL)a0;
- (BOOL)attachPanoramaMetadata;
- (id)initWithMediaType:(unsigned int)a0 clientAuditToken:(struct { unsigned int x0[8]; })a1 sinkID:(id)a2 cameraInfoByPortType:(id)a3;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BOOL)discardsLateSampleBuffers;

@end
