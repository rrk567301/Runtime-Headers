@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)initWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)initForKeys:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)initWithDictionary:(id)a0;
+ (id)initWithCoder:(id)a0;
+ (Class)classForKeyedUnarchiver;
+ (id)initWithSearchStrategy:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const id *)knownKeyValuesPointer;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (void)getObjects:(id *)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)mapping;
- (void)removeAllObjects;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)allValues;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)addEntriesFromDictionary:(id)a0;
- (Class)classForCoder;
- (const id *)values;
- (void)_setValues:(id *)a0 retain:(BOOL)a1;
- (id)allKeys;
- (void)getKeys:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)removeObjectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (void)setValues:(id *)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)_valueCountByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
