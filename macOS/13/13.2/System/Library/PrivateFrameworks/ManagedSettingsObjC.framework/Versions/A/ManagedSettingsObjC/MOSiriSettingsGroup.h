@class NSNumber, MOBoolSettingMetadata;

@interface MOSiriSettingsGroup : MOSettingsGroup

@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *denySiriMetadata;

@property (retain, nonatomic) NSNumber *denySiri;

+ (id)groupName;

@end
