@class NSArray, NSMutableArray;

@interface BWSlaveFrameSynchronizerNode : BWNode {
    int _numEODMessagesReceived;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    struct opaqueCMSimpleQueue **_inputSampleBufferQueues;
    int _numBufferedFrames;
    char _slaveStreamHasStarted;
    int _numSlaveFramesReceived;
    int _numSlaveFramesToSkip;
    char _startEmittingMasterFramesBeforeSlaveStreamStarts;
    NSMutableArray *_droppedFramePTSs;
    int _mostRecentMasterInputIndex;
    NSArray *_syncSlaveForMasterPortTypes;
    char _differentInputFormatsSupported;
}

@property (nonatomic) char emitsUnsynchronizedFramesWhileStopping;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (id)initWithDepthEnabled:(char)a0 numberOfInputs:(int)a1 syncSlaveForMasterPortTypes:(id)a2 separateDepthComponentsEnabled:(char)a3 preLTMThumbnailEnabled:(char)a4 postColorProcessingThumbnailEnabled:(char)a5 numberOfSecondaryFramesToSkip:(int)a6;
- (id)initWithDepthEnabled:(char)a0 numberOfInputs:(int)a1 syncSlaveForMasterPortTypes:(id)a2 separateDepthComponentsEnabled:(char)a3 preLTMThumbnailEnabledInputs:(id)a4 postColorProcessingThumbnailEnabledInputs:(id)a5 differentInputFormatsSupported:(char)a6 bufferSize:(int)a7 numberOfSlaveFramesToSkip:(int)a8 startEmittingMasterFramesBeforeSlaveStreamStarts:(char)a9;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
