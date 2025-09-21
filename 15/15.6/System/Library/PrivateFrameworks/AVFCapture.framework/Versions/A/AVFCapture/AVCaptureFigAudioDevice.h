@class NSString, NSDictionary, AVWeakReference, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
    NSObject<OS_dispatch_queue> *_fcsQueue;
    struct OpaqueFigCaptureSource { } *_fcs;
    NSDictionary *_attributes;
    char _levelMeteringEnabled;
    char _isConnected;
    char _isSoonToBeDisconnected;
    NSObject<OS_dispatch_queue> *_localizedNameFirstQueryQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _localizedNameLock;
    NSObject<OS_dispatch_group> *_localizedNameFirstQueryGroup;
    NSString *_localizedName;
    NSObject<OS_dispatch_queue> *_audioRoutesInfoUpdateQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _audioRoutesInfoLock;
    NSObject<OS_dispatch_group> *_audioRoutesInfoFirstQueryGroup;
    char _audioInputRouteIsBuiltInMic;
    AVWeakReference *_weakReference;
    NSString *_clientAudioClockDeviceUID;
    struct OpaqueCMClock { } *_sharedAVAudioSessionClock;
}

+ (void)initialize;
+ (id)_devices;
+ (id)_devicesWithPriorRegisteredDevices:(id)a0;
+ (void)_initiateRefreshPreferredCameraProperties:(char)a0;
+ (id)_newFigCaptureSources;
+ (void)_reconnectDevices:(id)a0;
+ (void)_setUpCameraHistoryOnce;

- (void)dealloc;
- (id)init;
- (id)localizedName;
- (id)uniqueID;
- (id)deviceType;
- (char)isConnected;
- (id)modelID;
- (void)stopUsingDevice;
- (char)supportsAVCaptureSessionPreset:(id)a0;
- (id)_copyFigCaptureSourceProperty:(struct __CFString { } *)a0;
- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)a0;
- (void)audioInputDevicesDidChangeHandler:(id)a0;
- (char)currentAudioInputRouteIsBuiltInMic:(id)a0;
- (struct OpaqueCMClock { } *)deviceClock;
- (long long)fallbackAudioCaptureModeIfApplicableForCurrentRoute:(long long)a0;
- (struct OpaqueFigCaptureSource { } *)figCaptureSource;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)a0;
- (char)hasMediaType:(id)a0;
- (char)isAudioCaptureModeSupported:(long long)a0;
- (char)isAudioInputRouteBuiltInMic;
- (char)isBuiltInStereoAudioCaptureSupported;
- (char)isInUseByAnotherApplication;
- (char)isSoonToBeDisconnected;
- (char)isWindNoiseRemovalSupported;
- (char)shouldAudioCaptureModeTriggerGraphRebuildOnAudioRouteChange:(long long)a0;
- (char)startUsingDevice:(id *)a0;

@end
