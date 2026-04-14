@class NSMutableArray;

@interface NSSortedArray : NSMutableArray {
    NSMutableArray *_array;
    SEL _compareSelector;
    unsigned long long _cachedCount;
    id _cachedFirstObject;
}

@property SEL compareSelector;

+ (void)initialize;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;
- (void)dealloc;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)init;
- (void)addObject:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)initWithObjects:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (void)removeLastObject;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)setArray:(id)a0;
- (void)sortUsingFunction:(void /* function */ *)a0 context:(void *)a1;
- (void)sortUsingSelector:(SEL)a0;
- (void)_insertObjectInSortOrder:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0 compareSelector:(SEL)a1;
- (id)initWithCompareSelector:(SEL)a0;

@end
