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

- (BOOL)_isMutable;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (void)_removeAllSettings;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (BOOL)isKeyedSettings;
- (id)succinctDescription;
- (id)_sortedSettingsForDescription;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_applyToSettings:(id)a0 preserveDiffs:(BOOL)a1;
- (id)allSettings;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)flagForSetting:(unsigned long long)a0;
- (BOOL)boolForSetting:(unsigned long long)a0;
- (void)_applyToSettings:(id)a0;
- (id)basicDescriptionWithPrefix:(id)a0;
- (void)enumerateFlagsWithBlock:(id /* block */)a0;
- (id)objectForSetting:(unsigned long long)a0;

@end
