@class ABAccountPersistence;

@interface ABAccountPersistenceAccountConfiguration : ABAbstractAccountConfiguration {
    ABAccountPersistence *_persistence;
}

- (BOOL)isEnabled;
- (id)initWithPersistence:(id)a0;
- (BOOL)save:(id *)a0;
- (id)debugDescription;
- (id)description;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)primitiveValueForKey:(id)a0;
- (void)setPrimitiveValue:(id)a0 forKey:(id)a1;
- (id)allPersistentKeysAndValues;
- (id)initWithAccount:(id)a0 persistence:(id)a1;

@end
