@class NSXPCConnection;

@interface TransparencyXPCConnection : NSObject

@property (retain) NSXPCConnection *connection;

+ (id)mainInstance;
+ (id)idsInstance;
+ (void)setupTestConnection:(id)a0;
+ (void)invokeXPCWithBlock:(id /* block */)a0 synchronous:(BOOL)a1 errorHandler:(id /* block */)a2;
+ (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeXPCSynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)createConnection;
- (void)setTestEndpoint:(id)a0;

@end
