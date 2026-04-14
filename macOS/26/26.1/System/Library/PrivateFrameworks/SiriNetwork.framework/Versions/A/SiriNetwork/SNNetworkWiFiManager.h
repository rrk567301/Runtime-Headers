@class SNNetworkWiFiManagerInternal;

@interface SNNetworkWiFiManager : NSObject

@property (retain, nonatomic) SNNetworkWiFiManagerInternal *underlyingNetworkWiFiManager;

- (BOOL)isWiFiEnabled;
- (void).cxx_destruct;
- (id)init;
- (id)getWiFiRecord;
- (BOOL)registerOneShotPowerStateDidChangeForWiFiInterface:(id /* block */)a0;

@end
