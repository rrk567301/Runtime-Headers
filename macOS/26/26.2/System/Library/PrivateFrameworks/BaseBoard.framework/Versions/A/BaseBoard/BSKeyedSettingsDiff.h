@interface BSKeyedSettingsDiff : BSSettingsDiff

+ (id)diffFromSettings:(id)a0 toSettings:(id)a1;
+ (Class)_removalClass;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (id)copyWithKeys:(id)a0;
- (unsigned long long)_diffTypesForSetting:(unsigned long long)a0;
- (unsigned long long)_diffTypesForKey:(id)a0;
- (id)copyApplyingDiff:(id)a0;
- (void)inspectKeyedChangesWithBlock:(id /* block */)a0;
- (id)allKeys;
- (BOOL)_isKeyed;
- (void)applyToSettings:(id)a0;
- (id)copyWithSettings:(id)a0;
- (id)allSettings;

@end
