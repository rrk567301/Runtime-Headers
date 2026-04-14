@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, TUUIXPCHostDelegate;

@interface TUUIXPCHost : NSObject <TUUIXPCHostConnectionDelegate, NSXPCListenerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<TUUIXPCHostDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMutableSet *connections;
@property (readonly, nonatomic) int clientsShouldConnectToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)connectionInvalidated:(id)a0;
- (id)init;
- (id)endpoint;
- (void).cxx_destruct;

@end
