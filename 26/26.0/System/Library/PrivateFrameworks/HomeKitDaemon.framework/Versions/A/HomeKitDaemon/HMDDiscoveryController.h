@interface HMDDiscoveryController : NSObject <NSObject> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ discoveryNeedsAssertion;
    void /* unknown type, empty encoding */ isDiscoveryAsserted;
    void /* unknown type, empty encoding */ rpInfraWifiDiscoveryClient;
    void /* unknown type, empty encoding */ sfDiscoveryClient;
    void /* unknown type, empty encoding */ rapportDiscoveryClientFactory;
    void /* unknown type, empty encoding */ sharingDiscoveryClientFactory;
    void /* unknown type, empty encoding */ visibleSFDevices;
    void /* unknown type, empty encoding */ assertions;
}

- (void)start;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDiscoveryNeedsAssertion:(BOOL)a0;
- (id)obtainNetworkVisibleDevicesProto;
- (id)obtainSFVisibleDevicesProto;

@end
