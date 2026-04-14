@class BWNodeInput, BWNodeOutput;

@interface BWTemporalFilterNode : BWNode {
    int _maxLossyCompressionLevel;
    BWNodeInput *_videoInput;
    struct OpaqueVTTemporalFilterSession { } *_mctfSession;
    struct opaqueCMSimpleQueue { } *_inputSampleBufferQueue;
    BWNodeOutput *_videoOutput;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _inputSampleBufferQueueLock;
    BOOL _dumpInputVideo;
    BOOL _dumpOutputVideo;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
