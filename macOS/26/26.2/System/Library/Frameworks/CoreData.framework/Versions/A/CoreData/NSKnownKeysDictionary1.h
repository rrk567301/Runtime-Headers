@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)initWithCoder:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)initForKeys:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)initWithSearchStrategy:(id)a0;
+ (Class)classForKeyedUnarchiver;
+ (id)initWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
+ (id)alloc;
+ (id)initWithDictionary:(id)a0;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;

- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (unsigned long long)count;
- (id)objectEnumerator;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)_setValues:(id *)a0 retain:(BOOL)a1;
- (void)getObjects:(id *)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (const id *)knownKeyValuesPointer;
- (id)mapping;
- (BOOL)isEqualToDictionary:(id)a0;
- (Class)classForCoder;
- (const id *)values;
- (void)encodeWithCoder:(id)a0;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (void)removeObjectForKey:(id)a0;
- (void)setValues:(id *)a0;
- (unsigned long long)_valueCountByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)getKeys:(id *)a0;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void)dealloc;
- (void)removeAllObjects;

@end
