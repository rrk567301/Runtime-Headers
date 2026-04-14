@class NSNumber, NSString;

@interface CHIPNetworkCommissioningClusterThreadInterfaceScanResult : NSObject

@property (retain, nonatomic) NSNumber *panId;
@property (retain, nonatomic) NSNumber *extendedPanId;
@property (retain, nonatomic) NSString *networkName;
@property (retain, nonatomic) NSNumber *channel;
@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSNumber *extendedAddress;
@property (retain, nonatomic) NSNumber *rssi;
@property (retain, nonatomic) NSNumber *lqi;

- (id)init;
- (void).cxx_destruct;

@end
