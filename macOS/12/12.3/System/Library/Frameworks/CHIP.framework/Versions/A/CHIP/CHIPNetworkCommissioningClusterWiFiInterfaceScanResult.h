@class NSNumber, NSData;

@interface CHIPNetworkCommissioningClusterWiFiInterfaceScanResult : NSObject

@property (retain, nonatomic) NSNumber *security;
@property (retain, nonatomic) NSData *ssid;
@property (retain, nonatomic) NSData *bssid;
@property (retain, nonatomic) NSNumber *channel;
@property (retain, nonatomic) NSNumber *frequencyBand;

- (id)init;
- (void).cxx_destruct;

@end
