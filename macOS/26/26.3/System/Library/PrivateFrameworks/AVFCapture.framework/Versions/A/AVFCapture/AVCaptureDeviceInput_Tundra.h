@class AVCaptureDeviceInputInternal_Tundra, AVExternalSyncDevice, AVCaptureDevice_Tundra;

@interface AVCaptureDeviceInput_Tundra : AVCaptureInput_Tundra {
    AVCaptureDeviceInputInternal_Tundra *_internal;
}

@property (readonly, nonatomic) AVCaptureDevice_Tundra *device;
@property (nonatomic) BOOL unifiedAutoExposureDefaultsEnabled;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMinFrameDurationOverride;
@property (readonly, nonatomic, getter=isLockedVideoFrameDurationSupported) BOOL lockedVideoFrameDurationSupported;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } activeLockedVideoFrameDuration;
@property (readonly, nonatomic, getter=isExternalSyncSupported) BOOL externalSyncSupported;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } activeExternalSyncVideoFrameDuration;
@property (readonly, nonatomic) AVExternalSyncDevice *externalSyncDevice;
@property (nonatomic) long long multichannelAudioMode;
@property (readonly, nonatomic, getter=isWindNoiseRemovalSupported) BOOL windNoiseRemovalSupported;
@property (nonatomic, getter=isWindNoiseRemovalEnabled) BOOL windNoiseRemovalEnabled;
@property (readonly, nonatomic, getter=isCinematicVideoCaptureSupported) BOOL cinematicVideoCaptureSupported;
@property (nonatomic, getter=isCinematicVideoCaptureEnabled) BOOL cinematicVideoCaptureEnabled;
@property (nonatomic) float simulatedAperture;

+ (void)initialize;
+ (id)deviceInputWithDevice:(id)a0 error:(id *)a1;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setCenterStageAllowed:(BOOL)a0;
- (void)setBackgroundReplacementAllowed:(BOOL)a0;
- (id)description;
- (id)init;
- (BOOL)sensitiveContentAnalyzerEnabled;
- (BOOL)isStudioLightingAllowed;
- (BOOL)isCenterStageAllowed;
- (BOOL)_authorizedToUseDeviceAndRequestIfNecessary:(id)a0;
- (void)setReactionEffectsAllowed:(BOOL)a0;
- (BOOL)isBackgroundReplacementAllowed;
- (id)initWithDevice:(id)a0 error:(id *)a1;
- (id)ports;
- (void)setSensitiveContentAnalyzerEnabled:(BOOL)a0;
- (void)dealloc;
- (void)setStudioLightingAllowed:(BOOL)a0;
- (id)notReadyError;
- (id)portsWithMediaType:(id)a0 sourceDeviceType:(id)a1 sourceDevicePosition:(long long)a2;
- (void)setBackgroundBlurAllowed:(BOOL)a0;
- (BOOL)isBackgroundBlurAllowed;
- (BOOL)reactionEffectsAllowed;
- (void)unfollowExternalSyncDevice;
- (id)sensitiveContentAnalyzerXPCObject;
- (BOOL)isMultichannelAudioModeSupported:(long long)a0;
- (void)followExternalSyncDevice:(id)a0 videoFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 delegate:(id)a2;
- (void)setSensitiveContentAnalyzerXPCObject:(id)a0;
- (void)_handleVideoEffectFrameRateThrottling;
- (void)_refreshDALDeviceBackgroundBlurActive:(BOOL)a0;
- (void)_refreshDALDeviceBackgroundBlurAperture;
- (void)_refreshDALDeviceBackgroundReplacementActive:(BOOL)a0;
- (void)_refreshDALDeviceBackgroundReplacementPixelBuffer;
- (void)_refreshDALDeviceBlackenFramesEnabled:(BOOL)a0;
- (void)_refreshDALDeviceGesturesEnabled;
- (void)_refreshDALDeviceMetadataObjectDetectionEnabled;
- (void)_refreshDALDeviceReactionEffectsActive;
- (void)_refreshDALDeviceSensitiveContentAnalyzerXPCObject;
- (void)_refreshDALDeviceStudioLightActive:(BOOL)a0;
- (void)_refreshDALDeviceStudioLightingIntensity;
- (void)_refreshDALDeviceSuppressVideoEffects;
- (void)_refreshDALDeviceSuppressedGesturesEnabled;
- (BOOL)addInputUnitsForInputPort:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (int)clockProviderNodeForInputPort:(id)a0;
- (int)graphNodeForInputPort:(id)a0;
- (void)graphWillStartForSession:(id)a0;
- (void)graphWillStopForSession:(id)a0 error:(id)a1;
- (struct OpaqueCMClock { } *)inputClock;
- (void)removeInputUnitsForInputPort:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;
- (void)sessionWillUseOutputDecompressionOptions:(id)a0 forPort:(id)a1;
- (unsigned int)unitOutputNumberForInputPort:(id)a0;

@end
