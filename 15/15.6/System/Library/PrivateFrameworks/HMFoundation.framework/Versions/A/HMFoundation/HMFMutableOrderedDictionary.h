@class NSArray;

@interface HMFMutableOrderedDictionary : HMFOrderedDictionary <HMFMutableAssociativeCollection>

@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setOrderedDictionary:(id)a0;
- (id)initWithObjects:(id)a0 forKeys:(id)a1 copyObjects:(char)a2 copyKeys:(char)a3;
- (id)initWithObjects:(id)a0 orderedKeySet:(id)a1;
- (void)setBySortingDictionary:(id)a0;
- (void)setBySortingDictionary:(id)a0 keyComparator:(id /* block */)a1;

@end
