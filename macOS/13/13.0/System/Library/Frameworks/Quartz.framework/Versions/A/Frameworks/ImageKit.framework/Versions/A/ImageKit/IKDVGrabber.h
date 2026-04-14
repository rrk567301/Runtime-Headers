@class AVCaptureSession, NSString, NSTimer, NSMutableArray;

@interface IKDVGrabber : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {
    NSMutableArray *_listeners;
    struct __CVBuffer { } *_currentImage;
    AVCaptureSession *_session;
    char *_baseAddr;
    long long _length;
    struct CGImage { } *_imageRef;
    NSTimer *_timer;
    BOOL _mirrorMode;
    BOOL _locked;
    id _framesProvider;
    BOOL _providerIsGrabbing;
    int _frameIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)captureDevice;
+ (id)sharedDVGrabber;
+ (void)releaseSharedDVGrabber;
+ (BOOL)canPotentiallyHaveCameraAccess;
+ (BOOL)hasCameraAccess;
+ (BOOL)cameraIsBusy;

- (void)dealloc;
- (id)init;
- (void)finalize;
- (void)stopCapture;
- (BOOL)startCapture;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)notifyListenersForUpdate:(struct __CVBuffer { } *)a0;
- (void)QTKitErrorNotification:(id)a0;
- (void)freeGrabberIfNeeded;
- (BOOL)initializeGrabberIfNeeded;
- (id)framesProvider;
- (void)setFramesProvider:(id)a0;
- (void)videoProvider:(id)a0 didOutputVideoFrame:(struct __CVBuffer { } *)a1;
- (struct __CVBuffer { } *)currentFrameAsCVBuffer;
- (id)currentFrameAsCIImage;
- (id)currentFrameAsNSImage;
- (void)captureDidOutputVideoFrame:(struct __CVBuffer { } *)a0;
- (BOOL)isGrabbing;
- (BOOL)mirrorMode;
- (void)setMirrorMode:(BOOL)a0;

@end
