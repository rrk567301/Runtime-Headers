@class NSString, NSXPCConnection, CSEndpointerMetrics, NSObject;
@protocol OS_dispatch_queue, CSEndpointAnalyzerDelegate;

@interface CSEndpointerXPCClient : NSObject <CSEndpointerXPCServiceDelegate, CSEndpointAnalyzer>

@property (retain, nonatomic) NSXPCConnection *endpointerConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcClientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcDelegateQueue;
@property (retain, nonatomic) id remoteObjectProxy;
@property (retain, nonatomic) CSEndpointerMetrics *cachedMetrics;
@property (nonatomic) long long cachedEventType;
@property (retain, nonatomic) NSString *requestId;
@property (weak, nonatomic) id<CSEndpointAnalyzerDelegate> delegate;
@property (retain, nonatomic) NSString *endpointerModelVersion;
@property (nonatomic) unsigned long long activeChannel;
@property (retain, nonatomic) NSString *mhId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_getSerialQueueWithName:(id)a0 targetQueue:(id)a1;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)dealloc;
- (void)shouldAcceptEagerResultForDuration:(double)a0 withEndpointerMetrics:(id)a1 resultsCompletionHandler:(id /* block */)a2;
- (id)_getRemoteServiceProxyObject;
- (void)shouldAcceptEagerResultForDuration:(double)a0 resultsCompletionHandler:(id /* block */)a1;
- (void)stopEndpointer;
- (id)init;
- (void)updateEndpointerThreshold:(float)a0;
- (void)didDetectTwoShotAtTime:(double)a0;
- (void)processASRFeatures:(id)a0 fromServer:(BOOL)a1;
- (void)setEndpointerOperationMode:(long long)a0;
- (void)didDetectHardEndpointAtTime:(double)a0 withMetrics:(id)a1 eventType:(long long)a2;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0 recordContext:(id)a1 recordOption:(id)a2 voiceTriggerInfo:(id)a3;
- (BOOL)shouldAcceptEagerResultForDurationSync:(double)a0 withEndpointerMetrics:(id)a1;
- (void)recordingStoppedForReason:(long long)a0;
- (void)logFeaturesWithEvent:(id)a0 locale:(id)a1;
- (void)_createClientConnection;
- (void)_deliverHardEndpointDetectedAtTime:(double)a0 withMetrics:(id)a1 eventType:(long long)a2;
- (void).cxx_destruct;
- (id)cachedEndpointerMetrics;

@end
