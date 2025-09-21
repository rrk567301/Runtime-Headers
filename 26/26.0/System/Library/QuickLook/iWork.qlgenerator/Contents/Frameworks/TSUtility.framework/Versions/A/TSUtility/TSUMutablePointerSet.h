@interface TSUMutablePointerSet : NSMutableSet {
    struct __CFSet { } *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)removeObject:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getObjects:(id *)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)member:(id)a0;
- (id)init;
- (void)addObject:(id)a0;
- (id)allObjects;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (id)setByAddingObject:(id)a0;
- (id)setByAddingObjectsFromArray:(id)a0;
- (id)setByAddingObjectsFromSet:(id)a0;
- (id)initWithCFSet:(struct __CFSet { } *)a0;

@end
