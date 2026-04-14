@class NSArray, RVSLogger, NSRemoteServiceEndpoint, NSString, NSObject;
@protocol NSObject, OS_xpc_object, OS_dispatch_queue, NSRemoteServiceConnectionDelegate;

@interface NSRemoteServiceConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id<NSObject, NSRemoteServiceConnectionDelegate> _delegate;
    NSArray *_delegateStackTrace;
    NSString *_connectionName;
}

@property (readonly) RVSLogger *logger;
@property (readonly) NSRemoteServiceEndpoint *endpoint;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property unsigned char errorsAreFatal;

- (void)resume;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (int)pid;
- (void)suspend;
- (void)sendReply:(id)a0;
- (unsigned int)euid;
- (void)sendRequest:(id)a0;
- (id)initWithServiceConnection:(id)a0;
- (id)initWithServiceConnection:(id)a0 endpoint:(id)a1;
- (id)_sendSynchronousRequest:(id)a0 withTimeout:(unsigned long long)a1;
- (id)sendSynchronousRequest:(id)a0;
- (id)sendSynchronousRequest:(id)a0 withTimeout:(double)a1;
- (void)sendRequest:(id)a0 replyQueue:(id)a1;
- (unsigned int)egid;
- (int)asid;
- (void)auditToken:(struct { unsigned int x0[8]; } *)a0;
- (void)withDelegatePerform:(id /* block */)a0;
- (BOOL)_setupConnection;

@end
