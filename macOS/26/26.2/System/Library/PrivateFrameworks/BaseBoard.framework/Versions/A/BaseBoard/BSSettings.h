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

+ (Class)_baseClass;
+ (Class)_mutableClass;
+ (void)_appendObject:(id)a0 toBuilder:(id)a1 forName:(id)a2;

- (BOOL)_isMutable;
- (id)initWithSettings:(id)a0;
- (void)_applyToSettings:(id)a0 preserveDiffs:(BOOL)a1;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)_removeAllSettings;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_sortedSettingsForDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)succinctDescription;
- (id)init;
- (BOOL)isKeyedSettings;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)allSettings;
- (long long)flagForSetting:(unsigned long long)a0;
- (BOOL)boolForSetting:(unsigned long long)a0;
- (void)_applyToSettings:(id)a0;
- (id)basicDescriptionWithPrefix:(id)a0;
- (void)enumerateFlagsWithBlock:(id /* block */)a0;
- (id)objectForSetting:(unsigned long long)a0;

@end
