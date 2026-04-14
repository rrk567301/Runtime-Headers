@class NPTunnelFlow;

@interface NPTunnelTuscanyLoopback : NPTunnelTuscany

@property void *window;
@property (retain) NPTunnelFlow *flow;

- (void)dealloc;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (unsigned long long)maxFrameSize;
- (void)cancelConnection;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1 appRule:(id)a2 flowProperties:(id)a3 onRamp:(id)a4 delegate:(id)a5;
- (unsigned long long)initialWindowSize;
- (BOOL)addNewFlow:(id)a0;
- (void)removeFlow:(unsigned long long)a0;
- (void)createTuscanyClient;
- (unsigned int)dayPassSessionCounter;
- (long long)currentMTU;
- (BOOL)selectBestEdge;
- (void)startConnectionTimer;
- (void)cancelConnectionTimer;
- (void)sendUsageReportWithRTT:(unsigned long long)a0 geohash:(id)a1 fallbackReason:(long long)a2;
- (void)pingWithCompletionHandler:(id /* block */)a0;

@end
