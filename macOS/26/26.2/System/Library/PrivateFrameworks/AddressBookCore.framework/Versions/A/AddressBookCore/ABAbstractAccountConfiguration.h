@class NSString;

@interface ABAbstractAccountConfiguration : NSObject <ABAccountConfigurationInternal> {
    BOOL _invalid;
}

@property (readonly, getter=isInvalid) BOOL invalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)save:(id *)a0;
- (void)invalidate;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setSearchable:(BOOL)a0;
- (BOOL)isSearchable;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (id)objectForKey:(id)a0;
- (id)primitiveValueForKey:(id)a0;
- (void)setPrimitiveValue:(id)a0 forKey:(id)a1;
- (id)allPersistentKeysAndValues;
- (BOOL)prmitiveBoolForKey:(id)a0;
- (void)setPrimitiveBool:(BOOL)a0 forKey:(id)a1;

@end
