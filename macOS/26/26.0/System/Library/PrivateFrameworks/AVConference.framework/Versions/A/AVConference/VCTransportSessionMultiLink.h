@class VCDatagramChannelMultiLink, NSMutableArray, NSObject;
@protocol OS_nw_parameters, OS_nw_endpoint, OS_nw_listener, OS_dispatch_semaphore;

@interface VCTransportSessionMultiLink : VCTransportSession {
    NSMutableArray *_nwConnectionInfoList;
    BOOL _isStarted;
    int _networkInterfaceType;
    NSObject<OS_nw_endpoint> *_localEndpoint;
    NSObject<OS_nw_parameters> *_localParameters;
    NSObject<OS_nw_listener> *_listener;
    VCDatagramChannelMultiLink *_datagramChannel;
    NSObject<OS_dispatch_semaphore> *_startWaitSemaphore;
    NSObject<OS_dispatch_semaphore> *_cancelWaitSemaphore;
    BOOL _requiresLargeReceiveBuffer;
    int _receiveBufferSize;
    BOOL _isIPv6;
    unsigned int _networkMTU;
}

@property (readonly, nonatomic) unsigned short localPort;

- (void)start;
- (void)dealloc;
- (void)stop;
- (BOOL)isIPv6;
- (struct tagVCNWConnectionMonitor { } *)createNWMonitor;
- (void)addNetworkAssertion;
- (int)addRemoteEndpoint:(id)a0 error:(id *)a1;
- (int)canAddConnectionWithRemoteEndpoint:(id)a0;
- (int)canRemoveConnectionWithRemoteEndpoint:(id)a0;
- (void)cleanupDatagramChannel;
- (id)connectionInfoWithRemoteAddress:(id)a0;
- (int)createAndStartNWListener:(id)a0 useBackingSocket:(BOOL)a1 error:(id *)a2;
- (int)createNWConnectionWithConnectionInfo:(id)a0 remoteEndpoint:(id)a1;
- (int)createNWParametersAndListener:(BOOL)a0;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (int)dispatchedAddRemoteEndpoint:(id)a0 error:(id *)a1;
- (int)dispatchedRemoveRemoteEndpoint:(id)a0 error:(id *)a1;
- (int)dispatchedSetRemoteEndpoints:(id)a0 error:(id *)a1;
- (int)dupRTPNWConnectionBackingSocketForNWConnection:(id)a0;
- (void)getTransportLargeBufferIndicationWithStreamProperty;
- (void)handleStateChanges:(int)a0 error:(id)a1 connectionInfo:(id)a2;
- (id)initWithLocalEndpoint:(id)a0 handlerQueue:(id)a1 context:(void *)a2 eventHandler:(void /* function */ *)a3 options:(id)a4 error:(id *)a5;
- (void)initializeInterfaceType;
- (BOOL)initializeIsIPv6;
- (BOOL)initializeNetworkMTU;
- (int)invalidateNWConnectionWithConnectionInfo:(id)a0;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;
- (void)removeNetworkAssertion;
- (int)removeRemoteEndpoint:(id)a0 error:(id *)a1;
- (int)reserveLocalPortWithListener;
- (void)setReceiveBufferSize:(id)a0;
- (int)setRemoteEndpoints:(id)a0 error:(id *)a1;
- (int)setStateChangeHandlerForConnectionWithConnectionInfo:(id)a0;
- (int)setupDatagramChannel;
- (int)setupNWConnectionWithConnectionInfo:(id)a0;
- (int)startNWConnectionWithConnectionInfo:(id)a0;
- (int)startNWConnections;
- (int)updateLocalEndpoint;
- (int)updateTransportStream:(struct OpaqueVCTransportStream { } *)a0;
- (int)updateTransportStreamRemoteSSRCList:(struct OpaqueVCTransportStream { } *)a0 shouldAddRemoteSSRC:(BOOL)a1 remoteEndpointSSRC:(int)a2;
- (int)updateTransportStreamsRemoteSSRCList:(unsigned int)a0 shouldAddRemoteSSRC:(BOOL)a1;

@end
