@class NSString, NSURL, VCAudioIO, AVCAnsweringMachineConfiguration, VCMediaRecorder, VCCannedAudioInjector, VCAudioCaptionsCoordinator, NSObject;
@protocol OS_dispatch_queue, VCAnsweringMachineDelegate;

@interface VCAnsweringMachine : VCMediaDevice <VCAudioIODelegate, VCMediaRecorderDelegate> {
    id<VCAnsweringMachineDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct tagVCAnsweringMachineRealtimeContext { VCCannedAudioInjector *announcementAssetInjector; unsigned int blockCounter; unsigned int blocksToDelay; struct tagVCAnsweringMachineCommonRealtimeContext { unsigned char flags; unsigned int latestTimestamp; float averageAudioPower; } sourceCommonContext; VCAudioCaptionsCoordinator *captionsCoordinator; struct tagVCAnsweringMachineCommonRealtimeContext { unsigned char flags; unsigned int latestTimestamp; float averageAudioPower; } sinkCommonContext; VCMediaRecorder *mediaRecorder; NSString *mediaRecorderRequesterID; NSString *mediaRecorderTransactionID; long long audioToken; } _realtimeContext;
    char _registeredForThermalNotifications;
    NSString *_uuid;
    int _deviceRole;
    VCAudioIO *_audioIO;
    int _reportingModuleID;
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _internalFormat;
    char _stopIsAsync;
    char _didInvalidate;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) long long messageAudioToken;
@property (readonly, nonatomic) AVCAnsweringMachineConfiguration *configuration;
@property (readonly, nonatomic) NSURL *recordingURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)terminateProcess:(id)a0 terminateSource:(id)a1 agent:(struct opaqueRTCReporting { } *)a2;

- (void)dealloc;
- (void)invalidate;
- (id)start;
- (id)stop;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)onStart;
- (void)registerForThermalNotifications;
- (char)setUpAnnouncementAssetInjection;
- (char)autoRunOnStart;
- (void)cleanupAnnouncementAssetInjection;
- (void)cleanupCaptionsCoordinator;
- (void)cleanupMediaRecorder;
- (void)cleanupPeriodicReporting;
- (void)cleanupRealtimeContext;
- (struct __CFDictionary { } *)clientSpecificUserInfo;
- (char)configureAudioIO;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })defaultAudioFormat;
- (struct tagVCAudioIOConfiguration { unsigned int x0; unsigned int x1; int x2; int x3; unsigned int x4; unsigned char x5; char x6; id x7; int x8; unsigned int x9; unsigned int x10; char x11; unsigned long long x12; unsigned int x13; long long x14; long long x15; unsigned long long x16; char x17; char x18; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; char x5; id x6; } x19; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; char x5; id x6; } x20; id x21; char x22; char x23; })defaultAudioIOConfiguration;
- (int)deviceRoleForCallSource:(unsigned char)a0;
- (void)didResumeAudioIO:(id)a0;
- (void)didSuspendAudioIO:(id)a0;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (void)handleThermalPressureNotification:(id)a0;
- (id)newInjectorConfigurationForAnnouncementAsset:(id)a0;
- (id)onStop;
- (struct __CFDictionary { } *)reportingInitialConfiguration;
- (void)serverDidDie;
- (char)setUpConfigurationIndependentInternalState;
- (char)setUpInternalStateWithConfiguration:(id)a0;
- (void)setUpRealtimeDefaults;
- (char)setupCaptionsCoordinator;
- (void)setupInternalFormat;
- (char)setupMediaRecorder;
- (void)setupPeriodicReporting;
- (char)setupRealtimeContextWithToken:(long long)a0;
- (char)setupReportingAgentWithCallID:(unsigned int)a0;
- (void)stopMediaRecording;
- (void)streamToken:(long long)a0 didEndProcessingRequest:(id)a1 urlContext:(const struct tagVCMediaRecorderDelegateURLContext { id x0; id x1; char x2; } *)a2 error:(id)a3;
- (void)streamToken:(long long)a0 didFinishRequest:(id)a1 didSucceed:(char)a2;
- (void)streamToken:(long long)a0 didStartProcessingRequest:(id)a1 error:(id)a2;
- (void)streamToken:(long long)a0 didUpdateCapabilities:(unsigned int)a1;
- (void)streamTokenDidCleanupAllRequests:(long long)a0;
- (void)unregisterForThermalNotifications;

@end
