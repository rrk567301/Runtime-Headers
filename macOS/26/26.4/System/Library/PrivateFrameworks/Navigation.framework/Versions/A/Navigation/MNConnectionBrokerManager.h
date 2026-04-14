@class NSXPCListener, NSString, NSXPCConnection, NSXPCInterface, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MNConnectionBrokerManager : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_identifier;
    NSXPCInterface *_mapsConnectionInterface;
    NSXPCConnection *_brokerConnection;
    NSXPCConnection *_mapsConnection;
    NSXPCListener *_listener;
    NSMutableArray *_waitingPerformBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeConnection;
- (void)openConnection;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)establishConnection;
- (void)_openConnectionOnQueue;
- (id)initWithIdentifier:(id)a0 interface:(id)a1;
- (void)performWithMapsRemoteObject:(id /* block */)a0;

@end
