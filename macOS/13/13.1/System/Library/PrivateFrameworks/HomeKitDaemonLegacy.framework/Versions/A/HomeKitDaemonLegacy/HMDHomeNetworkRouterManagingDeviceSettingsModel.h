@class NSString;

@interface HMDHomeNetworkRouterManagingDeviceSettingsModel : HMDHomeSettingsBaseModel

@property (copy, nonatomic) NSString *primaryNetworkRouterManagingDeviceUUID;

+ (id)properties;
+ (id)modelIDForHomeUUID:(id)a0;
+ (id)defaultModelForHomeUUID:(id)a0;
+ (id)modelNamespace;

- (id)dependentUUIDs;

@end
