@class NSMutableDictionary, CMCaptureFrameSenderService, FigCaptureThermalMonitor, NSObject, BWStats, PTEffectRenderRequest, NSMutableArray, BWNodeInput, BWLimitedGMErrorLogger, NSString, BWFigVideoCaptureDevice, PTEffect, BWNodeOutput;
@protocol MTLCommandQueue, OS_dispatch_queue;

@interface BWBackgroundBlurNode : BWNode <BWPortraitEffectPropertiesDelegate> {
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    PTEffect *_ptEffect;
    PTEffect *_reconfiguredPTEffect;
    id<MTLCommandQueue> _metalCommandQueue;
    NSObject<OS_dispatch_queue> *_ptEffectReleaseQueue;
    BOOL _stillImageCaptureEnabled;
    struct OpaqueVTPixelTransferSession { } *_stillImagePixelTransferSession;
    struct { struct __CVBuffer *pixelBuffer; struct { long long value; int timescale; unsigned int flags; long long epoch; } pts; } _stillCaptureQueue[2];
    unsigned int _stillCaptureEnqueueIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    int _deviceType;
    BWStats *_backgroundBlurProcessingTimeStats;
    int _numberOfFramesThatCouldNotBeBlurred;
    int _maxThermalSystemPressureLevel;
    BOOL _previousEffectBypassed;
    NSObject<OS_dispatch_queue> *_asyncInitQueue;
    NSObject<OS_dispatch_queue> *_asyncProcessingQueue;
    int _maxLossyCompressionLevel;
    BOOL _isHighQualityEffectSupported;
    BOOL _fastSwitchEnabled;
    unsigned long long _activeBlurEffect;
    unsigned long long _availablePTEffects;
    BOOL _upstreamDeviceOrientationCorrectionEnabled;
    PTEffectRenderRequest *_ptEffectRenderRequest;
    float _backgroundBlurAperture;
    float _studioLightingIntensity;
    BOOL _gesturesEnabled;
    BOOL _suppressedGesturesEnabled;
    struct __CVBuffer { } *_backgroundReplacementPixelBuffer;
    NSMutableArray *_pendingPTEffectReactions;
    long long _reactionCounterAPI;
    unsigned int _reactionCounterAll;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastRenderPTS;
    NSMutableDictionary *_lastActiveReactions;
    BOOL _activeReactionsDirty;
    id /* block */ _reactionsInProgressObserver;
    id /* block */ _suppressedGestureObserver;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _framerateThrottleNextPTS;
    FigCaptureThermalMonitor *_thermalPressureMonitor;
    CMCaptureFrameSenderService *_frameSender;
}

@property (nonatomic) long long effectQuality;
@property (readonly, nonatomic) BWNodeInput *videoInput;
@property (readonly, nonatomic) BWNodeOutput *videoOutput;
@property (readonly, nonatomic) BWNodeInput *stillImageInput;
@property (readonly, nonatomic) BWNodeOutput *stillImageOutput;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) int continuityCameraClientDeviceClass;
@property (retain, nonatomic) BWFigVideoCaptureDevice *captureDevice;
@property (retain, nonatomic) NSString *captureDeviceUniqueID;
@property (nonatomic) BOOL effectBypassed;
@property (nonatomic) unsigned long long activeBlurEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (void)performReactionEffect:(id)a0;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (unsigned int)reactionCount;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didChangeStudioLightingIntensity:(float)a0;
- (void)dealloc;
- (void)didChangePortraitEffectStudioLightQuality:(long long)a0;
- (void)setSuppressedGestureHandler:(id /* block */)a0;
- (void)didChangeGesturesEnabled:(BOOL)a0;
- (void)setReactionsInProgressChangedHandler:(id /* block */)a0;
- (void)didChangeBackgroundBlurAperture:(float)a0;
- (void)didChangeSuppressedGesturesEnabled:(BOOL)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)didChangeBackgroundReplacementPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithStillImageCaptureEnabled:(BOOL)a0 maxLossyCompressionLevel:(int)a1 fastSwitchEnabled:(BOOL)a2 availableEffects:(unsigned long long)a3 activeEffect:(unsigned long long)a4 isHighQualitySupported:(BOOL)a5 upstreamDeviceOrientationCorrectionEnabled:(BOOL)a6 deviceType:(int)a7 captureDevice:(id)a8;

@end
