@class BSOrderedDictionaryKeyStrategy;

@interface BSMutableOrderedDictionary : BSOrderedDictionary

@property (retain, nonatomic) BSOrderedDictionaryKeyStrategy *keyOrderingStrategy;

+ (BOOL)supportsSecureCoding;

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (id)initWithKeyOrderingStrategy:(id)a0;
- (void)addEntriesFromOrderedDictionary:(id)a0;
- (void)addObject:(id)a0 toCollectionClass:(Class)a1 forKey:(id)a2;
- (id)initWithCapacity:(unsigned long long)a0 keyOrderingStrategy:(id)a1;
- (id)initWithDictionary:(id)a0 keyOrderingStrategy:(id)a1;
- (id)keyOrderingStrategy;
- (void)removeObject:(id)a0 fromCollectionForKey:(id)a1;
- (void)setKeyOrderingStrategy:(id)a0;

@end
