@class NSDictionary, LOMStateMachine, NSData, NSObject, NSMutableArray;
@protocol OS_nw_connection, OS_dispatch_queue;

@interface LOMControllerClient : NSObject {
    BOOL _isActive;
}

@property (retain) NSDictionary *attributes;
@property (retain) NSObject<OS_nw_connection> *connection;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ connectionReadyHandler;
@property (copy) id /* block */ connectionCanceledHandler;
@property (retain) LOMStateMachine *stateMachine;
@property (retain) NSMutableArray *requestQueue;
@property (retain) NSData *response;
@property (retain) NSData *responseAck;

- (void)cancel;
- (id)description;
- (BOOL)setup;
- (void).cxx_destruct;
- (BOOL)activate;
- (void)sendRequest;
- (void)setCancelHandler:(id /* block */)a0;
- (void)handleResponse;
- (BOOL)isValidRequest;
- (void)setReadyHandler:(id /* block */)a0;
- (void)receiveResponse;
- (void)sendResponseAck;
- (BOOL)isValidResponse;
- (void)completeAllPendingRequest;
- (void)completeLastPendingRequest;
- (void)deviceRequest:(id)a0 completion:(id /* block */)a1;
- (void)dispatchReadyNotification;
- (id)initWithAttributes:(id)a0 queue:(id)a1;
- (void)requestCompletion;
- (void)setSecOptions:(id)a0;
- (void)setupStateMachine;
- (void)teardownClient;

@end
