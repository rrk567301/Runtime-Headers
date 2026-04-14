@interface ShazamEvents.LiveMusicEventFetcher : NSObject <SHWorker> {
    void /* unknown type, empty encoding */ _isRunning;
    void /* unknown type, empty encoding */ urlSession;
    void /* unknown type, empty encoding */ $__lazy_storage_$_encoder;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ workerDelegate;
@property (nonatomic) BOOL isRunning;
@property (nonatomic, readonly) BOOL managesRecordingSession;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (double)timeRequiredToPerformWork;

@end
