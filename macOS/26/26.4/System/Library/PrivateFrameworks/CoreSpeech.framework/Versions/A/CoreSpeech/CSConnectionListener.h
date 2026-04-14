@class NSXPCListener, NSString, NSXPCInterface, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CSConnectionListenerDelegate;

@interface CSConnectionListener : NSObject <NSXPCListenerDelegate, CSConnectionServiceDelegate> {
    NSXPCListener *_listener;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteInterface;
    id _proxyObject;
}

@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *machServiceName;
@property (readonly, weak, nonatomic) id<CSConnectionListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resumeConnection;
- (id)initWithMachService:(id)a0 withServiceInterface:(id)a1 withServiceObject:(id)a2 withDelegateInterface:(id)a3;
- (id)initWithXpcListener:(id)a0 withMachService:(id)a1 withServiceInterface:(id)a2 withServiceObject:(id)a3 withDelegateInterface:(id)a4 queue:(id)a5;
- (void)notifyClientsWithBlock:(id /* block */)a0;
- (id)initWithMachService:(id)a0 withServiceInterface:(id)a1 withServiceObject:(id)a2 withDelegateInterface:(id)a3 queue:(id)a4;
- (void).cxx_destruct;
- (void)_notifyDelegateOfNewConnection:(id)a0;
- (void)notifyRemoteParameter:(id)a0 WithBlock:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithMachService:(id)a0 withServiceInterface:(id)a1 withServiceObject:(id)a2 withDelegateInterface:(id)a3 queue:(id)a4 delegate:(id)a5;
- (void)_notifyDelegateOfRemovedConnection:(id)a0;
- (void)dealloc;
- (id)initWithXpcListener:(id)a0 withMachService:(id)a1 withServiceInterface:(id)a2 withServiceObject:(id)a3 withDelegateInterface:(id)a4 queue:(id)a5 delegate:(id)a6;

@end
