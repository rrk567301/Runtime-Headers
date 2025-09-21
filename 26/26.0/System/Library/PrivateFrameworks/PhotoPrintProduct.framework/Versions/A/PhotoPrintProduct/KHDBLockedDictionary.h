@class NSMutableDictionary;

@interface KHDBLockedDictionary : NSMutableDictionary {
    NSMutableDictionary *m_dictionary;
    int m_spinlock;
}

+ (id)dictionary;
+ (id)dictionaryWithCapacity:(unsigned long long)a0;
+ (id)dictionaryWithDictionary:(id)a0;
+ (id)dictionaryWithObject:(id)a0 forKey:(id)a1;
+ (id)dictionaryWithObjects:(id)a0 forKeys:(id)a1;
+ (id)dictionaryWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
+ (id)dictionaryWithObjectsAndKeys:(id)a0;
+ (id)dictionaryWithContentsOfURL:(id)a0;
+ (id)dictionaryWithContentsOfFile:(id)a0;

- (id)initWithContentsOfURL:(id)a0;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)initWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)allKeys;
- (BOOL)isEqualToDictionary:(id)a0;
- (void)dealloc;
- (id)allKeysForObject:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (unsigned long long)count;
- (id)valueForKey:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (id)descriptionWithLocale:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (id)description;
- (id)initWithContentsOfFile:(id)a0;
- (id)keyEnumerator;
- (void)setDictionary:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)addEntriesFromDictionary:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (id)allValues;
- (void)setValue:(id)a0 forKey:(id)a1;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)keysSortedByValueUsingSelector:(SEL)a0;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;
- (id)initWithObjectsAndKeys:(id)a0;
- (id)descriptionInStringsFileFormat;

@end
