@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)initForKeys:(id)a0;
+ (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
+ (BOOL)supportsSecureCoding;
+ (id)initWithDictionary:(id)a0;
+ (Class)classForKeyedUnarchiver;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)initWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
+ (id)initWithCoder:(id)a0;
+ (id)initWithSearchStrategy:(id)a0;

- (id)valueAtIndex:(unsigned long long)a0;
- (void)getObjects:(id *)a0;
- (id)objectEnumerator;
- (id)objectForKey:(id)a0;
- (void)setValues:(id *)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const id *)values;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (void)_setValues:(id *)a0 retain:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (const id *)knownKeyValuesPointer;
- (id)allValues;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)mapping;
- (unsigned long long)_valueCountByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)getKeys:(id *)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (Class)classForCoder;
- (void)dealloc;
- (id)allKeys;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;

@end
