@class NSXPCListener, NSString, NSObject;
@protocol OS_dispatch_queue, _STManagerProviding;

@interface _STXPCServer : NSObject <NSXPCListenerDelegate, _STXPCService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *listenerQueue;
@property (retain, nonatomic) id<_STManagerProviding> managerProvider;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithError:(id *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)makePeerWithIdentifier:(id)a0 inReply:(id /* block */)a1;
- (id)initWithManagerProvider:(id)a0 xpcListener:(id)a1 error:(id *)a2;
- (void)makePeerWithConfiguration:(id)a0 inReply:(id /* block */)a1;

@end
