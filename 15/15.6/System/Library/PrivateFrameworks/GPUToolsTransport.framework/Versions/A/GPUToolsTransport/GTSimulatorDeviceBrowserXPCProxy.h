@class GTServiceConnection, NSSet;

@interface GTSimulatorDeviceBrowserXPCProxy : NSObject <GTSimulatorDeviceBrowser> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
}

- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)deviceProperties:(id)a0 error:(id *)a1;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (char)isSimulatorDevice:(id)a0;

@end
