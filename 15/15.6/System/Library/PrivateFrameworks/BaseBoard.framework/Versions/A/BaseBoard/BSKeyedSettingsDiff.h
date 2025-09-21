@interface BSKeyedSettingsDiff : BSSettingsDiff

+ (Class)_removalClass;
+ (id)diffFromSettings:(id)a0 toSettings:(id)a1;
+ (char)supportsBSXPCSecureCoding;

- (id)allKeys;
- (unsigned long long)_diffTypesForKey:(id)a0;
- (unsigned long long)_diffTypesForSetting:(unsigned long long)a0;
- (char)_isKeyed;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (id)allSettings;
- (void)applyToSettings:(id)a0;
- (id)copyWithKeys:(id)a0;
- (id)copyWithSettings:(id)a0;
- (void)inspectKeyedChangesWithBlock:(id /* block */)a0;

@end
