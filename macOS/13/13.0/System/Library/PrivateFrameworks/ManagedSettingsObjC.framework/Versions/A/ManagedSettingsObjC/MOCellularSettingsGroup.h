@class NSNumber, MOBoolSettingMetadata;

@interface MOCellularSettingsGroup : MOSettingsGroup

@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *lockAppCellularDataMetadata;
@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *lockCellularPlanMetadata;
@property (class, readonly, retain, nonatomic) MOBoolSettingMetadata *lockESIMMetadata;

@property (retain, nonatomic) NSNumber *lockAppCellularData;
@property (retain, nonatomic) NSNumber *lockCellularPlan;
@property (retain, nonatomic) NSNumber *lockESIM;

+ (id)groupName;

@end
