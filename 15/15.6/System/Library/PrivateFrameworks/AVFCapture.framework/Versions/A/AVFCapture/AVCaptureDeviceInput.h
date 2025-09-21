@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput {
    AVCaptureDeviceInputInternal *_internal;
}

@property (readonly, nonatomic) AVCaptureDevice *device;
@property (nonatomic) char unifiedAutoExposureDefaultsEnabled;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMinFrameDurationOverride;
@property (nonatomic) long long multichannelAudioMode;
@property (readonly, nonatomic, getter=isWindNoiseRemovalSupported) char windNoiseRemovalSupported;
@property (nonatomic, getter=isWindNoiseRemovalEnabled) char windNoiseRemovalEnabled;

+ (void)initialize;
+ (id)deviceInputWithDevice:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithDevice:(id)a0 error:(id *)a1;
- (void)setSession:(id)a0;
- (id)ports;
- (struct OpaqueCMClock { } *)clock;
- (float)maxGainOverride;
- (void)_applyVideoMinFrameDurationOverride;
- (long long)_audioCaptureModeForMultichannelAudioMode:(long long)a0;
- (char)_authorizedToUseDeviceAndRequestIfNecessary:(id)a0;
- (void)_bumpChangeSeedForFirstPortWithMediaType:(id)a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)_resetPortraitLightingEffectStrength;
- (void)_resetSimulatedAperture;
- (void)_resetVideoMinFrameDurationOverride;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription { } *)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (long long)audioCaptureMode;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (char)isAudioCaptureModeSupported:(long long)a0;
- (char)isBackgroundBlurAllowed;
- (char)isBackgroundReplacementAllowed;
- (char)isBuiltInMicrophoneStereoAudioCaptureEnabled;
- (char)isBuiltInMicrophoneStereoAudioCaptureSupported;
- (char)isCameraCalibrationDataDeliveryEnabled;
- (char)isCenterStageAllowed;
- (char)isMaxGainOverrideSupported;
- (char)isMultichannelAudioModeSupported:(long long)a0;
- (char)isStudioLightingAllowed;
- (char)isVisionDataDeliveryEnabled;
- (id)multiCamPorts;
- (id)notReadyError;
- (float)portraitLightingEffectStrength;
- (id)portsWithMediaType:(id)a0 sourceDeviceType:(id)a1 sourceDevicePosition:(long long)a2;
- (char)reactionEffectsAllowed;
- (void)setAudioCaptureMode:(long long)a0;
- (void)setBackgroundBlurAllowed:(char)a0;
- (void)setBackgroundReplacementAllowed:(char)a0;
- (void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(char)a0;
- (void)setCameraCalibrationDataDeliveryEnabled:(char)a0;
- (void)setCenterStageAllowed:(char)a0;
- (void)setMaxGainOverride:(float)a0;
- (void)setPortraitLightingEffectStrength:(float)a0;
- (void)setReactionEffectsAllowed:(char)a0;
- (void)setSimulatedAperture:(float)a0;
- (void)setStudioLightingAllowed:(char)a0;
- (void)setVisionDataDeliveryEnabled:(char)a0;
- (float)simulatedAperture;
- (id)videoDevice;

@end
