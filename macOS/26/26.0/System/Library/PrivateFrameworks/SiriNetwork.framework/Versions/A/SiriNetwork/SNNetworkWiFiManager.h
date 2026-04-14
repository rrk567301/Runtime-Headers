@class SNNetworkWiFiManagerInternal;

@interface SNNetworkWiFiManager : NSObject

@property (retain, nonatomic) SNNetworkWiFiManagerInternal *underlyingNetworkWiFiManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isWiFiEnabled;
- (id)getWiFiRecord;
- (BOOL)registerOneShotPowerStateDidChangeForWiFiInterface:(id /* block */)a0;

@end
