@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CMFXPCService : NSObject <CMFXPCServiceProtocol> {
    NSObject<OS_xpc_object> *_connection;
    int _retries;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_disconnect;
- (BOOL)_connect;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_disconnected;
- (void)_sendXPCRequest:(id)a0 completionBlock:(id /* block */)a1;
- (id)sendSynchronousXPCRequest:(id)a0;

@end
