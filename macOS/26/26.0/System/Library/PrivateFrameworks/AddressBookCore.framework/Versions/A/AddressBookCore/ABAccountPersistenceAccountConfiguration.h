@class ABAccountPersistence;

@interface ABAccountPersistenceAccountConfiguration : ABAbstractAccountConfiguration {
    ABAccountPersistence *_persistence;
}

- (id)initWithPersistence:(id)a0;
- (id)debugDescription;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)a0;
- (BOOL)save:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)primitiveValueForKey:(id)a0;
- (void)setPrimitiveValue:(id)a0 forKey:(id)a1;
- (id)allPersistentKeysAndValues;
- (id)initWithAccount:(id)a0 persistence:(id)a1;

@end
