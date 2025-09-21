@class BWVideoDataOutputAnalyticsPayload, NSString, CMCaptureFrameSenderService, FigCaptureTrie, BWSceneStabilityMonitor, FigCaptureFrameCounter;
@protocol BWRemoteQueueSinkNodeDelegate;

@interface BWRemoteQueueSinkNode : BWSinkNode {
    char _mediaTypeIsVideo;
    char _mediaTypeIsPointCloud;
    char _mediaTypeIsAudio;
    struct localQueueOpaque { } *_localQueue;
    unsigned int _numberOfMediaBuffersLocallyEnqueued;
    unsigned int _numberOfMediaBuffersLocallyDequeued;
    int _clientVideoRetainedBufferCount;
    char _discardsLateSampleBuffers;
    char _attachPanoramaMetadata;
    char _attachInternalMetadata;
    char _sentDiagnosticMetadataForPanorama;
    char _disableFlatDictionaryVDOMetadata;
    struct OpaqueFigFlatDictionaryKeySpec { } *_makerNoteKeySpec;
    char _cameraSupportsFlash;
    char _attachDetectedObjectsInfo;
    char _removeCameraIntrinsicMatrixAttachment;
    struct opaqueCMFormatDescription { } *_cachedFormatDescription;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPTS;
    char _panoramaRequiresLTMLocking;
    BWSceneStabilityMonitor *_stabilityMonitor;
    FigCaptureTrie *_requestedBufferAttachmentsTrie;
    char _moveCMIOExensionMetadataToTransportLayerAttachment;
    CMCaptureFrameSenderService *_frameSender;
    char _frameSenderSupportEnabled;
    NSString *_clientApplicationID;
    long long _totalNumberOfFrames;
    long long _totalNumberOfFramesDropped;
    long long _totalNumberOfISPFramesDropped;
    FigCaptureFrameCounter *_frameCounter;
    BWVideoDataOutputAnalyticsPayload *_analyticsPayload;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstPTS;
    char _proresVideo;
}

@property (nonatomic) id<BWRemoteQueueSinkNodeDelegate> delegate;
@property (retain, nonatomic) NSString *captureDeviceUniqueID;

+ (void)initialize;

- (void)dealloc;
- (id)requestedBufferAttachmentsTrie;
- (void)setRequestedBufferAttachmentsTrie:(id)a0;
- (void)setSceneStabilityMetadataEnabled:(char)a0;
- (void)registerSurfacesFromSourcePool:(id)a0;
- (char)attachPanoramaMetadata;
- (char)cameraSupportsFlash;
- (int)clientVideoRetainedBufferCount;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (char)discardsLateSampleBuffers;
- (char)frameSenderSupportEnabled;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)initWithMediaType:(unsigned int)a0 clientAuditToken:(struct { unsigned int x0[8]; })a1 sinkID:(id)a2;
- (char)moveCMIOExensionMetadataToTransportLayerAttachment;
- (id)nodeSubType;
- (char)panoramaRequiresLTMLocking;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (char)removeCameraIntrinsicMatrixAttachment;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (char)sceneStabilityMetadataEnabled;
- (void)setAttachPanoramaMetadata:(char)a0;
- (void)setCameraSupportsFlash:(char)a0;
- (void)setClientVideoRetainedBufferCount:(int)a0;
- (void)setDiscardsLateSampleBuffers:(char)a0;
- (void)setFrameSenderSupportEnabled:(char)a0;
- (void)setMoveCMIOExensionMetadataToTransportLayerAttachment:(char)a0;
- (void)setPanoramaRequiresLTMLocking:(char)a0;
- (void)setRemoveCameraIntrinsicMatrixAttachment:(char)a0;
- (void)updateClientAuditToken:(struct { unsigned int x0[8]; })a0;

@end
