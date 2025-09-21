@class AVCaptureSession, NSString, NSTimer, NSMutableArray;

@interface IKDVGrabber : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {
    NSMutableArray *_listeners;
    struct __CVBuffer { } *_currentImage;
    AVCaptureSession *_session;
    char *_baseAddr;
    long long _length;
    struct CGImage { } *_imageRef;
    NSTimer *_timer;
    char _mirrorMode;
    char _locked;
    id _framesProvider;
    char _providerIsGrabbing;
    int _frameIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)captureDevice;
+ (char)hasCameraAccess;
+ (id)sharedDVGrabber;
+ (char)cameraIsBusy;
+ (char)canPotentiallyHaveCameraAccess;
+ (void)releaseSharedDVGrabber;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)stopCapture;
- (char)startCapture;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)QTKitErrorNotification:(id)a0;
- (void)captureDidOutputVideoFrame:(struct __CVBuffer { } *)a0;
- (id)currentFrameAsCIImage;
- (struct __CVBuffer { } *)currentFrameAsCVBuffer;
- (id)currentFrameAsNSImage;
- (id)framesProvider;
- (void)freeGrabberIfNeeded;
- (char)initializeGrabberIfNeeded;
- (char)isGrabbing;
- (char)mirrorMode;
- (void)notifyListenersForUpdate:(struct __CVBuffer { } *)a0;
- (void)setFramesProvider:(id)a0;
- (void)setMirrorMode:(char)a0;
- (void)videoProvider:(id)a0 didOutputVideoFrame:(struct __CVBuffer { } *)a1;

@end
