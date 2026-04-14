@class NSString;

@interface HMDAccessorySettingGroupModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSString *name;

+ (id)schemaHashRoot;
+ (id)properties;

@end
