@class NSXPCConnection;

@interface MSClient : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_proxy;
- (id)init;
- (void)sendMessageWithModel:(id)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;

@end
