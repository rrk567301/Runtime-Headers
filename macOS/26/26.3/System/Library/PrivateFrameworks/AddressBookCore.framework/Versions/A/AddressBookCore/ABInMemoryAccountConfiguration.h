@class NSString, NSMutableDictionary;

@interface ABInMemoryAccountConfiguration : ABAbstractAccountConfiguration <ABAccountConfigurationInternal> {
    NSMutableDictionary *_configuration;
}

@property (readonly) unsigned long long saveCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)save:(id *)a0;
- (id)init;
- (void)setConfiguration:(id)a0;
- (void)dealloc;
- (id)primitiveValueForKey:(id)a0;
- (void)setPrimitiveValue:(id)a0 forKey:(id)a1;
- (id)allPersistentKeysAndValues;

@end
