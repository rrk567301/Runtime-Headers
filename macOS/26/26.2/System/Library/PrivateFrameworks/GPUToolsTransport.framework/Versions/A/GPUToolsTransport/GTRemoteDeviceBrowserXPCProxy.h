@class GTServiceConnection, NSSet, NSMutableDictionary;

@interface GTRemoteDeviceBrowserXPCProxy : NSObject <GTRemoteDeviceBrowser> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSMutableDictionary *_observerIdToPort;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (id)allDevices;
- (unsigned long long)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;

@end
