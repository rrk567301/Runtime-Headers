@class NSNumber;

@interface MOBoolSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) long long combineOperator;
@property (readonly, nonatomic) NSNumber *defaultValue;

- (char)_combine:(char)a0 with:(char)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithSettingName:(id)a0 defaultBool:(char)a1 combineOperator:(long long)a2 isPublic:(char)a3 scope:(id)a4 isPrivacySensitive:(char)a5;
- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;

@end
