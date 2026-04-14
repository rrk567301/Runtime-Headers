@class BWMotionSampleRingBuffer;

@interface BWDeviceMotionActivityDetector : NSObject {
    BWMotionSampleRingBuffer *_motionDataRingBuffer;
    struct OpaqueFigSimpleMutex { } *_ringMutex;
    BOOL _stationary;
    BOOL _newMotionDataAvailable;
    BOOL _robustMethodEnabled;
    BOOL _motionMetadataStatusChecked;
}

@property (readonly, nonatomic, getter=isStationary) BOOL stationary;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_detectIfStationary;

@end
