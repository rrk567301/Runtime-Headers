@class BWStillImageSettings, BWPixelBufferPool, BWNodeError, FigCaptureMovieFileRecordingSettings, BWNodeOutput, BWPairedBufferSynchronizer;

@interface BWMultiCamClientCompositingNode : BWNode {
    int _indexOfInputProvidingOutputSampleBuffer;
    short _compositingStrategy;
    BOOL _gainMapSupported;
    id /* block */ _clientCompositingCallback;
    BWStillImageSettings *_stillImageSettings;
    FigCaptureMovieFileRecordingSettings *_movieSettings;
    BWPairedBufferSynchronizer *_bufferSynchronizer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stillsInputLock;
    struct opaqueCMSampleBuffer { } *_primaryStillSampleBuffer;
    struct opaqueCMSampleBuffer { } *_secondaryStillSampleBuffer;
    BWNodeError *_receivedNodeError;
    BWPixelBufferPool *_outputPixelBufferPool;
    struct opaqueCMFormatDescription { } *_outputSampleBufferFormatDescription;
    BWPixelBufferPool *_outputGainMapPixelBufferPool;
    struct opaqueCMFormatDescription { } *_outputGainMapSampleBufferFormatDescription;
    struct opaqueCMFormatDescription { } *_compositionPictureInPictureRectMetadataFormatDescription;
    unsigned int _compositionPictureInPictureRectMetadataLocalID;
    float _thresholdToRemovePrimaryBufferDetectedFacesObscuredByPIP;
}

@property (readonly) BWNodeOutput *compositionPictureInPictureRectMetadataOutput;

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)handleStillImagePrewarmWithSettings:(id)a0 resourceConfig:(id)a1 forInput:(id)a2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (id)initWithIndexOfInputProvidingOutputSampleBuffer:(unsigned int)a0 compositingStrategy:(short)a1 gainMapSupported:(BOOL)a2 clientCompositingCallback:(id /* block */)a3;

@end
