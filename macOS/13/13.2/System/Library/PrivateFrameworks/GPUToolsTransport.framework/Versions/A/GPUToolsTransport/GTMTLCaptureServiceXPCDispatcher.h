@class GTURLAccessProviderXPCProxy;
@protocol GTXPCConnection, GTMTLCaptureService;

@interface GTMTLCaptureServiceXPCDispatcher : GTXPCDispatcher <GTMTLCaptureServiceXPCDispatcher, GTMTLCaptureServiceDelegate> {
    id<GTMTLCaptureService> _implInstance;
    id<GTXPCConnection> _notifyConnection;
    GTURLAccessProviderXPCProxy *_urlService;
}

- (void).cxx_destruct;
- (void)setDelegate_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1 notifyConnection:(id)a2;
- (void)signalInterposeSemaphore:(id)a0 replyConnection:(id)a1;
- (void)allCaptureObjects:(id)a0 replyConnection:(id)a1;
- (void)setupWithDescriptor_:(id)a0 replyConnection:(id)a1;
- (void)startWithCompletedHandler_:(id)a0 replyConnection:(id)a1;
- (void)stop:(id)a0 replyConnection:(id)a1;
- (void)notifyCAMetalLayerListChanged:(id)a0;
- (void)notifyMTLDeviceListChanged:(id)a0;
- (void)notifyMTLCaptureScopeListChanged:(id)a0;
- (void)notifyMTLCommandQueueListChanged:(id)a0;
- (void)notifyCaptureProgress:(unsigned long long)a0;
- (void)notifyUnsupportedFenum:(id)a0;

@end
