@class NSNumber;

@interface HMDHomeConfigurationModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSNumber *configurationVersion;
@property (nonatomic) char homeHasLocalChanges;

+ (id)properties;

@end
