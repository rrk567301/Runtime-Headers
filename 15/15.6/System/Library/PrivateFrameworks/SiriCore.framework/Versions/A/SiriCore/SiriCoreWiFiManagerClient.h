@interface SiriCoreWiFiManagerClient : NSObject {
    long long _rssi;
    long long _snr;
    long long _cca;
}

- (void)dealloc;
- (id)init;
- (char)isWifiEnabled;
- (void)acquireWiFiAssertion:(long long)a0;
- (char)hasAssociatedNetworkWithRSSI:(long long *)a0 andSNR:(long long *)a1 andCCA:(long long *)a2 andPhyMode:(id *)a3 andChannelInfo:(id *)a4 isCaptive:(char *)a5;
- (char)hasAssociatedNetworkWithRSSI:(long long *)a0 andSNR:(long long *)a1 andPhyMode:(id *)a2 andChannelInfo:(id *)a3 isCaptive:(char *)a4;
- (void)registerOneShotEnabledHandler:(id /* block */)a0;
- (void)releaseWiFiAssertion;

@end
