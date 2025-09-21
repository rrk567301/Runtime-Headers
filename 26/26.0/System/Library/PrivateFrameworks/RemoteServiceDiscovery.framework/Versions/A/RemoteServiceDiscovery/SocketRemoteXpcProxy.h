@class OS_xpc_remote_connection, NSObject;
@protocol OS_dispatch_queue;

@interface SocketRemoteXpcProxy : NSObject

@property (readonly, nonatomic) OS_xpc_remote_connection *peer;
@property (readonly, nonatomic) int clientSock;
@property (readonly, nonatomic) int serverSock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ onCancel;

- (void)cancel;
- (void)activate;
- (void).cxx_destruct;
- (id)initWithSocket:(int)a0 device:(id)a1 queue:(id)a2 server:(BOOL)a3;
- (int)takeOwnershipOfClientSocket;

@end
