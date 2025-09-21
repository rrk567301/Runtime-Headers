@class NSString;

@interface ABAbstractAccountConfiguration : NSObject <ABAccountConfigurationInternal> {
    char _invalid;
}

@property (readonly, getter=isInvalid) char invalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)boolForKey:(id)a0;
- (void)invalidate;
- (id)objectForKey:(id)a0;
- (void)setEnabled:(char)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (char)isEnabled;
- (id)valueForUndefinedKey:(id)a0;
- (void)setBool:(char)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (char)save:(id *)a0;
- (id)primitiveValueForKey:(id)a0;
- (void)setPrimitiveValue:(id)a0 forKey:(id)a1;
- (char)isSearchable;
- (void)setSearchable:(char)a0;
- (id)allPersistentKeysAndValues;
- (char)prmitiveBoolForKey:(id)a0;
- (void)setPrimitiveBool:(char)a0 forKey:(id)a1;

@end
