@class NSString, BSMutableIntegerMap;
@protocol BSSettingDescriptionProvider;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding, NSSecureCoding, BSDescriptionProviding> {
    BSMutableIntegerMap *_settingToFlagMap;
    BSMutableIntegerMap *_settingToObjectMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<BSSettingDescriptionProvider> descriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_mutableClass;
+ (void)_appendObject:(id)a0 toBuilder:(id)a1 forName:(id)a2;
+ (Class)_baseClass;

- (id)initWithSettings:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEmpty;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (id)_sortedSettingsForDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)isKeyedSettings;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)allSettings;
- (id)initWithCoder:(id)a0;
- (void)_removeAllSettings;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isMutable;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void)_applyToSettings:(id)a0 preserveDiffs:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (long long)flagForSetting:(unsigned long long)a0;
- (BOOL)boolForSetting:(unsigned long long)a0;
- (void)_applyToSettings:(id)a0;
- (id)basicDescriptionWithPrefix:(id)a0;
- (void)enumerateFlagsWithBlock:(id /* block */)a0;
- (id)objectForSetting:(unsigned long long)a0;

@end
