@class NSSet, MOApplicationSetSettingMetadata, MOBoolSettingMetadata, MOStringSetSettingMetadata, NSNumber;

@interface MODeviceActivitySettingsGroup : MOSettingsGroup

@property (class, readonly, retain, nonatomic) MOApplicationSetSettingMetadata *allowedClientsMetadata;
@property (class, readonly, retain, nonatomic) MOStringSetSettingMetadata *sharingAppleIDsMetadata;
@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *shareAcrossDevicesMetadata;

@property (retain, nonatomic) NSSet *allowedClients;
@property (retain, nonatomic) NSSet *sharingAppleIDs;
@property (retain, nonatomic) NSNumber *shareAcrossDevices;

+ (id)groupName;

@end
