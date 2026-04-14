@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, VCMacScreenCaptureSource, OS_dispatch_semaphore;

@interface VCMacScreenCapture : VCVideoCapture <VCMacScreenCaptureSourceDelegate, VCVideoSource> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _screenCaptureLock;
    NSObject<OS_dispatch_queue> *_streamQueue;
    BOOL _isPreviewing;
    BOOL _isCapturing;
    int _captureWidth;
    int _captureHeight;
    int _displayWidth;
    int _displayHeight;
    int _captureFramerate;
    int _frameCount;
    int _frameDrops;
    BOOL _shouldEnforceFrameRate;
    struct tagVCVideoFrameCaptureLimiter { double bucketSize; double tokensAvailable; double tokenDurationTicks; double lastRefreshTicks; } _tokenBucket;
    BOOL _useScreenCaptureKit;
    NSMutableDictionary *_sourceConfig;
    struct opaqueCMSampleBuffer { } *_previousCompleteFrame;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previousFrameTime;
    struct CGDisplayStream { } *_displayStream;
    NSObject<VCMacScreenCaptureSource> *_screenCapture;
    struct OpaqueCMMemoryPool { } *_dirtyRectsMemoryPool;
    struct __CFAllocator { } *_dirtyRectsArrayAllocator;
    NSObject<OS_dispatch_semaphore> *_stopSemaphore;
    unsigned long long _lastOriginHIDEventTimestamp;
    BOOL _receivedFirstFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)setFrameRate:(int)a0;
- (int)stop:(BOOL)a0;
- (int)startPreview;
- (BOOL)isPreviewRunning;
- (int)_startCapture;
- (BOOL)addAudioOutputWithConfig:(id)a0;
- (BOOL)cameraSupportsFormatWidth:(int)a0 height:(int)a1;
- (int)configureCaptureWithToken:(struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; })a0;
- (int)copyColorInfo:(const struct __CFDictionary **)a0;
- (BOOL)createDisplayStreamPropertiesFromConfig:(id)a0 displayProperties:(struct __CFDictionary **)a1;
- (int)frameBecameAvailableCount:(int *)a0 figBufferQueueEmptyCount:(int *)a1 figBufferQueueErrorCount:(int *)a2;
- (int)frameCount:(BOOL)a0;
- (int)frameDropsWithShouldReset:(BOOL)a0;
- (int)getFrameRate;
- (id)initWithCaptureServer:(id)a0 sourceConfig:(id)a1 withError:(int *)a2;
- (BOOL)isFrontCamera;
- (BOOL)isPortraitResolutionCaptureActive;
- (void)processEventString:(id)a0;
- (void)processFrameHandler:(int)a0 displayTime:(unsigned long long)a1 framesurface:(struct __IOSurface { } *)a2 updateRef:(struct CGDisplayStreamUpdate { } *)a3;
- (BOOL)removeAudioOutput;
- (int)setWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (void)setupCaptureSizeForDisplayID:(unsigned int)a0;
- (BOOL)setupColorInfoWithSourceConfig:(id)a0 displayStreamProperties:(struct __CFDictionary { } *)a1;
- (int)startCaptureWithWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (int)startScreenCapture;
- (int)stopScreenCapture;

@end
