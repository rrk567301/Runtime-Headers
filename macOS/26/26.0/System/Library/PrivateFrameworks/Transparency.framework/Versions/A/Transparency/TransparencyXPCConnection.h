@class NSString, NSXPCInterface, NSXPCConnection;

@interface TransparencyXPCConnection : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSString *machName;
@property (retain) NSXPCInterface *interface;

+ (id)cachedConnection:(id)a0 interface:(Class)a1;
+ (void)invokeIDSXPCWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)setupTestConnection:(id)a0 forMachName:(id)a1;
+ (id)transparencySupportInstance;
+ (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeIDSSupportWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (BOOL)retryable:(id)a0 counter:(int)a1;
+ (id)transparencyAccountsInstance;
+ (id)swTransparencyInstance;
+ (id)idsInstance;
+ (void)invokeAccountsSupportWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeXPCSynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (id)swTransparencyConnection;
+ (void)invokeXPCWithBlock:(id /* block */)a0 synchronous:(BOOL)a1 errorHandler:(id /* block */)a2;
+ (id)mainInstance;

- (id)createConnection;
- (void)dealloc;
- (void)setTestEndpoint:(id)a0;
- (id)initWithMachName:(id)a0 interface:(id)a1;
- (void).cxx_destruct;

@end
