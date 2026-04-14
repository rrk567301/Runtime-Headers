@class SidecarService, NSString, NSArray, SidecarDevice, CMContinuityCaptureConfiguration, SidecarRequest, CMContinuityCaptureMetricsReporter, NSObject, NSMutableArray;
@protocol OS_dispatch_group, ContinuityCaptureClockSynchronizationDelegate, ContinuityCaptureAVCNegotiationDataDelegate, ContinuityCaptureEventDelegate, ContinuityCaptureStillImageCaptureDelegate, ContinuityCaptureControlDelegate;

@interface CMContinuityCaptureClient : CMContinuityCaptureClientBase <ContinuityCaptureStreamDelegate> {
    SidecarService *_service;
    SidecarDevice *_device;
    id<ContinuityCaptureEventDelegate> _eventDelegate;
    id<ContinuityCaptureControlDelegate> _controlDelegate;
    id<ContinuityCaptureAVCNegotiationDataDelegate> _avcNegotiationDelegate;
    id<ContinuityCaptureClockSynchronizationDelegate> _clockSynchronizationDelegate;
    id<ContinuityCaptureStillImageCaptureDelegate> _stillImageCaptureDelegate;
    SidecarRequest *_activeRequest;
    SidecarRequest *_oldRequest;
    NSArray *_mediaIdentifiers;
    NSObject<OS_dispatch_group> *_sidecarActivationCompletionGroup;
    NSObject<OS_dispatch_group> *_sidecarTeardownCompletionGroup;
    BOOL _teardownInProgress;
    CMContinuityCaptureConfiguration *_configurationToSendOnActivate;
    NSMutableArray *_streamStatusLogs;
    NSMutableArray *_connectionTimeoutLogs;
    long long _currentTransport;
}

@property (readonly) CMContinuityCaptureMetricsReporter *metricReporter;
@property (readonly) BOOL tearDownInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel:(id /* block */)a0;
- (void)reset:(id /* block */)a0 error:(id)a1;
- (id)debugInfo;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)transport;
- (void)_startStream:(id)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_stopStream:(long long)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_teardownSidecarStreams:(id)a0 completion:(id /* block */)a1;
- (void)captureStillImage:(id)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (id)createSidecarRequest;
- (void)enqueueResponse:(id)a0 identifier:(id)a1;
- (void)handleSynchronizeAudioClockCompletion;
- (id)initWithDevice:(id)a0 mediaIdentifers:(id)a1 eventDelegate:(id)a2 controlDelegate:(id)a3 avcNegotiationDelegate:(id)a4 clockSynchronizationDelegate:(id)a5 stillImageCaptureDelegate:(id)a6 queue:(id)a7;
- (void)logConnectionTimeout;
- (void)logStreamStatusSummary:(id)a0 gid:(id)a1 status:(id)a2;
- (void)resetSidecarDevice:(id)a0;
- (void)setConfigurationToSendOnActivate:(id)a0;
- (void)setupSidecarStreams:(id /* block */)a0 earlyStreamCompletion:(id /* block */)a1 timeSyncClockCompletion:(id /* block */)a2 option:(unsigned long long)a3;
- (void)startStream:(id)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)stopStream:(long long)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)teardownSidecarStreams:(id)a0 completion:(id /* block */)a1;

@end
