@class NSXPCListenerEndpoint, NSString, NSMutableDictionary, NSXPCListener, NSObject;
@protocol LACServiceManager, OS_dispatch_queue;

@interface LACServiceBase : NSObject <LACService, NSXPCListenerDelegate> {
    NSMutableDictionary *_clients;
    BOOL _terminating;
    NSXPCListener *_listener;
}

@property (readonly, nonatomic) unsigned long long clientsCount;
@property (weak, nonatomic) id<LACServiceManager> manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *serviceID;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedObject;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)_disconnectClient:(id)a0;
- (void)_assertRunningInCorrectQueue;

@end
