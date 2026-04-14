@class BSMutableIntegerMap, NSMutableSet;

@interface BSKeyedSettings : BSSettings {
    NSMutableSet *_keys;
    BSMutableIntegerMap *_keyMap;
}

+ (BOOL)supportsSecureCoding;
+ (Class)_mutableClass;
+ (Class)_baseClass;

- (BOOL)boolForKey:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (id)initWithSettings:(id)a0;
- (void)_removeAllSettings;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateKeyedObjectsWithBlock:(id /* block */)a0;
- (BOOL)isKeyedSettings;
- (id)keyForSetting:(unsigned long long)a0;
- (id)_sortedSettingsForDescription;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)enumerateKeyedFlagsWithBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (long long)flagForKey:(id)a0;
- (void)_applyToSettings:(id)a0 preserveDiffs:(BOOL)a1;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (void).cxx_destruct;

@end
