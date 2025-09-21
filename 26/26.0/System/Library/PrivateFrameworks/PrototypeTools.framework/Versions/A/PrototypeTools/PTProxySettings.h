@class PTProxySettingsDefinition, NSMutableDictionary;

@interface PTProxySettings : PTSettings {
    NSMutableDictionary *_values;
}

@property (readonly, nonatomic) PTProxySettingsDefinition *definition;

+ (id)new;
+ (id)proxyWithDefinition:(id)a0;
+ (id)settingsFromArchiveDictionary:(id)a0;
+ (id)settingsOrProxyWithDefinition:(id)a0;

- (id)initWithDefaultValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueForKey:(id)a0;
- (id)module;
- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)_createChildForKey:(id)a0;
- (id)_initWithDefinition:(id)a0;
- (void)restoreDefaultValues;
- (void)restoreFromArchiveDictionary:(id)a0;

@end
