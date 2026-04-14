@class BSMutableIntegerMap, NSMutableSet;

@interface BSKeyedSettings : BSSettings {
    NSMutableSet *_keys;
    BSMutableIntegerMap *_keyMap;
}

+ (BOOL)supportsSecureCoding;
+ (Class)_baseClass;
+ (Class)_mutableClass;

- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)enumerateKeyedFlagsWithBlock:(id /* block */)a0;
- (void)enumerateKeyedObjectsWithBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_sortedSettingsForDescription;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isKeyedSettings;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (void)_applyToSettings:(id)a0 preserveDiffs:(BOOL)a1;
- (long long)flagForKey:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (void)_removeAllSettings;
- (id)keyForSetting:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)allKeys;

@end
