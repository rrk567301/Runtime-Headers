@class NSData, NSNumber;

@interface CHIPNetworkCommissioningClusterScanNetworksParams : NSObject

@property (retain, nonatomic) NSData *ssid;
@property (retain, nonatomic) NSNumber *breadcrumb;
@property (retain, nonatomic) NSNumber *timeoutMs;

- (id)init;
- (void).cxx_destruct;

@end
