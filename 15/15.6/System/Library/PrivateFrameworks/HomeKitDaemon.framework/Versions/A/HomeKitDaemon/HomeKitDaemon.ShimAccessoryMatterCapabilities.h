@interface HomeKitDaemon.ShimAccessoryMatterCapabilities : _TtCs12_SwiftObject <HMDAccessoryMatterCapabilitiesProtocol> {
    void /* unknown type, empty encoding */ impl;
}

- (char)isCapabilityAllowed:(long long)a0 vendorID:(long long)a1 productID:(long long)a2;
- (char)isCapabilityAllowed:(long long)a0 vendorID:(long long)a1 productID:(long long)a2 firmwareVersion:(long long)a3;

@end
