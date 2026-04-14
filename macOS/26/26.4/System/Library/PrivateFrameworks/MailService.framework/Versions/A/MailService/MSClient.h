@class NSXPCConnection;

@interface MSClient : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (id)_proxy;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)sendMessageWithModel:(id)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;

@end
