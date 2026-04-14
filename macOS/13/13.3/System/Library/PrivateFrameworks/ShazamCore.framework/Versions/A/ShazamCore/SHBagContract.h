@class NSString, NSMutableDictionary, NSNumberFormatter, NSDictionary, AMSBag;

@interface SHBagContract : NSObject

@property (readonly, copy) NSString *baseDictionaryKey;
@property (readonly) NSMutableDictionary *mutableDefaultValues;
@property (readonly) AMSBag *bag;
@property (readonly) NSNumberFormatter *numberFormatter;
@property (readonly) NSDictionary *defaultValues;
@property BOOL throwOnError;

- (void).cxx_destruct;
- (id)stringForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (id)defaultValueForKey:(id)a0;
- (BOOL)booleanForKey:(id)a0;
- (void)addBagKey:(id)a0 defaultValue:(id)a1;
- (BOOL)booleanBackedByStringForKey:(id)a0;
- (double)doubleBackedByStringForKey:(id)a0;
- (id)fullyQualifiedKey:(id)a0;
- (id)initWithBaseDictionaryKey:(id)a0 bag:(id)a1;
- (id)initWithBaseDictionaryKey:(id)a0 profile:(id)a1 profileVersion:(id)a2;
- (long long)integerBackedByStringForKey:(id)a0;
- (void)loadBaseDictionary:(id /* block */)a0;
- (id)numberFromString:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0 bagValue:(id)a1;

@end
