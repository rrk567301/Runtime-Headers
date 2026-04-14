@class NSXPCConnection;

@interface RMStoreXPCConnection : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)storeXPCConnection:(id)a0;

- (void)dealloc;
- (id)initWithXPCConnection:(id)a0;
- (void).cxx_destruct;

@end
