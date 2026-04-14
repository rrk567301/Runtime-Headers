@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)initForKeys:(id)a0;
+ (id)initWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
+ (id)initWithCoder:(id)a0;
+ (id)initWithDictionary:(id)a0;
+ (id)initWithSearchStrategy:(id)a0;
+ (Class)classForKeyedUnarchiver;

- (unsigned long long)count;
- (id)allKeys;
- (void)getObjects:(id *)a0;
- (const id *)knownKeyValuesPointer;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (void)addEntriesFromDictionary:(id)a0;
- (id)objectForKey:(id)a0;
- (id)mapping;
- (unsigned long long)_valueCountByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)_setValues:(id *)a0 retain:(BOOL)a1;
- (id)allValues;
- (id)keyEnumerator;
- (void)setValues:(id *)a0;
- (Class)classForCoder;
- (const id *)values;
- (id)objectEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)getKeys:(id *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllObjects;
- (BOOL)isEqualToDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;

@end
