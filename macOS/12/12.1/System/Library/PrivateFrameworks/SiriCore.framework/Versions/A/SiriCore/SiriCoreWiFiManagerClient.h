@interface SiriCoreWiFiManagerClient : NSObject {
    long long _rssi;
    long long _snr;
}

- (void)dealloc;
- (id)init;
- (BOOL)isWifiEnabled;
- (void)releaseWiFiAssertion;
- (void)acquireWiFiAssertion:(long long)a0;
- (BOOL)hasAssociatedNetworkWithRSSI:(long long *)a0 andSNR:(long long *)a1 andPhyMode:(id *)a2 andChannelInfo:(id *)a3 isCaptive:(BOOL *)a4;
- (void)registerOneShotEnabledHandler:(id /* block */)a0;

@end
