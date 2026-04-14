@class NEAppProxyFlow, NWEndpoint, NSObject, NSError;
@protocol OS_nw_connection, OS_dispatch_queue, OS_os_transaction;

@interface NPAppProxyFlowBridge : NSObject

@property (retain) NEAppProxyFlow *flow;
@property (retain) NWEndpoint *remoteEndpoint;
@property (retain) NSObject<OS_nw_connection> *connection;
@property int currentState;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_transaction> *networkTransaction;
@property (retain) NSError *connectionError;
@property BOOL eofNW;
@property BOOL eofFlow;

- (void).cxx_destruct;
- (void)startConnection;
- (void)readDataFromClient;
- (void)closeAllWithError:(id)a0;
- (void)startSendReceiveLoop;
- (void)readDataFromConnection;
- (void)closeFlowWithError:(id)a0;
- (void)readMultipleFromClient;
- (void)readMultipleFromConnection;
- (void)handleDataWriteToFlowCompletion:(id)a0;
- (void)writeDataToFlow:(id)a0;
- (void)writeMultipleToConnection:(id *)a0 count:(unsigned int)a1;
- (void)writeDataToConnection:(id)a0;
- (void)handleDataFromClient:(id)a0 readError:(id)a1;
- (void)handleConnectionReady;
- (id)initWithAppProxyFlow:(id)a0;

@end
