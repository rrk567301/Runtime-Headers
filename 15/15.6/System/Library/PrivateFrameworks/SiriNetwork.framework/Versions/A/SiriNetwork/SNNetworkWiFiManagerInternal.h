@interface SNNetworkWiFiManagerInternal : NSObject {
    void /* unknown type, empty encoding */ wifiClient;
    void /* unknown type, empty encoding */ interface;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queueGroup;
}

@property (class, nonatomic, readonly) SNNetworkWiFiManagerInternal *shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isWiFiEnabled;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)releaseWiFiAssertion;
- (void)acquireWiFiAssertionWithWifiAssertionTypeRawValue:(long long)a0;
- (id)getWiFiRecordRepresentation;
- (char)registerOneShotPowerStateDidChangeForWiFiInterface:(id /* block */)a0;

@end
