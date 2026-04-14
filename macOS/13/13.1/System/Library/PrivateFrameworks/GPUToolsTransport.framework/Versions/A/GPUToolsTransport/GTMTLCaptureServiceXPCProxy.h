@class GTServiceConnection, NSSet, GTURLAccessProviderXPCProxy;

@interface GTMTLCaptureServiceXPCProxy : NSObject <GTMTLCaptureService> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    GTURLAccessProviderXPCProxy *_urlService;
}

- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)resume;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)abort;
- (void)setupWithDescriptor:(id)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (void)signalInterposeSemaphore;
- (id)allCaptureObjects;
- (void)startWithCompletedHandler:(id /* block */)a0;

@end
