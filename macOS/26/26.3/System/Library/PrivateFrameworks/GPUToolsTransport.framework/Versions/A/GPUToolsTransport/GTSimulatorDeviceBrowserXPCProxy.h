@class GTServiceConnection, NSSet;

@interface GTSimulatorDeviceBrowserXPCProxy : NSObject <GTSimulatorDeviceBrowser> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
}

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (id)deviceProperties:(id)a0 error:(id *)a1;
- (BOOL)isSimulatorDevice:(id)a0;

@end
