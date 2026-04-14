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

+ (id)_devices;
+ (void)initialize;
+ (id)_devicesWithPriorRegisteredDevices:(id)a0;
+ (void)_reconnectDevices:(id)a0;
+ (id)_newFigCaptureSources;
+ (void)_initiateRefreshPreferredCameraProperties:(BOOL)a0;
+ (void)_setUpCameraHistoryOnce;

- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (id)manufacturer;
- (struct OpaqueFigCaptureSource { } *)figCaptureSource;
- (BOOL)supportsAVCaptureSessionPreset:(id)a0;
- (struct OpaqueCMClock { } *)deviceClock;
- (BOOL)isSoonToBeDisconnected;
- (BOOL)isAudioCaptureModeSupported:(long long)a0;
- (BOOL)isBuiltInStereoAudioCaptureSupported;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)isWindNoiseRemovalSupported;
- (BOOL)hasMediaType:(id)a0;
- (BOOL)isAudioInputRouteBuiltInMic;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (id)_copyFigCaptureSourceProperty:(struct __CFString { } *)a0;
- (id)deviceType;
- (BOOL)isConnected;
- (BOOL)shouldAudioCaptureModeTriggerGraphRebuildOnAudioRouteChange:(long long)a0;
- (BOOL)_systemHasAudioInputDevice;
- (id)uniqueID;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)a0;
- (id)_currentAudioInputDeviceLocalizedName:(id)a0;
- (id)modelID;
- (BOOL)_currentAudioInputRouteIsBuiltInMic;
- (long long)fallbackAudioCaptureModeIfApplicableForCurrentRoute:(long long)a0;
- (void)setAllowsBluetoothHighQualityRecording:(BOOL)a0;
- (id)init;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (BOOL)startUsingDevice:(id *)a0;
- (void)dealloc;
- (id)localizedName;
- (void)stopUsingDevice;

@end
