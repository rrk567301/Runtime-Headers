@class GTServiceConnection, NSSet, NSUUID;

@interface GTServiceProviderXPCProxy : NSObject <GTServiceProvider> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSUUID *_deviceUUID;
}

- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)allServices;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (void)registerService:(id)a0 forProcess:(id)a1;
- (void)waitForService:(id)a0;

@end
