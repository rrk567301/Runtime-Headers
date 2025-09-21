@class NSNumber, MOBoolSettingMetadata;

@interface MOEyeReliefSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *forceScreenDistanceOnMetadata;

@property (retain, nonatomic) NSNumber *forceScreenDistanceOn;

+ (id)groupName;

@end
