@class NSMutableDictionary;

@interface KHDBLockedDictionary : NSMutableDictionary {
    NSMutableDictionary *m_dictionary;
    int m_spinlock;
}

+ (id)dictionaryWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
+ (id)dictionaryWithCapacity:(unsigned long long)a0;
+ (id)dictionaryWithObjects:(id)a0 forKeys:(id)a1;
+ (id)dictionary;
+ (id)dictionaryWithObject:(id)a0 forKey:(id)a1;
+ (id)dictionaryWithObjectsAndKeys:(id)a0;
+ (id)dictionaryWithDictionary:(id)a0;
+ (id)dictionaryWithContentsOfURL:(id)a0;
+ (id)dictionaryWithContentsOfFile:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (Class)classForCoder;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void)removeObjectForKey:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)descriptionWithLocale:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (id)allValues;
- (void)addEntriesFromDictionary:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (void)setDictionary:(id)a0;
- (id)initWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;
- (id)allKeysForObject:(id)a0;
- (id)keysSortedByValueUsingSelector:(SEL)a0;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id)initWithObjectsAndKeys:(id)a0;
- (id)valueForKey:(id)a0;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)descriptionInStringsFileFormat;

@end
