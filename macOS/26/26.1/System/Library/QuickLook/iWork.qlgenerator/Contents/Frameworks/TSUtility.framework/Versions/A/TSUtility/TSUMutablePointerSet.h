@interface TSUMutablePointerSet : NSMutableSet {
    struct __CFSet { } *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)member:(id)a0;
- (void)getObjects:(id *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)allObjects;
- (void)removeAllObjects;
- (id)objectEnumerator;
- (void)removeObject:(id)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (id)init;
- (id)setByAddingObject:(id)a0;
- (id)setByAddingObjectsFromArray:(id)a0;
- (id)setByAddingObjectsFromSet:(id)a0;
- (id)initWithCFSet:(struct __CFSet { } *)a0;

@end
