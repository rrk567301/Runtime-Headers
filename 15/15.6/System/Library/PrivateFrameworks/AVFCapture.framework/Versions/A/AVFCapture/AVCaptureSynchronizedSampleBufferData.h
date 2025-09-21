@class AVCaptureSynchronizedSampleBufferDataInternal;

@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedSampleBufferDataInternal *_internal;
}

@property (readonly) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (readonly) char sampleBufferWasDropped;
@property (readonly) long long droppedReason;

+ (void)initialize;

- (void)dealloc;
- (id)_initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 sampleBufferWasDropped:(char)a1;
- (int)constituentDeviceCaptureID;
- (char)hasCorrespondingDepthData;
- (char)hasCorrespondingVisionData;

@end
