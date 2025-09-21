@class NSXPCConnection;

@interface MLRServiceClient : NSObject {
    NSXPCConnection *_connection;
}

+ (id)sharedConnection;

- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)donateJSONResult:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)performOnRemoteObjectWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)performOnRemoteObjectWithBlock:(id /* block */)a0 isSynchronous:(BOOL)a1 errorHandler:(id /* block */)a2;
- (void)performSynchronouslyOnRemoteObjectWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;

@end
