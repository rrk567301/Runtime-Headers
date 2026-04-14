@class GTServiceConnection, NSSet;

@interface GTDeviceCapabilitiesXPCProxy : NSObject <GTDeviceCapabilities> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
}

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (id)daemonDeviceCapabilities;
- (id)deviceCompatibilityCapabilitiesWithHeapDescriptors:(id)a0;
- (id)gpuToolsVersionQuery;
- (id)inferiorEnvironment:(id)a0;

@end
