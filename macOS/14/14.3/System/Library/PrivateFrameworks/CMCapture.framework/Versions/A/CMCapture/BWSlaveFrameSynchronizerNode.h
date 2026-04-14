@class NSArray, NSMutableArray;

@interface BWSlaveFrameSynchronizerNode : BWNode {
    int _numEODMessagesReceived;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    struct opaqueCMSimpleQueue **_inputSampleBufferQueues;
    int _numBufferedFrames;
    BOOL _slaveStreamHasStarted;
    int _numSlaveFramesReceived;
    int _numSlaveFramesToSkip;
    BOOL _startEmittingMasterFramesBeforeSlaveStreamStarts;
    NSMutableArray *_droppedFramePTSs;
    int _mostRecentMasterInputIndex;
    NSArray *_syncSlaveForMasterPortTypes;
    BOOL _differentInputFormatsSupported;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (id)initWithDepthEnabled:(BOOL)a0 numberOfInputs:(int)a1 syncSlaveForMasterPortTypes:(id)a2 separateDepthComponentsEnabled:(BOOL)a3;
- (id)initWithDepthEnabled:(BOOL)a0 numberOfInputs:(int)a1 syncSlaveForMasterPortTypes:(id)a2 separateDepthComponentsEnabled:(BOOL)a3 differentInputFormatsSupported:(BOOL)a4 bufferSize:(int)a5 numberOfSlaveFramesToSkip:(int)a6 startEmittingMasterFramesBeforeSlaveStreamStarts:(BOOL)a7;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
