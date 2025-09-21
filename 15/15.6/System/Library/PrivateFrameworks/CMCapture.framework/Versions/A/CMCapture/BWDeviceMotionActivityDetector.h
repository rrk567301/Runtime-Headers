@class BWMotionSampleRingBuffer;

@interface BWDeviceMotionActivityDetector : NSObject {
    BWMotionSampleRingBuffer *_motionDataRingBuffer;
    struct OpaqueFigSimpleMutex { } *_ringMutex;
    char _stationary;
    char _newMotionDataAvailable;
    char _robustMethodEnabled;
    char _motionMetadataStatusChecked;
    char _directionalMotionDetectionEnabled;
    double _directionalMotionDetectionAngularRotationThreshold;
    struct { BOOL doingBiasEstimation; double timestamp; struct { double w; double x; double y; double z; } quaternion; } _directionalMotionDetectionReferenceDirection;
}

@property (readonly, nonatomic, getter=isStationary) char stationary;
@property (getter=isDirectionalMotionDetectionEnabled) char directionalMotionDetectionEnabled;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
