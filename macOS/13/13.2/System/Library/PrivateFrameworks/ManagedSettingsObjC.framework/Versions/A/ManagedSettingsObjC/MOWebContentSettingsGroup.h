@class MOWebContentFilterPolicySettingMetadata, MOWebContentFilterPolicy;

@interface MOWebContentSettingsGroup : MOSettingsGroup

@property (class, readonly, retain, nonatomic) MOWebContentFilterPolicySettingMetadata *blockedByFilterMetadata;

@property (retain, nonatomic) MOWebContentFilterPolicy *blockedByFilter;

+ (id)groupName;

@end
