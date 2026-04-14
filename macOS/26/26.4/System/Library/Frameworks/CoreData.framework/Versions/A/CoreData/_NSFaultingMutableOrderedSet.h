@class NSMutableDictionary, NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet {
    int _cd_rc;
    struct _NSFaultingMutableOrderedSetFlags { unsigned char _isFault : 1; unsigned char _mustPropagateDelete : 1; unsigned char _ignoringIdempotentKVO : 1; unsigned char _mustCopyOnWrite : 1; unsigned char _isImmutableCopy : 1; unsigned short _reserved : 11; unsigned short _relationship : 16; } _flags;
    id _realSet;
    NSManagedObject *_source;
    unsigned int *_orderKeys;
    _NSFaultingMutableOrderedSet *_grottyHack;
    NSMutableDictionary *_forcedKeys;
}

@property (readonly, nonatomic) NSManagedObject *source;
@property (readonly, nonatomic) NSPropertyDescription *relationship;
@property (readonly, nonatomic, getter=isFault) BOOL fault;

+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)getObjects:(id *)a0;
- (void)addObjectsFromArray:(id)a0;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (BOOL)containsObject:(id)a0;
- (id)objectEnumerator;
- (unsigned long long)indexOfObject:(id)a0;
- (void)willRead;
- (void)unionSet:(id)a0;
- (void)enumerateObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)_orderedObjectsAndKeys;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)descriptionWithLocale:(id)a0;
- (id)initWithSource:(id)a0 forRelationship:(id)a1 asFault:(BOOL)a2;
- (void)unionOrderedSet:(id)a0;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)willReadWithContents:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (void)insertObjects:(const id *)a0 count:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (BOOL)_isIdenticalFault:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)turnIntoFault;
- (id)indexesOfObjectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)minusSet:(id)a0;
- (void)addObject:(id)a0;
- (id)allObjects;
- (unsigned long long)indexOfObjectAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)indexesOfObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)sortRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingComparator:(id /* block */)a2;
- (id)valueForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_setProcessingIdempotentKVO:(BOOL)a0;
- (id)initWithOrderedSet:(id)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeAllObjects;
- (void)sortUsingComparator:(id /* block */)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)valueForKeyPath:(id)a0;
- (id)initWithSource:(id)a0 destinations:(id)a1 forRelationship:(id)a2 inContext:(id)a3;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_shouldProcessKVOChange;
- (void)sortWithOptions:(unsigned long long)a0 usingComparator:(id /* block */)a1;
- (void)removeObjectsInArray:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)description;
- (void)addObjects:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)_reorderObjectsToLocationsByOrderKey:(id)a0 error:(id *)a1;
- (Class)classForCoder;
- (BOOL)isEqualToOrderedSet:(id)a0;
- (void)dealloc;
- (void)minusOrderedSet:(id)a0;

@end
