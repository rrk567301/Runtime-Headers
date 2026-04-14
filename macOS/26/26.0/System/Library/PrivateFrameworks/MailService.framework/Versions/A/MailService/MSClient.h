@class NSXPCConnection;

@interface MSClient : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (id)_proxy;
- (void).cxx_destruct;
- (void)sendMessageWithModel:(id)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;

@end
