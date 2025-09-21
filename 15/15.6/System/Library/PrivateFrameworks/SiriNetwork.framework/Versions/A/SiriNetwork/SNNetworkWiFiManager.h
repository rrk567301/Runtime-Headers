@class SNNetworkWiFiManagerInternal;

@interface SNNetworkWiFiManager : NSObject

@property (retain, nonatomic) SNNetworkWiFiManagerInternal *underlyingNetworkWiFiManager;

- (id)init;
- (void).cxx_destruct;
- (char)isWiFiEnabled;
- (id)getWiFiRecord;

@end
