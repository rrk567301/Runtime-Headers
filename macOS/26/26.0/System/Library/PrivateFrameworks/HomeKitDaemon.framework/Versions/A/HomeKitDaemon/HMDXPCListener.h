@class NSXPCListener, NSString, NSObject;
@protocol OS_dispatch_queue, HMDXPCListenerDelegate;

@interface HMDXPCListener : HMFObject <NSXPCListenerDelegate, HMDXPCListener>

@property (readonly) NSXPCListener *xpcListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (weak) id<HMDXPCListenerDelegate> delegate;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)stop;
- (id)initWithXPCListener:(id)a0;
- (void).cxx_destruct;

@end
