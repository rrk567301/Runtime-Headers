@class NSString, NSURL, NSURLSession, SAConnectionPolicyRoute, NSOperationQueue, SAConnectionPolicy, NSObject, SiriCoreConnectionType, NSURLSessionStreamTask, NSInputStream, NSOutputStream;
@protocol OS_dispatch_group, OS_dispatch_source, OS_dispatch_queue, SiriCoreConnectionProviderDelegate;

@interface SiriCoreNetworkSessionProvider : NSObject <NSURLSessionDelegate, NSStreamDelegate, SiriCoreConnectionProvider> {
    id<SiriCoreConnectionProviderDelegate> _delegate;
    NSURL *_url;
    SAConnectionPolicyRoute *_route;
    SAConnectionPolicy *_policy;
    char _prefersWWAN;
    char _connectByPOPEnabled;
    char _isMPTCP;
    SiriCoreConnectionType *_connectionType;
    int _interfaceIndex;
    NSString *_interfaceName;
    char _isCanceled;
    char _isEstablishing;
    char _isReady;
    NSURLSession *_urlSession;
    NSOperationQueue *_opQueue;
    NSURLSessionStreamTask *_streamTask;
    id /* block */ _completion_block;
    NSString *_resolvedHost;
    NSString *_connectionId;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _readBuffer[10240];
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_group> *_readGroup;
    char _waitingOnReadGroup;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_source> *_openTimer;
    NSObject<OS_dispatch_source> *_staleConnectionTimer;
    unsigned long long _readWriteCounter;
    double _staleConnectionInterval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getMetricsContext:(id /* block */)a0;

- (void).cxx_destruct;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)connectionType;
- (char)isReady;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)initWithQueue:(id)a0;
- (void)URLSession:(id)a0 betterRouteDiscoveredForStreamTask:(id)a1;
- (void)URLSession:(id)a0 streamTask:(id)a1 didBecomeInputStream:(id)a2 outputStream:(id)a3;
- (char)isMultipath;
- (char)isCanceled;
- (void)readData:(id /* block */)a0;
- (void)_closeWithError:(id)a0;
- (void)_invokeOpenCompletionWithError:(id)a0;
- (void)setPrefersWWAN:(char)a0;
- (void)_setupOpenTimer;
- (void)setPolicyRoute:(id)a0;
- (void)_cancelOpenTimer;
- (void)_cancelStaleConnectionTimer;
- (void)_setupStaleConnectionTimer;
- (void)_streamDidBecomeUnviable;
- (id)analysisInfo;
- (char)hasActiveConnection;
- (id)headerDataWithForceReconnect:(char)a0;
- (char)isEstablishing;
- (char)isPeerConnectionError:(id)a0;
- (char)isPeerNotNearbyError:(id)a0;
- (void)openConnectionForURL:(id)a0 withConnectionId:(id)a1 initialPayload:(id)a2 completion:(id /* block */)a3;
- (char)providerStatsIndicatePoorLinkQuality;
- (id)resolvedHost;
- (void)setConnectByPOPMethod:(char)a0;
- (void)setKeepAlive:(double)a0 withInterval:(double)a1 withCount:(unsigned long long)a2;
- (void)setProviderConnectionPolicy:(id)a0;
- (void)setRetransmitConnectionDropTime:(double)a0;
- (void)setStaleInterval:(double)a0;
- (char)shouldFallbackFromError:(id)a0;
- (char)shouldFallbackQuickly;
- (char)supportsInitialPayload;
- (void)updateConnectionMetrics:(id)a0 completion:(id /* block */)a1;
- (void)writeData:(id)a0 completion:(id /* block */)a1;

@end
