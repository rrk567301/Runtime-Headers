@class NSString, NSNumber, NSData;

@interface CHIPGeneralDiagnosticsClusterNetworkInterfaceType : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *fabricConnected;
@property (retain, nonatomic) NSNumber *offPremiseServicesReachableIPv4;
@property (retain, nonatomic) NSNumber *offPremiseServicesReachableIPv6;
@property (retain, nonatomic) NSData *hardwareAddress;
@property (retain, nonatomic) NSNumber *type;

- (id)init;
- (void).cxx_destruct;

@end
