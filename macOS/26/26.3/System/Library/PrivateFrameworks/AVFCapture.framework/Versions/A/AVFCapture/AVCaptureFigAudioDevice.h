@class NSString, NSDictionary, AVWeakReference, NSObject, NSNumber;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
    NSObject<OS_dispatch_queue> *_fcsQueue;
    struct OpaqueFigCaptureSource { } *_fcs;
    NSDictionary *_attributes;
    BOOL _levelMeteringEnabled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _isConnectedLock;
    BOOL _isConnected;
    BOOL _isSoonToBeDisconnected;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _localizedNameLock;
    NSString *_localizedName;
    NSObject<OS_dispatch_queue> *_audioRoutesInfoUpdateQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _audioRoutesInfoLock;
    NSObject<OS_dispatch_group> *_audioRoutesInfoFirstQueryGroup;
    BOOL _audioInputRouteIsBuiltInMic;
    AVWeakReference *_weakReference;
    NSString *_clientAudioClockDeviceUID;
    struct OpaqueCMClock { } *_sharedAVAudioSessionClock;
    NSNumber *_preferredIOBufferDuration;
    BOOL _allowsBluetoothHighQualityRecording;
}

+ (void)initialize;
+ (id)_devices;
+ (void)_reconnectDevices:(id)a0;
+ (id)_devicesWithPriorRegisteredDevices:(id)a0;
+ (void)_initiateRefreshPreferredCameraProperties:(BOOL)a0;
+ (void)_setUpCameraHistoryOnce;
+ (id)_newFigCaptureSources;

- (id)_copyFigCaptureSourceProperty:(struct __CFString { } *)a0;
- (long long)fallbackAudioCaptureModeIfApplicableForCurrentRoute:(long long)a0;
- (struct OpaqueCMClock { } *)deviceClock;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (BOOL)isWindNoiseRemovalSupported;
- (BOOL)isAudioCaptureModeSupported:(long long)a0;
- (BOOL)_systemHasAudioInputDevice;
- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (void)setAllowsBluetoothHighQualityRecording:(BOOL)a0;
- (id)deviceType;
- (BOOL)hasMediaType:(id)a0;
- (struct OpaqueFigCaptureSource { } *)figCaptureSource;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)shouldAudioCaptureModeTriggerGraphRebuildOnAudioRouteChange:(long long)a0;
- (id)manufacturer;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (id)uniqueID;
- (BOOL)isConnected;
- (id)localizedName;
- (BOOL)supportsAVCaptureSessionPreset:(id)a0;
- (id)init;
- (BOOL)_currentAudioInputRouteIsBuiltInMic;
- (BOOL)isSoonToBeDisconnected;
- (void)stopUsingDevice;
- (id)_currentAudioInputDeviceLocalizedName:(id)a0;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)a0;
- (BOOL)startUsingDevice:(id *)a0;
- (void)dealloc;
- (BOOL)isAudioInputRouteBuiltInMic;
- (id)modelID;
- (BOOL)isBuiltInStereoAudioCaptureSupported;

@end
