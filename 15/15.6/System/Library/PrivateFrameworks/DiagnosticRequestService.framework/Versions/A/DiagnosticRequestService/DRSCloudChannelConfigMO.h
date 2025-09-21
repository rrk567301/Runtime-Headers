@class NSNumber;

@interface DRSCloudChannelConfigMO : NSManagedObject

@property (nonatomic) short channelType;
@property (nonatomic) short environment;
@property (nonatomic) char overridesDeviceDefault;
@property (nonatomic) short platform;
@property (copy, nonatomic) NSNumber *populationSliceNumber;

+ (id)fetchRequest;

@end
