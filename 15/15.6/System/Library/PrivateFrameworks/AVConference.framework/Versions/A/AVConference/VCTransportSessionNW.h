@class VCNWConnectionInfo, NSObject;
@protocol OS_dispatch_semaphore;

@interface VCTransportSessionNW : VCTransportSession {
    char _isSharedConnection;
    char _didScheduleReceive;
    int _networkInterfaceType;
    NSObject<OS_dispatch_semaphore> *_startWaitSemaphore;
    NSObject<OS_dispatch_semaphore> *_cancelWaitSemaphore;
    char _isConnectionStartDelayed;
    char _connectionStartDidSucceed;
    char _isIPv6;
    unsigned int _networkMTU;
}

@property (retain, nonatomic) VCNWConnectionInfo *rtpConnectionInfo;
@property (retain, nonatomic) VCNWConnectionInfo *rtcpConnectionInfo;

- (void)dealloc;
- (void)start;
- (void)stop;
- (struct tagVCNWConnectionMonitor { } *)createNWMonitor;
- (int)dupRTPNWConnectionBackingSocket;
- (void)addNetworkAssertion;
- (int)cancelConnections;
- (int)configureConnectionToReceiveHoplimit:(id)a0;
- (int)createAndSetupConnection:(id)a0;
- (int)createConnections;
- (int)createNWConnection:(id)a0;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (int)destroyNWConnection:(id *)a0;
- (int)dupRTCPNWConnectionBackingSocket;
- (int)dupRTPNWConnectionBackingSocketForNWConnection:(id)a0;
- (void)handleStateChanges:(int)a0 error:(id)a1 operationResult:(char *)a2;
- (id)initWithRTPNWConnectionID:(id)a0 RTCPNWConnectionID:(id)a1 handlerQueue:(id)a2 context:(void *)a3 notificationHandler:(void /* function */ *)a4 eventHandler:(void /* function */ *)a5 isConnectionStartDelayed:(char)a6;
- (void)initializeInterfaceType;
- (char)initializeIsIPv6;
- (char)initializeNetworkMTU;
- (char)isIPv6;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;
- (void)removeNetworkAssertion;
- (int)setRemoteAddress:(id)a0 remoteRTCPPort:(int)a1;
- (int)setStateChangeHandlerForConnection:(id)a0 result:(char *)a1;
- (int)setupNWConnection:(id)a0;
- (int)startNWConnection:(id)a0;

@end
