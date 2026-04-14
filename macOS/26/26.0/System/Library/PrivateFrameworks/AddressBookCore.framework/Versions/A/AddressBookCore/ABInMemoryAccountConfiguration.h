@class NSString, NSMutableDictionary;

@interface ABInMemoryAccountConfiguration : ABAbstractAccountConfiguration <ABAccountConfigurationInternal> {
    NSMutableDictionary *_configuration;
}

@property (readonly) unsigned long long saveCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setConfiguration:(id)a0;
- (BOOL)save:(id *)a0;
- (id)init;
- (id)primitiveValueForKey:(id)a0;
- (void)setPrimitiveValue:(id)a0 forKey:(id)a1;
- (id)allPersistentKeysAndValues;

@end
