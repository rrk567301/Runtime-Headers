@class NSString, NSDictionary;

@interface SCRCConfiguration : SCRCUserDefaultsBase <SCRCDictionarySpecifierFactoryProtocol, SCRCConfigurationSpecifierFactoryProtocol, NSKeyedUnarchiverDelegate> {
    NSDictionary *_dictionary;
    struct __CFDictionary { } *_factories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedConfiguration;
+ (id)configurationValueForClassKey:(id)a0 withSpecifier:(id)a1;
+ (id)immutableConfigDictionaryFromDictionary:(id)a0;

- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (void)dealloc;
- (id)valueForKey:(id)a0;
- (id)init;
- (id)valueForKeyPath:(id)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)_createConfigDictionary;
- (void)loadConfiguration;
- (void)registerFactory:(Class)a0 forKey:(id)a1;
- (id)scrc_dictionaryValueForClassKey:(id)a0 withSpecifier:(id)a1;

@end
