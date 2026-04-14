@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput {
    AVCaptureDeviceInputInternal *_internal;
}

@property (readonly, nonatomic) AVCaptureDevice *device;
@property (nonatomic) BOOL unifiedAutoExposureDefaultsEnabled;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMinFrameDurationOverride;

+ (void)initialize;
+ (id)deviceInputWithDevice:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithDevice:(id)a0 error:(id *)a1;
- (void)setSession:(id)a0;
- (float)simulatedAperture;
- (id)ports;
- (struct OpaqueCMClock { } *)clock;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (float)portraitLightingEffectStrength;
- (id)multiCamPorts;
- (float)maxGainOverride;
- (void)_resetSimulatedAperture;
- (void)_resetPortraitLightingEffectStrength;
- (id)notReadyError;
- (id)portsWithMediaType:(id)a0 sourceDeviceType:(id)a1 sourceDevicePosition:(long long)a2;
- (void)_applyVideoMinFrameDurationOverride;
- (void)_resetVideoMinFrameDurationOverride;
- (BOOL)isMaxGainOverrideSupported;
- (void)setMaxGainOverride:(float)a0;
- (BOOL)_authorizedToUseDeviceAndRequestIfNecessary:(id)a0;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription { } *)a0;
- (void)_bumpChangeSeedForFirstPortWithMediaType:(id)a0;
- (BOOL)isBuiltInMicrophoneStereoAudioCaptureSupported;
- (BOOL)isBuiltInMicrophoneStereoAudioCaptureEnabled;
- (void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(BOOL)a0;
- (BOOL)isVisionDataDeliveryEnabled;
- (void)setVisionDataDeliveryEnabled:(BOOL)a0;
- (BOOL)isCameraCalibrationDataDeliveryEnabled;
- (void)setCameraCalibrationDataDeliveryEnabled:(BOOL)a0;
- (void)setSimulatedAperture:(float)a0;
- (void)setPortraitLightingEffectStrength:(float)a0;
- (BOOL)isCenterStageAllowed;
- (void)setCenterStageAllowed:(BOOL)a0;
- (BOOL)isBackgroundBlurAllowed;
- (void)setBackgroundBlurAllowed:(BOOL)a0;
- (BOOL)isStudioLightingAllowed;
- (void)setStudioLightingAllowed:(BOOL)a0;
- (id)videoDevice;

@end
