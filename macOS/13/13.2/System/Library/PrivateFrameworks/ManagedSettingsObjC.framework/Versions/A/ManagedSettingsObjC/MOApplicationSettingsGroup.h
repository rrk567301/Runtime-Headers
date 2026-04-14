@class NSSet, MOApplicationSetSettingMetadata, MOBoolSettingMetadata, NSNumber;

@interface MOApplicationSettingsGroup : MOSettingsGroup

@property (class, readonly, retain, nonatomic) MOApplicationSetSettingMetadata *blockedApplicationsMetadata;
@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *denyAppInstallationMetadata;
@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *denyAppRemovalMetadata;
@property (class, readonly, retain, nonatomic) MOApplicationSetSettingMetadata *unremovableApplicationsMetadata;

@property (retain, nonatomic) NSSet *blockedApplications;
@property (retain, nonatomic) NSNumber *denyAppInstallation;
@property (retain, nonatomic) NSNumber *denyAppRemoval;
@property (retain, nonatomic) NSSet *unremovableApplications;

+ (id)groupName;

@end
