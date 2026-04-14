@class UVCNativeFrame;

@interface UVCFrameProcessorNative : UVCFrameProcessorBase {
    id _pixelBufferPool;
    unsigned char _previousFID;
    UVCNativeFrame *_currentFrame;
    unsigned long long _completeFrames;
    unsigned long long _packetsReceived;
    unsigned long long _packetsDropped;
    unsigned long long _fidTracker[2];
    unsigned long long _packetDropType[5];
}

- (void).cxx_destruct;
- (id)serialize;
- (id)initWithAttributes:(id)a0 destination:(id)a1 queue:(id)a2;
- (void)dispatchPreviousFrame:(id)a0 args:(id)a1;
- (id)getAdjustedPts:(struct VDCPayloadTimeInfo { unsigned int x0; unsigned int x1; unsigned short x2; } *)a0 clockFrequency:(unsigned long long)a1;
- (void)updateTimingInfo:(id)a0 args:(id)a1;
- (void)processStreamData:(id)a0 error:(id)a1 args:(id)a2;

@end
