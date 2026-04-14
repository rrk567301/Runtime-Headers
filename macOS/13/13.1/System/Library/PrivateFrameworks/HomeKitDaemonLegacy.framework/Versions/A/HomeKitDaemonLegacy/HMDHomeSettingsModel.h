@class NSNumber;

@interface HMDHomeSettingsModel : HMDHomeSettingsBaseModel

@property (copy, nonatomic) NSNumber *automaticSoftwareUpdateEnabled;
@property (copy, nonatomic) NSNumber *automaticThirdPartyAccessorySoftwareUpdateEnabled;

+ (id)properties;
+ (id)modelIDForHomeUUID:(id)a0;
+ (id)defaultModelForHomeUUID:(id)a0;
+ (id)modelNamespace;

@end
