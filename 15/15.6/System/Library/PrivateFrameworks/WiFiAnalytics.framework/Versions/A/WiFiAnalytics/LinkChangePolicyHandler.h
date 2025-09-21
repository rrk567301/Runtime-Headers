@class AnalyticsStoreMOHandler;

@interface LinkChangePolicyHandler : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *storeMOHandler;

- (void).cxx_destruct;
- (void)checkAndApplyColocatedNetworkScope:(id)a0 bssid:(id)a1 ipAddr:(int)a2 routerIp:(int)a3 routerMAC:(id)a4;
- (char)checkIpConfigChangeAndInvalidateScope:(id)a0 bssid:(id)a1 ipAddr:(int)a2 routerIp:(int)a3 routerMAC:(id)a4;
- (id)initWithAnalyticsStore:(id)a0;
- (void)pruneNetworksFailingBssidPatternAndIpConfigChangeChecks:(id)a0 ipAddr:(int)a1 routerIp:(int)a2 routerMAC:(id)a3;
- (void)pruneNetworksNotInRangeOf:(id)a0 networks:(id)a1;
- (void)pruneNetworksWithMoreThanOneBssidFromSet:(id)a0;
- (void)setLinkChange:(char)a0 ssid:(id)a1 bssid:(id)a2 reason:(unsigned long long)a3 subReason:(unsigned long long)a4 rssi:(long long)a5;

@end
