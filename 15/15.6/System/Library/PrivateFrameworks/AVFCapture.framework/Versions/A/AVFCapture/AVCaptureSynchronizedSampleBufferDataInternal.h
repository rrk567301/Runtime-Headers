@interface AVCaptureSynchronizedSampleBufferDataInternal : NSObject {
    struct opaqueCMSampleBuffer { } *sampleBuffer;
    char sampleBufferWasDropped;
    long long droppedReason;
    char hasCorrespondingDepthData;
    char hasCorrespondingVisionData;
    int constituentDeviceCaptureID;
}

@end
