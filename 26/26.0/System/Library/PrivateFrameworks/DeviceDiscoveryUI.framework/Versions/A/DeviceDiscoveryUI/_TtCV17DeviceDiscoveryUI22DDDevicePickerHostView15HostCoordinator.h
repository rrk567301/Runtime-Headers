@interface _TtCV17DeviceDiscoveryUI22DDDevicePickerHostView15HostCoordinator : NSObject <EXHostViewControllerDelegate, DeviceDiscoveryUI.DDUIHostProtocol> {
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ remoteUIXpcConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)receiveCancellation;
- (void)receiveEndpointWithEndpointDictionary:(id)a0;

@end
