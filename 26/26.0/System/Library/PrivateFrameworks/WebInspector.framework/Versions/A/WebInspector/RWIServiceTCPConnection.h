@class NSString, _RWITCPConnection;

@interface RWIServiceTCPConnection : RWIServiceConnection <_RWITCPConnectionDelegate> {
    _RWITCPConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isConnected;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)_initWithSimulator:(id)a0 tcpConnection:(id)a1 delegate:(id)a2;
- (void)closeInternal;
- (id)initWithSimulator:(id)a0 socketPath:(id)a1 delegate:(id)a2;
- (void)tcpConnection:(id)a0 didReceiveMessage:(id)a1;
- (void)tcpConnectionDidClose:(id)a0;

@end
