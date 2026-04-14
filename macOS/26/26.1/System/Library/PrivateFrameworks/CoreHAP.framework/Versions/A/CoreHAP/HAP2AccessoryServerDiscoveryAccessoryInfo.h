@class NSString, HAPDeviceID, NSDictionary;

@interface HAP2AccessoryServerDiscoveryAccessoryInfo : HAP2LoggingObject

@property (readonly, nonatomic) HAPDeviceID *deviceID;
@property (readonly, copy, nonatomic) NSString *airPlayDeviceUUIDString;
@property (readonly, nonatomic) NSDictionary *rawDiscoveryInfo;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDeviceID:(id)a0 rawDiscoveryInfo:(id)a1;

@end
