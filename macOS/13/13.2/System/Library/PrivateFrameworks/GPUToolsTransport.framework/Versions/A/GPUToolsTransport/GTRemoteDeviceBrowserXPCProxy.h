@class GTServiceConnection, NSSet;

@interface GTRemoteDeviceBrowserXPCProxy : NSObject <GTRemoteDeviceBrowser> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
}

- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)allDevices;
- (void)connectToDevice:(id)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;

@end
