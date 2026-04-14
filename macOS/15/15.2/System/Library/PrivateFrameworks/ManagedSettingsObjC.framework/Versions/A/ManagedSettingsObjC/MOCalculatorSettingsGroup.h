@class NSNumber, MOBoolSettingMetadata;

@interface MOCalculatorSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyMathPaperSolvingMetadata;

@property (retain, nonatomic) NSNumber *denyMathPaperSolving;

+ (id)groupName;

@end
