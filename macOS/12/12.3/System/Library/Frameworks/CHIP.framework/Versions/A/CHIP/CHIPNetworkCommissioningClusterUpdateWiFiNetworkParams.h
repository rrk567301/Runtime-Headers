@class NSData, NSNumber;

@interface CHIPNetworkCommissioningClusterUpdateWiFiNetworkParams : NSObject

@property (retain, nonatomic) NSData *ssid;
@property (retain, nonatomic) NSData *credentials;
@property (retain, nonatomic) NSNumber *breadcrumb;
@property (retain, nonatomic) NSNumber *timeoutMs;

- (id)init;
- (void).cxx_destruct;

@end
