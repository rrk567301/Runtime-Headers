@class NSString, NSDictionary, VCAudioIOControllerClient, AVAudioSession, NSObject, VCAudioHALPluginRemoteDeviceInfo;
@protocol OS_dispatch_queue;

@interface VCSystemAudioCaptureController : VCObject <VCAudioIOControllerControl> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    char _running;
    VCAudioIOControllerClient *_client;
    AVAudioSession *_avAudioSession;
    struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int tapType; union { int audioProcessIdToTap; unsigned int sessionTypeToTap; } ; struct __CFString *captureContext; unsigned int source; } tapSettings; VCAudioHALPluginRemoteDeviceInfo *remoteDeviceInfo; } _configuration;
    char _useScreenCaptureKitForAudio;
}

@property (readonly, nonatomic) char supportsVoiceActivityDetection;
@property (readonly, nonatomic) NSDictionary *reportingStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)captureServerConfigForAudioConfig:(struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x0; id x1; } *)a0 forClient:(id)a1;
+ (int)captureSourceForSystemAudioCaptureControllerConfig:(struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x0; id x1; } *)a0;
+ (int)captureSourceForTypePreSpatialSessionType:(unsigned int)a0;
+ (int)captureSourceForTypeProcessID:(int)a0;
+ (char)isValidConfiguration:(const struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x0; id x1; } *)a0;

- (void)dealloc;
- (id)init;
- (id)initWithConfig:(const struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x0; id x1; } *)a0;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (id)dispatchQueueNameWithConfig:(const struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x0; id x1; } *)a0;
- (void)setupLogPrefixWithConfig:(const struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x0; id x1; } *)a0;
- (void)startClient:(id)a0;
- (void)stopClient:(id)a0;
- (void)updateClient:(id)a0 settings:(const struct tagVCAudioIOControllerClientSettings { unsigned char x0; char x1; char x2; char x3; } *)a1;

@end
