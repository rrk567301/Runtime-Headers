@protocol PFCameraViewfinderSessionWatcherDelegate;

@interface PFCameraViewfinderSessionWatcher : NSObject {
    _Atomic BOOL _isCameraRunning;
}

@property (readonly) BOOL isCameraRunning;
@property (readonly, weak) id<PFCameraViewfinderSessionWatcherDelegate> delegate;

- (void)stopWatching;
- (id)initWithDispatchQueue:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)startWatching;

@end
