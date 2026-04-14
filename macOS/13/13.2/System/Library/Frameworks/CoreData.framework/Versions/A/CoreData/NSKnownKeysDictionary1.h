@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (id)initWithCoder:(id)a0;
+ (id)initWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
+ (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
+ (id)initWithDictionary:(id)a0;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (Class)classForKeyedUnarchiver;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)initForKeys:(id)a0;
+ (id)initWithSearchStrategy:(id)a0;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)removeAllObjects;
- (Class)classForCoder;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (BOOL)isEqualToDictionary:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (const id *)values;
- (void)addEntriesFromDictionary:(id)a0;
- (id)allKeys;
- (id)allValues;
- (void)getObjects:(id *)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (void)getKeys:(id *)a0;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)setValues:(id *)a0;
- (const id *)knownKeyValuesPointer;
- (id)mapping;
- (void)_setValues:(id *)a0 retain:(BOOL)a1;
- (unsigned long long)_valueCountByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
