@class NSString, NSObject;
@protocol OS_nw_connection, OS_dispatch_queue;

@interface VCTransportSessionNW : VCTransportSession {
    NSObject<OS_nw_connection> *_rtpConnection;
    NSObject<OS_nw_connection> *_rtcpConnection;
    NSString *_rtpConnectionID;
    NSString *_rtcpConnectionID;
    BOOL _isSharedConnection;
    struct tagVCNWConnectionMonitor { } *_monitor;
    void /* function */ *_notificationHandler;
    void /* function */ *_packetEventHandler;
    void *_handlerContext;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    BOOL _didScheduleReceive;
    int _networkInterfaceType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _nwMonitorLock;
    BOOL _isIPv6;
    unsigned int _networkMTU;
}

- (void)dealloc;
- (void)start;
- (void)stop;
- (BOOL)isIPv6;
- (id)initWithRTPNWConnectionID:(id)a0 RTCPNWConnectionID:(id)a1 handlerQueue:(id)a2 context:(void *)a3 notificationHandler:(void /* function */ *)a4 eventHandler:(void /* function */ *)a5;
- (void)createNWConnection:(id *)a0 forConnectionID:(id)a1;
- (void)handleStateChanges:(int)a0 error:(id)a1 semaphore:(id)a2 operationResult:(BOOL *)a3;
- (BOOL)setStateChangeHandlerForConnection:(id)a0 result:(BOOL *)a1 semaphore:(id)a2;
- (BOOL)setupNWConnection:(id)a0;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (void)createNWMonitor;
- (void)destroyNWMonitor;
- (int)dupRTPNWConnectionBackingSocket;
- (int)dupRTCPNWConnectionBackingSocket;
- (int)dupRTPNWConnectionBackingSocketForNWConnection:(id)a0;
- (void)initializeInterfaceType;
- (BOOL)initializeNetworkMTU;
- (BOOL)initializeIsIPv6;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;

@end
