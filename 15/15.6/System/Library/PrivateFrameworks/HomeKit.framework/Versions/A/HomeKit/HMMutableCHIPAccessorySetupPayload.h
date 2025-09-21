@class NSString, NSNumber;

@interface HMMutableCHIPAccessorySetupPayload : HMCHIPAccessorySetupPayload

@property (nonatomic) char hasShortDiscriminator;
@property (copy, nonatomic) NSString *setupPayloadString;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSNumber *deviceTypeID;
@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) char requiresCustomFlow;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
