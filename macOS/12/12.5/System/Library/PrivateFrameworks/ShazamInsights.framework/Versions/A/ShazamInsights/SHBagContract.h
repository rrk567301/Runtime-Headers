@class NSString, NSMutableDictionary, NSNumberFormatter, AMSMutableBagKeySet;
@protocol AMSBagProtocol;

@interface SHBagContract : NSObject

@property (readonly) NSString *baseDictionaryKey;
@property (readonly) AMSMutableBagKeySet *mutableBagKeySet;
@property (readonly) NSMutableDictionary *defaultValues;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) NSNumberFormatter *numberFormatter;
@property BOOL throwOnError;

- (void).cxx_destruct;
- (id)stringForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)defaultValueForKey:(id)a0;
- (id)bagKeySet;
- (void)addBagKey:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2;
- (void)addBagKey:(id)a0 valueType:(unsigned long long)a1;
- (void)unionBagKeySet:(id)a0;
- (BOOL)booleanForKey:(id)a0;
- (id)initWithBaseDictionaryKey:(id)a0 bag:(id)a1;
- (id)fullyQualifiedKey:(id)a0;
- (id)valueForKey:(id)a0 bagValue:(id)a1;
- (id)numberFromString:(id)a0 forKey:(id)a1;
- (id)initWithBaseDictionaryKey:(id)a0 profile:(id)a1 profileVersion:(id)a2;
- (void)registerBagKeySet;
- (void)loadBaseDictionary:(id /* block */)a0;
- (long long)integerBackedByStringForKey:(id)a0;
- (double)doubleBackedByStringForKey:(id)a0;
- (BOOL)booleanBackedByStringForKey:(id)a0;

@end
