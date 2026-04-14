@class NSXPCConnection;

@interface MSClient : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (id)_proxy;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendMessageWithModel:(id)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;

@end
