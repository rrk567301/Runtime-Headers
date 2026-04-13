@interface TSUMutablePointerSet : NSMutableSet {
    struct __CFSet { } *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (id)allObjects;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)setByAddingObjectsFromArray:(id)a0;
- (id)setByAddingObjectsFromSet:(id)a0;
- (void)getObjects:(id *)a0;
- (id)setByAddingObject:(id)a0;
- (id)initWithCFSet:(struct __CFSet { } *)a0;

@end
