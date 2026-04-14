@class GTServiceConnection, NSSet, NSMutableDictionary;

@interface GTRemoteDeviceBrowserXPCProxy : NSObject <GTRemoteDeviceBrowser> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSMutableDictionary *_observerIdToPort;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (id)allDevices;
- (void).cxx_destruct;
- (unsigned long long)registerObserver:(id)a0;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;

@end
