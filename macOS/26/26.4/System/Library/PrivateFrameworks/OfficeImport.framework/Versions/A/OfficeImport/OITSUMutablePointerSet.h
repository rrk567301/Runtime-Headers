@interface OITSUMutablePointerSet : NSMutableSet {
    struct __CFSet { } *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (void)getObjects:(id *)a0;
- (id)member:(id)a0;
- (id)objectEnumerator;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)allObjects;
- (void)removeAllObjects;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)count;
- (void)removeObject:(id)a0;
- (void)dealloc;
- (id)setByAddingObject:(id)a0;
- (id)setByAddingObjectsFromArray:(id)a0;
- (id)setByAddingObjectsFromSet:(id)a0;
- (id)initWithCFSet:(struct __CFSet { } *)a0;

@end
