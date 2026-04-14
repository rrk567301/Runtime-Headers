@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RTXPCListener : NSXPCListener <NSXPCListenerDelegate, RTWatchdogProtocol>

@property (readonly, nonatomic) NSString *machServiceName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableArray *connectedClients;
@property (readonly, nonatomic) NSMutableArray *disconnectedClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logClients;
- (id)initWithMachServiceName:(id)a0;
- (void)checkInWithHandler:(id /* block */)a0;
- (void)shutdownWithHandler:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setup;
- (void)_setup;
- (void).cxx_destruct;

@end
