@class AVCaptureSynchronizedSampleBufferDataInternal_Tundra;

@interface AVCaptureSynchronizedSampleBufferData_Tundra : AVCaptureSynchronizedData_Tundra {
    AVCaptureSynchronizedSampleBufferDataInternal_Tundra *_internal;
}

@property (readonly) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (readonly) char sampleBufferWasDropped;
@property (readonly) long long droppedReason;

- (void)dealloc;

@end
