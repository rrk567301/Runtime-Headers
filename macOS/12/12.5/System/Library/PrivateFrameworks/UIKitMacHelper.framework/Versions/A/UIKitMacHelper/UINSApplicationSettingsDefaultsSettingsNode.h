@class NSString;

@interface UINSApplicationSettingsDefaultsSettingsNode : UINSApplicationSettingsNode

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) id defaultValue;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2;
- (void)_copyIvarsToNewInstance:(id)a0;
- (BOOL)_isUserSettable;
- (id)_copyWithFilter:(long long)a0;
- (id)_initWithDictionary:(id)a0 stringsTableName:(id)a1 parentRootNode:(id)a2 fallbackDefaultValue:(id)a3;

@end
