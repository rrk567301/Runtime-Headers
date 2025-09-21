@class NSArray, AVCaptureDevice, AVWeakReference;
@protocol AVCallbackCancellation;

@interface AVCaptureDeviceInputInternal : NSObject {
    AVCaptureDevice *device;
    NSArray *ports;
    NSArray *multiCamPorts;
    char unifiedAutoExposureDefaultsEnabled;
    long long audioCaptureMode;
    long long multichannelAudioMode;
    char windNoiseRemovalEnabled;
    char visionDataDeliveryEnabled;
    char cameraCalibrationDataDeliveryEnabled;
    float simulatedAperture;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } videoMinFrameDurationOverride;
    float maxGainOverride;
    char centerStageAllowed;
    char backgroundBlurAllowed;
    char studioLightingAllowed;
    char reactionEffectsAllowed;
    char backgroundReplacementAllowed;
    char ready;
    float portraitLightingEffectStrength;
    AVWeakReference *weakReference;
    id<AVCallbackCancellation> deviceOpenCallbackInvoker;
}

- (void)dealloc;

@end
