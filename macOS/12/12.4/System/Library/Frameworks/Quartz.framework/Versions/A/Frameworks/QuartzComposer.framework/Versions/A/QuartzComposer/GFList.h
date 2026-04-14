@interface GFList : NSObject <NSCopying, NSFastEnumeration> {
    unsigned long long _flags;
    unsigned long long _capacity;
    unsigned long long _count;
    id *_values;
    unsigned long long *_hashValues;
    id *_keys;
    unsigned long long *_hashKeys;
}

+ (id)list;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)flags;
- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeAllObjects;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)removeObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)sortUsingComparator:(id /* block */)a0;
- (id)objectForKey:(id)a0;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (const id *)_values;
- (const id *)_keys;
- (void)addObject:(id)a0 forKey:(id)a1;
- (void)addEntriesFromDictionary:(id)a0;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (id)dictionary;
- (void)sortUsingFunction:(void /* function */ *)a0 context:(void *)a1;
- (id)keyAtIndex:(unsigned long long)a0;
- (void)reverse;
- (id)keyForObject:(id)a0;
- (unsigned long long)optionFlags;
- (id)initWithList:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0 optionFlags:(unsigned long long)a1;
- (id)arrayOfObjects;
- (unsigned long long)indexOfKey:(id)a0;
- (void)moveIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)addEntriesFromList:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1 forKey:(id)a2;
- (void)swapIndex:(unsigned long long)a0 withIndex:(unsigned long long)a1;
- (id)initWithObjects:(id)a0 keys:(id)a1 optionFlags:(unsigned long long)a2;
- (id)arrayOfKeys;
- (void)setKey:(id)a0 atIndex:(unsigned long long)a1;
- (void)setIndex:(unsigned long long)a0 ofObject:(id)a1;
- (void)setIndex:(unsigned long long)a0 ofKey:(id)a1;
- (void)applyFunction:(void /* function */ *)a0 context:(void *)a1;

@end
