@class NSString, NSMutableDictionary, VCMediaRecorder, NSObject, VCAudioMachineLearningCoordinator;
@protocol OS_dispatch_queue, VCServerDelegate;

@interface VCCellularAudioTap : VCObject <VCAudioIODelegate, VCAudioPowerSpectrumSourceDelegate, VCMediaRecorderTransportDelegate, VCPowerManagerThermalDelegate> {
    NSMutableDictionary *_audioTapIOMap;
    VCMediaRecorder *_mediaRecorder;
    VCAudioMachineLearningCoordinator *_audioMachineLearningCoordinatorUplink;
    VCAudioMachineLearningCoordinator *_audioMachineLearningCoordinatorDownlink;
    int _processId;
    int _reportingModuleID;
    NSString *_uuid;
    _Atomic unsigned int _callbackCounter;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) id<VCServerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) long long tapToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)audioIOTypeFromTapType:(unsigned int)a0;
+ (const char *)cStringFromTapType:(unsigned int)a0;
+ (id)stringFromTapType:(unsigned int)a0;
+ (BOOL)validateAsynchronousActionContext:(const struct tagVCAsynchronousActionContext { unsigned char x0; void *x1; } *)a0 withError:(id *)a1;

- (void)dealloc;
- (void)invalidate;
- (void)didStart:(BOOL)a0 error:(id)a1;
- (BOOL)actionDidFinishForContext:(const struct tagVCAsynchronousActionContext { unsigned char x0; void *x1; } *)a0 withError:(id *)a1;
- (BOOL)actionWillBeginForContext:(const struct tagVCAsynchronousActionContext { unsigned char x0; void *x1; } *)a0 withError:(id *)a1;
- (BOOL)addAudioTapForStreamToken:(long long)a0 tapType:(unsigned int)a1 enableAsyncTapStart:(BOOL)a2 error:(id *)a3;
- (struct tagVCAudioIOConfiguration { unsigned int x0; unsigned int x1; int x2; int x3; unsigned int x4; unsigned char x5; BOOL x6; id x7; int x8; unsigned int x9; unsigned int x10; BOOL x11; unsigned long long x12; unsigned int x13; long long x14; long long x15; unsigned long long x16; BOOL x17; BOOL x18; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; id x5; } x19; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; id x5; } x20; id x21; BOOL x22; BOOL x23; id x24; long long x25; id x26; BOOL x27; })audioIOConfigWithAudioType:(unsigned int)a0 sinkDelegateContext:(const struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; id x5; } *)a1;
- (void)audioPowerSpectrumSinkDidRegister;
- (void)audioPowerSpectrumSinkDidUnregister;
- (void)cleanUpAudioMachineLearningCoordinator;
- (void)cleanUpMediaRecorder;
- (void)cleanUpPeriodicReporting;
- (struct __CFDictionary { } *)clientSpecificUserInfo;
- (void)controllerFormatChanged:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0;
- (void)didChangeThermalLevel:(int)a0;
- (void)didResume;
- (void)didResumeAudioIO:(id)a0;
- (void)didStop:(BOOL)a0 error:(id)a1;
- (void)didSuspend;
- (void)didSuspendAudioIO:(id)a0;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (id)initWithProcessId:(int)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)initializeAudioTapIOForStreamToken:(long long)a0 enableAsyncTapStart:(BOOL)a1;
- (int)makeAudioIOForAudioTapIO:(id)a0;
- (void)mediaRecorder:(id)a0 shouldProcessRequest:(id)a1 recipientID:(id)a2;
- (void)printAudioTapHealth;
- (int)registerAudioTapForStreamToken:(long long)a0 tapType:(unsigned int)a1;
- (BOOL)removeAudioTapForStreamToken:(long long)a0 error:(id *)a1;
- (void)serverDidDie;
- (void)setAudioTapIO:(id)a0 forStreamToken:(long long)a1;
- (BOOL)setUpAudioMachineLearningCoordinator;
- (BOOL)setUpCallRecordingComponents;
- (BOOL)setUpDelegateQueue:(id)a0;
- (BOOL)setUpMediaRecorder;
- (void)setUpPeriodicReporting;
- (BOOL)setUpReportingAgent;
- (struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; id x5; })sinkDelegateContextWithTapType:(unsigned int)a0 realtimeContext:(struct tagVCCellularAudioTapIORealtimeContext { long long x0; unsigned int x1; struct _VCAudioPowerSpectrumSourceRealtimeContext *x2; id x3; float x4; } *)a1;
- (id)startAudioForStreamToken:(id)a0 isInitialization:(BOOL)a1;
- (id)stopAudioForStreamToken:(id)a0 isDeinitialization:(BOOL)a1;
- (void)terminateProcessFromAssertionOverflow:(BOOL)a0 onAudioTapIO:(id)a1;
- (void)unregisterAudioTapForStreamToken:(long long)a0;
- (int)validateAddAudioTapForStreamToken:(long long)a0;

@end
