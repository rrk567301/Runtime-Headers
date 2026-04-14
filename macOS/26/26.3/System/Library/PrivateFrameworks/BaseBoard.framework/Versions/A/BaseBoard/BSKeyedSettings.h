@class BSMutableIntegerMap, NSMutableSet;

@interface BSKeyedSettings : BSSettings {
    NSMutableSet *_keys;
    BSMutableIntegerMap *_keyMap;
}

+ (BOOL)supportsSecureCoding;
+ (Class)_mutableClass;
+ (Class)_baseClass;

- (id)initWithSettings:(id)a0;
- (id)allKeys;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (id)_sortedSettingsForDescription;
- (long long)flagForKey:(id)a0;
- (BOOL)isKeyedSettings;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_removeAllSettings;
- (void)enumerateKeyedObjectsWithBlock:(id /* block */)a0;
- (id)keyForSetting:(unsigned long long)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void)_applyToSettings:(id)a0 preserveDiffs:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateKeyedFlagsWithBlock:(id /* block */)a0;

@end
