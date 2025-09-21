@class NSMutableArray;

@interface BWFunnelNode : BWNode {
    char _holdMessagesUntilAllInputsAreLive;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_inputsForQueuedMessages;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    char _running;
}

+ (void)initialize;

- (void)dealloc;
- (void)_handleMessage:(id)a0 fromInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (id)initWithNumberOfInputs:(int)a0 mediaType:(unsigned int)a1;
- (id)initWithNumberOfInputs:(int)a0 mediaType:(unsigned int)a1 holdMessages:(char)a2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
