@class BWNodeInput, NSDictionary, NSMutableSet, BWNodeOutput, NSObject;
@protocol OS_dispatch_queue;

@interface BWTemporalFilterNode : BWNode {
    int _maxLossyCompressionLevel;
    BWNodeInput *_videoInput;
    struct OpaqueVTTemporalFilterSession { } *_mctfSession;
    struct opaqueCMSimpleQueue { } *_inputSampleBufferQueue;
    BWNodeOutput *_videoOutput;
    char _dumpInputVideo;
    char _dumpOutputVideo;
    char _bypassTemporalFilter;
    char _enforceTemporalFilter;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    struct { unsigned long long framesReceivedCount; unsigned long long framesWithMLVNRAppliedCount; unsigned long long framesWithMCTFAppliedCount; unsigned long long framesDispatchedCount; unsigned long long framesDroppedCount; BOOL lastFrameWasMLVNRAppliedFrame; } _frameStats;
    char _logMLVNRMetadata;
    char _mctfUsesMLVNRPixelBufferAttachments;
    NSDictionary *_filterSessionConfiguration;
    NSObject<OS_dispatch_queue> *_sampleBufferSerialQueue;
    NSMutableSet *_enqueueFailedInputSbufPTSValuesList;
    char _didReachEODForVideoInput;
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
