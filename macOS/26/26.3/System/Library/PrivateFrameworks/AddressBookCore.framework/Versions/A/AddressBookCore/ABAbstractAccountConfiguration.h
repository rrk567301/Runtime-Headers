@class NSString;

@interface ABAbstractAccountConfiguration : NSObject <ABAccountConfigurationInternal> {
    BOOL _invalid;
}

@property (readonly, getter=isInvalid) BOOL invalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)isEnabled;
- (BOOL)save:(id *)a0;
- (BOOL)boolForKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setSearchable:(BOOL)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)isSearchable;
- (id)primitiveValueForKey:(id)a0;
- (void)setPrimitiveValue:(id)a0 forKey:(id)a1;
- (id)allPersistentKeysAndValues;
- (BOOL)prmitiveBoolForKey:(id)a0;
- (void)setPrimitiveBool:(BOOL)a0 forKey:(id)a1;

@end
