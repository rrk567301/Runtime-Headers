@class ABAccountPersistence;

@interface ABAccountPersistenceAccountConfiguration : ABAbstractAccountConfiguration {
    ABAccountPersistence *_persistence;
}

- (BOOL)save:(id *)a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithPersistence:(id)a0;
- (id)primitiveValueForKey:(id)a0;
- (void)setPrimitiveValue:(id)a0 forKey:(id)a1;
- (id)allPersistentKeysAndValues;
- (id)initWithAccount:(id)a0 persistence:(id)a1;

@end
