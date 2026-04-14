@protocol GTXPCConnection, GTRemoteDeviceBrowser;

@interface GTRemoteDeviceBrowserXPCDispatcher : GTXPCDispatcher <GTRemoteDeviceBrowserXPCDispatcher, GTRemoteDeviceBrowserDelegate> {
    id<GTRemoteDeviceBrowser> _remoteDeviceBrowser;
    id<GTXPCConnection> _notifyConnection;
}

- (void).cxx_destruct;
- (void)setDelegate_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1 notifyConnection:(id)a2;
- (void)allDevices:(id)a0 replyConnection:(id)a1;
- (void)notifyDeviceListChanged:(id)a0;

@end
