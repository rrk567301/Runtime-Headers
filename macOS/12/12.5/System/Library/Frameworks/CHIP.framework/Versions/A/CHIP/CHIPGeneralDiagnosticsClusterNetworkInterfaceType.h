@class NSString, NSArray, NSData, NSNumber;

@interface CHIPGeneralDiagnosticsClusterNetworkInterfaceType : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *isOperational;
@property (retain, nonatomic) NSNumber *offPremiseServicesReachableIPv4;
@property (retain, nonatomic) NSNumber *offPremiseServicesReachableIPv6;
@property (retain, nonatomic) NSData *hardwareAddress;
@property (retain, nonatomic) NSArray *iPv4Addresses;
@property (retain, nonatomic) NSArray *iPv6Addresses;
@property (retain, nonatomic) NSNumber *type;

- (id)init;
- (void).cxx_destruct;

@end
