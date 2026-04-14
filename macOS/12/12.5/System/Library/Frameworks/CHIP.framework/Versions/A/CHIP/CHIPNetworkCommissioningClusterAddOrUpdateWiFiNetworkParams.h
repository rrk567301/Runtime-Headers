@class NSData, NSNumber;

@interface CHIPNetworkCommissioningClusterAddOrUpdateWiFiNetworkParams : NSObject

@property (retain, nonatomic) NSData *ssid;
@property (retain, nonatomic) NSData *credentials;
@property (retain, nonatomic) NSNumber *breadcrumb;

- (id)init;
- (void).cxx_destruct;

@end
