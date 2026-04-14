@class NSMutableDictionary;

@interface BSKeyedSettings : BSSettings {
    NSMutableDictionary *_keyMap;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_init;
- (id)objectForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)enumerateKeyedObjectsWithBlock:(id /* block */)a0;
- (BOOL)isKeyedSettings;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (void)_removeAllSettings;
- (id)_valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2 multilinePrefix:(id)a3;
- (void)enumerateKeyedFlagsWithBlock:(id /* block */)a0;
- (long long)flagForKey:(id)a0;
- (id)initWithXPCDictionary:(id)a0;

@end
