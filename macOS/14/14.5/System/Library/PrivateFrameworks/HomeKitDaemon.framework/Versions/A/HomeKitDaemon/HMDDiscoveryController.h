@interface HMDDiscoveryController : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ rpDiscoveryClient;
    void /* unknown type, empty encoding */ rpInfraWifiDiscoveryClient;
    void /* unknown type, empty encoding */ sfDiscoveryClient;
    void /* unknown type, empty encoding */ rapportDiscoveryClientFactory;
    void /* unknown type, empty encoding */ sharingDiscoveryClientFactory;
    void /* unknown type, empty encoding */ visibleSFDevices;
}

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)obtainNetworkVisibleDevicesProto;
- (id)obtainSFVisibleDevicesProto;

@end
