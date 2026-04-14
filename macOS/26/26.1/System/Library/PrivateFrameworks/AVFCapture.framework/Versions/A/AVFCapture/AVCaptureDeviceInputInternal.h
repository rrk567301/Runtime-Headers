@class NSObject, NSArray, AVWeakReference, AVAudioFormat, AVCaptureDevice, AVExternalSyncDevice;
@protocol OS_xpc_object, AVCallbackCancellation;

@interface AVCaptureDeviceInputInternal : NSObject {
    AVCaptureDevice *device;
    NSArray *ports;
    NSArray *multiCamPorts;
    BOOL unifiedAutoExposureDefaultsEnabled;
    long long audioCaptureMode;
    long long multichannelAudioMode;
    BOOL windNoiseRemovalEnabled;
    BOOL cinematicVideoCaptureSupported;
    BOOL cinematicVideoCaptureEnabled;
    BOOL visionDataDeliveryEnabled;
    BOOL cameraCalibrationDataDeliveryEnabled;
    float simulatedAperture;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } videoMinFrameDurationOverride;
    BOOL lockedVideoFrameDurationSupported;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } activeLockedVideoFrameDuration;
    BOOL externalSyncSupported;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } activeExternalSyncVideoFrameDuration;
    AVExternalSyncDevice *activeVideoExternalSyncDevice;
    float maxGainOverride;
    BOOL centerStageAllowed;
    BOOL backgroundBlurAllowed;
    BOOL studioLightingAllowed;
    BOOL reactionEffectsAllowed;
    BOOL backgroundReplacementAllowed;
    NSObject<OS_xpc_object> *sensitiveContentAnalyzerXPCObject;
    BOOL sensitiveContentAnalyzerEnabled;
    BOOL ready;
    float portraitLightingEffectStrength;
    AVWeakReference *weakReference;
    id<AVCallbackCancellation> deviceOpenCallbackInvoker;
    AVAudioFormat *remoteIOOutputFormat;
}

- (void)dealloc;

@end
