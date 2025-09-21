@interface CompositorServices.RemoteCompositorClient : NSObject <CompositorServices.RemoteCompositorWBXPC, CompositorServices.RemoteCompositorClientXPCProtocol> {
    void /* unknown type, empty encoding */ stateController;
    void /* unknown type, empty encoding */ videoStreamType;
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ arSession;
    void /* unknown type, empty encoding */ connectionType;
    void /* unknown type, empty encoding */ clockSyncController;
}

- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (void)setInitialSwiftUIVersion:(id)a0 reply:(id /* block */)a1;
- (void)browseForEndpointWithIsMVDSessionActive:(BOOL)a0 reply:(id /* block */)a1;
- (void)getLayerCapabilitiesWithReply:(id /* block */)a0;
- (void)getLayerRemoteServerConfigurationWithReply:(id /* block */)a0;
- (void)getPreferredLayerConfigurationWithReply:(id /* block */)a0;
- (void)getSessionIDWithReply:(id /* block */)a0;
- (void)keepAliveWithReply:(id /* block */)a0;
- (void)newLayer:(id)a0 bundleInfo:(id)a1 configuration:(id)a2 clientOwnerSharedMemory:(id)a3 clientLayerChannelRequest:(id)a4 reply:(id /* block */)a5;
- (void)registerAppStateChannelWithRequest:(id)a0 reply:(id /* block */)a1;
- (void)setRemoteClientEndpoint:(id)a0 swiftUILocalVersion:(id)a1 reply:(id /* block */)a2;

@end
