@class NSXPCListener, NSString, NSXPCListenerEndpoint, NSObject;
@protocol OS_dispatch_queue, ContinuityCaptureAudioXPCHelperReceiverProtocol;

@interface CMContinuityCaptureAudioXPCHelper : NSObject <NSXPCListenerDelegate, ContinuityCaptureAudioXPCHelperProviderProtocol, ContinuityCaptureAudioXPCHelperReceiverProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_providerListener;
    NSXPCListener *_receiverListener;
    id<ContinuityCaptureAudioXPCHelperReceiverProtocol> _remoteReceiver;
    NSXPCListenerEndpoint *_listenerEndpointFromProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)helper;
+ (void)initialize;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_updateRemoteReceiver:(id)a0;
- (void)providerConnectedWithListenerEndpoint:(id)a0;
- (void)receiverConnected;

@end
