@class NSString;

@interface HMDAccessoryMetricTransportDetails : HMFObject

@property (copy, nonatomic) NSString *accessoryProtocol;
@property (nonatomic) char isAccessoryBatteryPowered;
@property (nonatomic) char isAccessoryBridged;
@property (nonatomic) char isThreadAccessory;
@property (nonatomic) char isHH2Enabled;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithAccessory:(id)a0;

@end
