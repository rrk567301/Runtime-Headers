@class NSString, _HMCameraStreamControl, HMCameraStream, HMFUnfairLock;
@protocol HMCameraStreamControlDelegate;

@interface HMCameraStreamControl : HMCameraControl <_HMCameraStreamControlDelegate> {
    HMFUnfairLock *_lock;
}

@property (readonly) _HMCameraStreamControl *streamControl;
@property (weak, nonatomic) id<HMCameraStreamControlDelegate> delegate;
@property (readonly, nonatomic) unsigned long long streamState;
@property (readonly, nonatomic) HMCameraStream *cameraStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)startStreamWithPreferences:(id)a0;
- (void)stopStream;
- (void)cameraStreamControlDidStartStream:(id)a0;
- (void)cameraStreamControl:(id)a0 didStopStream:(id)a1;
- (id)initWithStreamControl:(id)a0;
- (void)startStream;

@end
