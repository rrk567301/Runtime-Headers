@class ABAccountPersistence;

@interface ABAccountPersistenceAccountConfiguration : ABAbstractAccountConfiguration {
    ABAccountPersistence *_persistence;
}

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)setEnabled:(char)a0;
- (char)isEnabled;
- (char)save:(id *)a0;
- (id)primitiveValueForKey:(id)a0;
- (void)setPrimitiveValue:(id)a0 forKey:(id)a1;
- (id)initWithPersistence:(id)a0;
- (id)allPersistentKeysAndValues;
- (id)initWithAccount:(id)a0 persistence:(id)a1;

@end
