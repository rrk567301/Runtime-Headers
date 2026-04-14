@class OS_xpc_remote_connection, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface SocketRemoteXpcProxy : NSObject

@property (readonly, nonatomic) OS_xpc_remote_connection *peer;
@property (readonly, nonatomic) int proxyClient;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *proxyServer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ onCancel;

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (id)initWithSocket:(int)a0 device:(id)a1 queue:(id)a2 server:(BOOL)a3;
- (int)takeOwnershipOfClientSocket;

@end
