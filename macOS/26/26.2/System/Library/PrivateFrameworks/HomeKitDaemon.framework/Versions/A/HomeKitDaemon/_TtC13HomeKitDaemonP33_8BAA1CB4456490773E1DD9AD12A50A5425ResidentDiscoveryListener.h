@interface _TtC13HomeKitDaemonP33_8BAA1CB4456490773E1DD9AD12A50A5425ResidentDiscoveryListener : NSObject <HMDResidentDeviceManagerDiscoveryRequester> {
    void /* unknown type, empty encoding */ continuation;
}

- (void).cxx_destruct;
- (id)init;
- (void)residentDeviceManager:(id)a0 didCompleteDiscoveryWithPrimaryResidentDevice:(id)a1 error:(id)a2;
- (void)residentDeviceManager:(id)a0 didNotCompleteDiscoveryWithError:(id)a1;

@end
