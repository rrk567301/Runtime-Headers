@class NSString, NSXPCInterface, NSXPCConnection;

@interface TransparencyXPCConnection : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSString *machName;
@property (retain) NSXPCInterface *interface;

+ (void)invokeAccountsSupportWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (BOOL)retryable:(id)a0 counter:(int)a1;
+ (id)transparencySupportInstance;
+ (id)idsInstance;
+ (void)invokeIDSSupportWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)setupTestConnection:(id)a0 forMachName:(id)a1;
+ (id)transparencyAccountsInstance;
+ (void)invokeXPCSynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (id)swTransparencyConnection;
+ (id)mainInstance;
+ (id)cachedConnection:(id)a0 interface:(Class)a1;
+ (id)swTransparencyInstance;
+ (void)invokeXPCWithBlock:(id /* block */)a0 synchronous:(BOOL)a1 errorHandler:(id /* block */)a2;
+ (void)invokeIDSXPCWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;

- (id)createConnection;
- (id)initWithMachName:(id)a0 interface:(id)a1;
- (void).cxx_destruct;
- (void)setTestEndpoint:(id)a0;
- (void)dealloc;

@end
