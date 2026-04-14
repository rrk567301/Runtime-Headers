@class NSNumber, NSString;

@interface CHIPPluginMutableAccessorySetupPayload : CHIPPluginAccessorySetupPayload

@property (nonatomic) BOOL hasShortDiscriminator;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *setupPayloadString;
@property (nonatomic) BOOL requiresCustomFlow;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
