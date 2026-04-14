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

+ (void)_setUpCameraHistoryOnce;
+ (void)_initiateRefreshPreferredCameraProperties:(BOOL)a0;
+ (void)initialize;
+ (id)_devicesWithPriorRegisteredDevices:(id)a0;
+ (void)_reconnectDevices:(id)a0;
+ (id)_devices;
+ (id)_newFigCaptureSources;

- (BOOL)supportsAVCaptureSessionPreset:(id)a0;
- (id)_copyFigCaptureSourceProperty:(struct __CFString { } *)a0;
- (struct OpaqueFigCaptureSource { } *)figCaptureSource;
- (BOOL)isBuiltInStereoAudioCaptureSupported;
- (BOOL)isConnected;
- (void)dealloc;
- (id)uniqueID;
- (BOOL)isAudioInputRouteBuiltInMic;
- (id)deviceType;
- (void)stopUsingDevice;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (BOOL)isAudioCaptureModeSupported:(long long)a0;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)a0;
- (BOOL)shouldAudioCaptureModeTriggerGraphRebuildOnAudioRouteChange:(long long)a0;
- (BOOL)_currentAudioInputRouteIsBuiltInMic;
- (id)init;
- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (long long)fallbackAudioCaptureModeIfApplicableForCurrentRoute:(long long)a0;
- (BOOL)isSoonToBeDisconnected;
- (id)_currentAudioInputDeviceLocalizedName:(id)a0;
- (id)modelID;
- (BOOL)isInUseByAnotherApplication;
- (void)setAllowsBluetoothHighQualityRecording:(BOOL)a0;
- (BOOL)isWindNoiseRemovalSupported;
- (id)localizedName;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (id)manufacturer;
- (BOOL)startUsingDevice:(id *)a0;
- (struct OpaqueCMClock { } *)deviceClock;
- (BOOL)_systemHasAudioInputDevice;
- (BOOL)hasMediaType:(id)a0;

@end
