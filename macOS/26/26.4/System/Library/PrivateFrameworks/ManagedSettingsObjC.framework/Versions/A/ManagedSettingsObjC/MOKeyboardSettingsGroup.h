@class NSNumber, MOBoolSettingMetadata;

@interface MOKeyboardSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyAutoCorrectionMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyContinuousPathKeyboardMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyDefinitionLookupMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyDictationMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyKeyboardShortcutsMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyMathSolvingKeyboardMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyPredictiveKeyboardMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denySpellCheckMetadata;

@property (retain, nonatomic) NSNumber *denyAutoCorrection;
@property (retain, nonatomic) NSNumber *denyContinuousPathKeyboard;
@property (retain, nonatomic) NSNumber *denyDefinitionLookup;
@property (retain, nonatomic) NSNumber *denyDictation;
@property (retain, nonatomic) NSNumber *denyKeyboardShortcuts;
@property (retain, nonatomic) NSNumber *denyMathSolvingKeyboard;
@property (retain, nonatomic) NSNumber *denyPredictiveKeyboard;
@property (retain, nonatomic) NSNumber *denySpellCheck;

+ (id)groupName;

@end
