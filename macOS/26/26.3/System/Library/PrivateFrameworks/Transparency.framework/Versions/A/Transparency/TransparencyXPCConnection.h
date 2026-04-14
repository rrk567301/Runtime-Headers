@class NSString, NSXPCInterface, NSXPCConnection;

@interface TransparencyXPCConnection : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSString *machName;
@property (retain) NSXPCInterface *interface;

+ (id)swTransparencyConnection;
+ (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeAccountsSupportWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeXPCSynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (id)transparencyAccountsInstance;
+ (id)idsInstance;
+ (void)invokeXPCWithBlock:(id /* block */)a0 synchronous:(BOOL)a1 errorHandler:(id /* block */)a2;
+ (id)swTransparencyInstance;
+ (id)cachedConnection:(id)a0 interface:(Class)a1;
+ (id)transparencySupportInstance;
+ (id)mainInstance;
+ (void)setupTestConnection:(id)a0 forMachName:(id)a1;
+ (BOOL)retryable:(id)a0 counter:(int)a1;
+ (void)invokeIDSSupportWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeIDSXPCWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;

- (id)createConnection;
- (void).cxx_destruct;
- (id)initWithMachName:(id)a0 interface:(id)a1;
- (void)dealloc;
- (void)setTestEndpoint:(id)a0;

@end
