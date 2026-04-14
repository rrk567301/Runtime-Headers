@class NSString, NSXPCInterface, NSXPCConnection;

@interface TransparencyXPCConnection : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSString *machName;
@property (retain) NSXPCInterface *interface;

+ (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (id)cachedConnection:(id)a0 interfaceClass:(Class)a1;
+ (void)invokeIDSXPCWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (id)transparencyAccountsInstance;
+ (void)invokeAccountsSupportWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeXPCSynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (id)idsInstance;
+ (id)swTransparencyConnection;
+ (void)setupTestConnection:(id)a0 forMachName:(id)a1;
+ (id)mainInstance;
+ (void)invokeIDSSupportWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (id)swTransparencyInstance;
+ (id)transparencySupportInstance;
+ (BOOL)retryable:(id)a0 counter:(int)a1;
+ (void)invokeXPCWithBlock:(id /* block */)a0 synchronous:(BOOL)a1 errorHandler:(id /* block */)a2;
+ (id)cachedConnection:(id)a0 interface:(id)a1;

- (void)setTestEndpoint:(id)a0;
- (id)initWithMachName:(id)a0 interface:(id)a1;
- (id)createConnection;
- (void).cxx_destruct;
- (void)dealloc;

@end
