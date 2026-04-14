@class NSNumber, NSSet, MOBoolSettingMetadata, MOApplicationSettingMetadata, MODataSetSettingMetadata, MOApplication;

@interface MOAllowedClientSettingsGroup : MOSettingsGroup

@property (class, readonly, retain, nonatomic) MOApplicationSettingMetadata *allowedClientMetadata;
@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *denyMDMEnrollmentMetadata;
@property (class, readonly, retain, nonatomic) MODataSetSettingMetadata *tokenKeysMetadata;

@property (retain, nonatomic) MOApplication *allowedClient;
@property (retain, nonatomic) NSNumber *denyMDMEnrollment;
@property (retain, nonatomic) NSSet *tokenKeys;

+ (id)groupName;

@end
