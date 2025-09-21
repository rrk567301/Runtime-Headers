@class NSString, NSOrderedSet, BSSettings, BSKeyedSettings;

@interface FBSSettings : NSObject <FBSSettingsSubclass, BSXPCSecureCoding, BSXPCCoding, BSDescriptionProviding, FBSSettings, NSCopying, NSMutableCopying> {
    Class _baseClass;
    BSKeyedSettings *_settings;
    BSKeyedSettings *_localSettings;
    BSSettings *_legacyLocalSettings;
    BSSettings *_legacyOtherSettings;
    FBSSettings *_progenitor;
    NSOrderedSet *_orderedExtensions;
    char _mutable;
    char _needsCoW;
}

@property (readonly, copy, nonatomic) BSSettings *otherSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (Class)_baseClass;
+ (Class)_mutableClass;
+ (id)allSettings;
+ (char)supportsBSXPCSecureCoding;
+ (Class)mutableSubclass;
+ (Class)_counterpartClass;
+ (id)_descriptionProvider;
+ (Class)_diffClass;
+ (id)_legacyDescriptionProvider;
+ (void)_setCounterpartClass:(Class)a0;
+ (id)_settingsExtensionsForSceneExtension:(Class)a0;
+ (id)allSettingsFromExtension:(Class)a0;
+ (id)allSettingsFromProtocol:(id)a0;
+ (Class)immutableSubclass;
+ (id)settingForProperty:(SEL)a0;
+ (id)settingForSubclassProperty:(SEL)a0;
+ (Class)subclassExtension;
+ (id)subclassExtensions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copy:(id /* block */)a0;
- (id)initWithSettings:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (char)appendDescriptionToBuilder:(id)a0 forFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (char)settings:(id)a0 appendDescriptionToBuilder:(id)a1 forFlag:(long long)a2 object:(id)a3 ofSetting:(unsigned long long)a4;
- (id)settings:(id)a0 keyDescriptionForSetting:(unsigned long long)a1;
- (id)settings:(id)a0 valueDescriptionForFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (void)setValue:(id)a0 forProperty:(SEL)a1;
- (id)valueForProperty:(SEL)a0 expectedClass:(Class)a1;
- (void)_addSceneExtension:(Class)a0;
- (void)_addSceneExtension:(Class)a0 applyingSettings:(id)a1;
- (id)_allSceneExtensions;
- (void)_appendToDescriptionBuilder:(id)a0;
- (id)_copyClearingProgenitor:(id /* block */)a0;
- (char)_hasAdditionalDescription;
- (char)_hasAnySceneExtension;
- (char)_indirect_isEmpty;
- (char)_isEmptyForCoding:(char)a0;
- (char)_isEqualToSettings:(id)a0;
- (id)_progenitor;
- (void)_removeAllSceneExtensions;
- (void)_removeSceneExtension:(Class)a0;
- (void)_removeVolatileSettings;
- (id)_sceneExtensionNames;
- (char)conformsToExtension:(Class)a0;
- (char)containsSetting:(id)a0;
- (id)mutableCopy:(id /* block */)a0;
- (id)valueForSetting:(id)a0;

@end
