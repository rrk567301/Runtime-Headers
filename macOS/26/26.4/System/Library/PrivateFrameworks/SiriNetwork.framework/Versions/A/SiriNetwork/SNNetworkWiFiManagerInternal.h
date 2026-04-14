@interface SNNetworkWiFiManagerInternal : NSObject {
    void /* unknown type, empty encoding */ wifiClient;
    void /* unknown type, empty encoding */ interface;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queueGroup;
}

@property (class, nonatomic, readonly) SNNetworkWiFiManagerInternal *shared;

- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)a0;
- (BOOL)isWiFiEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)releaseWiFiAssertion;
- (void)acquireWiFiAssertionWithWifiAssertionTypeRawValue:(long long)a0;
- (id)getWiFiRecordRepresentation;
- (BOOL)registerOneShotPowerStateDidChangeForWiFiInterface:(id /* block */)a0;

@end
