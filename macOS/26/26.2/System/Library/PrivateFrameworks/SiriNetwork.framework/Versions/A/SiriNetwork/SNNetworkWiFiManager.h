@class SNNetworkWiFiManagerInternal;

@interface SNNetworkWiFiManager : NSObject

@property (retain, nonatomic) SNNetworkWiFiManagerInternal *underlyingNetworkWiFiManager;

- (void).cxx_destruct;
- (BOOL)isWiFiEnabled;
- (id)init;
- (id)getWiFiRecord;
- (BOOL)registerOneShotPowerStateDidChangeForWiFiInterface:(id /* block */)a0;

@end
