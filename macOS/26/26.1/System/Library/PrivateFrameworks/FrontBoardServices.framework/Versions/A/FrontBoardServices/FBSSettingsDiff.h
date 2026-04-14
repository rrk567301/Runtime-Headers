@class NSString, NSSet, BSSettingsDiff;

@interface FBSSettingsDiff : NSObject <BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding> {
    BSSettingsDiff *_diff;
    BSSettingsDiff *_legacyDiff;
    BSSettingsDiff *_localDiff;
    BSSettingsDiff *_legacyLocalDiff;
    Class _settingsClass;
    NSSet *_changedSettings;
    NSSet *_changedLegacySettings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_settingsClass;
+ (id)diffFromSettings:(id)a0 toSettings:(id)a1;
+ (id)diffByApplyingDiff:(id)a0 toDiff:(id)a1;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void)inspectChangesWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)init;
- (BOOL)containsProperty:(SEL)a0;
- (id)settings:(id)a0 keyDescriptionForSetting:(unsigned long long)a1;
- (id)settings:(id)a0 valueDescriptionForFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (id)changedSettings;
- (id)_changedSettings;
- (BOOL)_isSignifcant;
- (void)applyToMutableSettings:(id)a0;
- (BOOL)containsLegacySetting:(unsigned long long)a0;
- (BOOL)containsPropertyFromExtension:(Class)a0;
- (BOOL)containsSetting:(id)a0;
- (BOOL)containsSettingNamed:(id)a0;
- (void)evaluateWithInspector:(id)a0 context:(void *)a1;
- (id)initWithChangesFromSettings:(id)a0 toSettings:(id)a1;
- (void)inspectOtherChangesWithBlock:(id /* block */)a0;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)a0;

@end
