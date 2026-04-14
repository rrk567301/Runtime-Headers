@class NSNumber, MOBoolSettingMetadata;

@interface MOPasscodeSettingsGroup : MOSettingsGroup

@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *lockPasscodeMetadata;

@property (retain, nonatomic) NSNumber *lockPasscode;

+ (id)groupName;

@end
