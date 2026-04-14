@class NSString, NSDictionary, AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
    NSObject<OS_dispatch_queue> *_fcsQueue;
    struct OpaqueFigCaptureSource { } *_fcs;
    NSDictionary *_attributes;
    BOOL _levelMeteringEnabled;
    BOOL _isConnected;
    NSString *_localizedName;
    AVWeakReference *_weakReference;
    NSString *_clientAudioClockDeviceUID;
}

+ (void)initialize;
+ (id)_devices;
+ (void)_reconnectDevices:(id)a0;
+ (void)_refreshPreferredCameraProperties:(BOOL)a0;
+ (void)_setUpCameraHistoryOnce;

- (void)dealloc;
- (id)init;
- (id)localizedName;
- (id)uniqueID;
- (id)deviceType;
- (BOOL)isConnected;
- (id)modelID;
- (BOOL)supportsAVCaptureSessionPreset:(id)a0;
- (void)stopUsingDevice;
- (id)_copyFigCaptureSourceProperty:(struct __CFString { } *)a0;
- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)a0;
- (void)audioInputDevicesDidChangeHandler:(id)a0;
- (struct OpaqueCMClock { } *)deviceClock;
- (struct OpaqueFigCaptureSource { } *)figCaptureSource;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)a0;
- (BOOL)hasMediaType:(id)a0;
- (BOOL)isBuiltInStereoAudioCaptureSupported;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)startUsingDevice:(id *)a0;

@end
