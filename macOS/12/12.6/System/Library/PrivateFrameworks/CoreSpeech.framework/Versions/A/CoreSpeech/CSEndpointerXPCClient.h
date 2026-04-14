@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, CSEndpointAnalyzerDelegate;

@interface CSEndpointerXPCClient : CSEndpointerProxy <CSEndpointerXPCServiceDelegate> {
    id<CSEndpointAnalyzerDelegate> _endpointerDelegate;
}

@property (retain, nonatomic) NSXPCConnection *endpointerConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcClientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcDelegateQueue;
@property (retain, nonatomic) id remoteObjectProxy;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setActiveChannel:(unsigned long long)a0;
- (id)_getRemoteServiceProxyObject;
- (void)_createClientConnection;
- (void)setStartWaitTime:(double)a0;
- (void)setAutomaticEndpointingSuspensionEndTime:(double)a0;
- (void)setEndWaitTime:(double)a0;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)recordingStoppedForReason:(long long)a0;
- (double)trailingSilenceDurationAtEndpoint;
- (void)processServerEndpointFeatures:(id)a0;
- (void)updateEndpointerThreshold:(float)a0;
- (void)updateEndpointerDelayedTrigger:(BOOL)a0;
- (void)shouldAcceptEagerResultForDuration:(double)a0 resultsCompletionHandler:(id /* block */)a1;
- (void)setEndpointerOperationMode:(long long)a0;
- (id)endpointerModelVersion;
- (double)elapsedTimeWithNoSpeech;
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)a0;
- (void)didDetectStartpointAtTime:(double)a0;
- (void)didDetectHardEndpointAtTime:(double)a0 withMetrics:(id)a1;
- (void)didDetectHardEndpointAtTime:(double)a0 withTotalAudioRecorded:(double)a1 endpointBufferHostTime:(unsigned long long)a2 featuresAtEndpoint:(id)a3 endpointerType:(long long)a4 serverFeatureLatencyDistribution:(id)a5 additionalMetrics:(id)a6;
- (unsigned long long)endPointAnalyzerType;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0 recordContext:(id)a1 recordOption:(id)a2 voiceTriggerInfo:(id)a3;
- (id)endpointerDelegate;
- (void)setEndpointerDelegate:(id)a0;

@end
