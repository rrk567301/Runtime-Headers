@class BWNodeError, BWNodeInput, NSMutableArray;

@interface BWDepthSynchronizerNode : BWNode {
    int _numEODMessagesReceived;
    _Atomic char _depthInputHasReceivedEOD;
    NSMutableArray *_imageBufferQueue;
    NSMutableArray *_depthBufferQueue;
    int _maxQueueDepth;
    int _lastEmittedFrameCaptureID;
    int _lastReceivedImageID;
    int _lastReceivedDepthID;
    unsigned long long _lastReceivedDepthErrorSettingsID;
    int _imageIDWrapAroundCounter;
    int _depthIDWrapAroundCounter;
    char _discardsDegradedDepthBuffers;
    char _separateDepthComponentsEnabled;
    char _streaming;
    BWNodeError *_errorForImageInput;
    BWNodeError *_errorForDepthInput;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastReceivedImagePTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastReceivedDepthPTS;
}

@property (readonly) BWNodeInput *imageInput;
@property (readonly) BWNodeInput *depthInput;
@property (nonatomic) char discardsDegradedDepthBuffers;
@property (nonatomic) char flushOnDepthEOD;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (id)initForStreaming:(char)a0 maxQueueDepth:(int)a1 separateDepthComponentsEnabled:(char)a2;
- (id)initForStreaming:(char)a0 separateDepthComponentsEnabled:(char)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
