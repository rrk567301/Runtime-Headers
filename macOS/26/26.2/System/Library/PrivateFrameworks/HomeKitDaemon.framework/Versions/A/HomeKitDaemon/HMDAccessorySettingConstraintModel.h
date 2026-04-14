@class NSNumber, NSData;

@interface HMDAccessorySettingConstraintModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSData *value;

+ (id)schemaHashRoot;
+ (id)properties;

@end
