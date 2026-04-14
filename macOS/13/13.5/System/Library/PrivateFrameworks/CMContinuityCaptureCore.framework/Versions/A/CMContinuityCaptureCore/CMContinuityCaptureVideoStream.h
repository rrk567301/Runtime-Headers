@class NSString, NSArray, CMContinuityCaptureConfiguration, NSSet, NSMutableDictionary, CMContinuityCaptureCompositeDevice, CMContinuityCaptureStateMachine, NSObject, NSMutableArray, CMContinuityCaptureVideoDevice;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

@interface CMContinuityCaptureVideoStream : CMIOExtensionStream <CMIOExtensionStreamSource, ContinuityCaptureFrameDelegate, ContinuityCaptureEventDelegate, ContinuityCaptureControlDelegate, ContinuityCaptureStillImageCaptureDelegate> {
    NSArray *_extensionStreamFormats;
    NSArray *_continuityStreamFormats;
    unsigned long long _activeFormatIndex;
    int _activeMaxFrameRate;
    int _activeMinFrameRate;
    CMContinuityCaptureStateMachine *_stateMachine;
    struct opaqueCMSampleBuffer { } *_lastDispatchedSampleBuffer;
    struct opaqueCMSampleBuffer { } *_blurredSampleBuffer;
    NSObject<OS_dispatch_source> *_fakeFrameDispatchTimer;
    NSMutableDictionary *_cmControlByName;
    NSMutableDictionary *_clientsRequestingBooleanControlOnByControlName;
    NSMutableDictionary *_maxPhotoQualityPrioritizationByClients;
    NSMutableArray *_stillImageRequestsQueue;
    NSObject<OS_dispatch_group> *_stillImageCaptureGroup;
    CMContinuityCaptureCompositeDevice *_compositeDevice;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _streamStartsTime;
}

@property (readonly, weak) CMContinuityCaptureVideoDevice *device;
@property (readonly) BOOL streaming;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) CMContinuityCaptureConfiguration *configuration;
@property (readonly) NSArray *formats;
@property (readonly, copy) NSSet *availableProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)debugInfo;
- (id)_availableProperties;
- (BOOL)authorizedToStartStreamForClient:(id)a0;
- (void)captureAsyncStillImage:(long long)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)disconnectClient:(id)a0;
- (BOOL)setStreamProperties:(id)a0 error:(id *)a1;
- (BOOL)startStreamAndReturnError:(id *)a0;
- (BOOL)stopStreamAndReturnError:(id *)a0;
- (id)streamPropertiesForProperties:(id)a0 error:(id *)a1;
- (void)_disconnectClient:(id)a0;
- (void)_setValueForControl:(id)a0 completion:(id /* block */)a1;
- (struct opaqueCMSampleBuffer { } *)_createStillImageDataBufferFromRequest:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)_getResolvedStillCaptureConfigs:(id)a0;
- (BOOL)_setStreamProperties:(id)a0 error:(id *)a1;
- (id)_streamPropertiesForProperties:(id)a0 error:(id *)a1;
- (void)changeActiveFormat:(unsigned long long)a0 forEntity:(long long)a1;
- (void)completeImageCaptureRequest:(id)a0;
- (struct opaqueCMSampleBuffer { } *)createBlurredSampleBuffer;
- (id)createFormatToPublish:(id)a0;
- (void)didCaptureStillImage:(id)a0 entity:(long long)a1;
- (void)dispatchFrame:(struct opaqueCMSampleBuffer { } *)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (id)initWithDevice:(id)a0 streamFormats:(id)a1 queue:(id)a2;
- (void)postActionCompletionForType:(unsigned long long)a0 error:(id)a1;
- (void)postActionForType:(unsigned long long)a0 option:(unsigned long long)a1 data:(id)a2;
- (BOOL)postActionGuardForType:(unsigned long long)a0;
- (void)postDataEvent:(id)a0 entity:(long long)a1 data:(id)a2;
- (void)postEvent:(id)a0 entity:(long long)a1;
- (void)setValueForControl:(id)a0 completion:(id /* block */)a1;
- (void)setupControls;
- (BOOL)setupStreams:(id)a0;
- (BOOL)stateMachineConnectionChangeGuard;
- (void)stateMachineImageCapture;
- (BOOL)stateMachineImageCaptureGuard;
- (void)stateMachineNotifyCompletion:(id)a0;
- (void)stateMachineRestartStream:(unsigned long long)a0;
- (void)stateMachineStartPauseTimer;
- (void)stateMachineStartStream:(unsigned long long)a0;
- (void)stateMachineStopPauseTimer;
- (void)stateMachineStopStream:(unsigned long long)a0;
- (void)stateMachineStreamDisable:(unsigned long long)a0;
- (BOOL)stateMachineStreamGuard;
- (void)stateMachineTerminate;

@end
