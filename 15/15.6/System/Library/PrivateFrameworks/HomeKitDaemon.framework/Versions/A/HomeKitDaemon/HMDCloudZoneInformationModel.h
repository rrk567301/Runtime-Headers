@class NSString;

@interface HMDCloudZoneInformationModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *ownerName;
@property (nonatomic) char requiresHomeManagerUpdate;

+ (id)properties;

- (id)dependentUUIDs;

@end
