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
}

+ (void)initialize;
+ (id)_devices;
+ (void)_reconnectDevices:(id)a0;

- (void)dealloc;
- (id)init;
- (id)localizedName;
- (id)uniqueID;
- (BOOL)isConnected;
- (id)deviceType;
- (id)modelID;
- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (BOOL)supportsAVCaptureSessionPreset:(id)a0;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)hasMediaType:(id)a0;
- (struct OpaqueCMClock { } *)deviceClock;
- (BOOL)isBuiltInStereoAudioCaptureSupported;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)a0;
- (BOOL)startUsingDevice:(id *)a0;
- (void)stopUsingDevice;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (id)_copyFigCaptureSourceProperty:(struct __CFString { } *)a0;
- (struct OpaqueFigCaptureSource { } *)figCaptureSource;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { } *)a0;
- (void)audioInputDevicesDidChangeHandler:(id)a0;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)a0;

@end
