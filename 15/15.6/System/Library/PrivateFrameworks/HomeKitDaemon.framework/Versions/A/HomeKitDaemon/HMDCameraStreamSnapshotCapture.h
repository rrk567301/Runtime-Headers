@class HMFTimer, NSString, HMDVideoStreamInterface, NSObject, HMDCameraStreamSessionID;
@protocol OS_dispatch_queue, HMDCameraStreamSnapshotCaptureDelegate;

@interface HMDCameraStreamSnapshotCapture : HMFObject <HMDVideoStreamLastDecodedFrameDelegate, HMFTimerDelegate, HMFLogging> {
    char _capturingLastFrame;
    char _capturingCurrentFrame;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMDCameraStreamSnapshotCaptureDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDCameraStreamSessionID *_streamSessionID;
    HMFTimer *_captureCurrentFrameTimer;
}

@property (readonly, nonatomic) HMDVideoStreamInterface *videoStreamInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)captureCurrentFrame;
- (void)captureLastFrame;
- (id)initWithWorkQueue:(id)a0 videoStreamInterface:(id)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (void)videoStream:(id)a0 didGetLastDecodedFrame:(id)a1;

@end
