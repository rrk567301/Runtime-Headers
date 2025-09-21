@interface BWStillImageTimeMachine : NSObject {
    struct OpaqueFigSimpleMutex { } *_timeMachineMutex;
    struct opaqueCMSampleBuffer **_frames;
    char _suspended;
}

@property (readonly, nonatomic) int capacity;

+ (void)initialize;
+ (char)afComplete:(struct opaqueCMSampleBuffer { } *)a0;

- (void)dealloc;
- (void)drain;
- (id)initWithCapacity:(int)a0;
- (void)resume;
- (void)suspendAndDrain;
- (struct opaqueCMSampleBuffer { } *)copyBestFrame;
- (int)insertFrame:(struct opaqueCMSampleBuffer { } *)a0;

@end
