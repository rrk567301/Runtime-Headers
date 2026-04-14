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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)boolForSetting:(unsigned long long)a0;
- (BOOL)isKeyedSettings;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (long long)flagForSetting:(unsigned long long)a0;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (void)_removeAllSettings;
- (id)_valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2 multilinePrefix:(id)a3;
- (id)allSettings;
- (id)basicDescriptionWithPrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)enumerateFlagsWithBlock:(id /* block */)a0;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)objectForSetting:(unsigned long long)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
