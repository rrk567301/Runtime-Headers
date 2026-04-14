@class LNAppContext, NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface LNConnectionListener : NSObject <NSXPCListenerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableSet *clientConnections;
@property (readonly, nonatomic) LNAppContext *appContext;
@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientConnectionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)removeClientConnection:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addClientConnection:(id)a0;
- (id)initWithListener:(id)a0 clientConnectionQueue:(id)a1;

@end
