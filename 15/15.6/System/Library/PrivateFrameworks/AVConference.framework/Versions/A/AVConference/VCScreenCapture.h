@class NSString, NSMutableDictionary, NSObject;
@protocol VCScreenCaptureSource;

@interface VCScreenCapture : VCVideoCapture <VCScreenCaptureSourceDelegate, VCVideoSource> {
    NSMutableDictionary *_options;
    NSObject<VCScreenCaptureSource> *_screenCapture;
    long long _captureSourceID;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _screenCaptureLock;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_clearScreenProc;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _clearScreenChanged;
    struct opaqueCMSampleBuffer { } *_blackFrame;
    char _isPreviewing;
    char _isCapturing;
    char _capturePaused;
    int _captureFramerate;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _clearScreenLock;
    char _shouldSendBlackFramesOnClearScreen;
    char _isPreviousCompleteFrameBlack;
    struct opaqueCMSampleBuffer { } *_previousCompleteFrame;
    unsigned int _previousCompleteFrameTransform;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previousFrameTime;
    char _shouldClearScreen;
    struct __CVPixelBufferPool { } *_resizeBufferPool;
    struct OpaqueVTPixelTransferSession { } *_resizeTransferSession;
    struct OpaqueVTPixelRotationSession { } *_rotationSession;
    struct __CVPixelBufferPool { } *_rotationBufferPool;
    int _captureWidth;
    int _captureHeight;
    unsigned int _currentTransform;
    char _enableIdleFrameTimeAdjustments;
    int _frameCount;
    char _receivedFirstFrame;
    int _resolutionScaling;
    char _shouldResize;
    char _shouldResizeInitialized;
    char _shouldValidateFrameTimingAfterIdle;
}

@property (readonly) char isClearScreenThreadRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)setFrameRate:(int)a0;
- (int)stop:(char)a0;
- (int)startPreview;
- (char)isPreviewRunning;
- (int)_startCapture;
- (char)cameraSupportsFormatWidth:(int)a0 height:(int)a1;
- (int)configureCaptureWithToken:(struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; })a0;
- (int)copyColorInfo:(const struct __CFDictionary **)a0;
- (int)frameBecameAvailableCount:(int *)a0 figBufferQueueEmptyCount:(int *)a1 figBufferQueueErrorCount:(int *)a2;
- (int)frameCount:(char)a0;
- (int)getFrameRate;
- (id)initWithCaptureServer:(id)a0 protocolFunctions:(const struct tagVCVideoCaptureServerProtocolRealtimeInstanceVTable { void /* function */ *x0; } *)a1 sourceConfig:(id)a2;
- (char)isFrontCamera;
- (char)isPortraitResolutionCaptureActive;
- (void)processAndSendIdleBlackFrame;
- (void)screenCaptureSourceProcessEventString:(id)a0;
- (void)screenCaptureSourceShouldClearScreen:(char)a0;
- (void)setPauseCapture:(char)a0;
- (int)setWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (int)startCaptureWithWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (void)startClearScreenProc;
- (int)startScreenCapture;
- (void)stopClearScreenProc;
- (int)stopScreenCapture;
- (int)updateScreenCapture:(id)a0;

@end
