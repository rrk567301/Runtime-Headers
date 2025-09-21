@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, PacketCaptureurDelegate;

@interface PacketCaptureur : NSObject {
    NSObject<OS_xpc_object> *netDiagServiceConnection;
    NSObject<OS_xpc_object> *netDiagNotificationListener;
    NSObject<OS_xpc_object> *netDiagNotificationConnection;
    NSObject<OS_dispatch_queue> *netDiagConnQueue;
    NSObject<OS_dispatch_queue> *netDiagMsgQueue;
    NSString *xpcServiceName;
}

@property (retain, nonatomic) id<PacketCaptureurDelegate> delegate;

- (void).cxx_destruct;
- (void)invalidateConnections;
- (id)_connectionForServiceNamed:(const char *)a0 queue:(id)a1 connectionInvalidHandler:(id /* block */)a2;
- (id)createNotificationListener;
- (void)sendNotificationListener;
- (void)connectToXPCService;
- (id)initWithQueue:(id)a0 service:(id)a1;
- (void)startTask:(id)a0 destination:(id)a1 withCompletion:(id /* block */)a2;
- (void)stopTask:(id)a0 withCompletion:(id /* block */)a1;

@end
