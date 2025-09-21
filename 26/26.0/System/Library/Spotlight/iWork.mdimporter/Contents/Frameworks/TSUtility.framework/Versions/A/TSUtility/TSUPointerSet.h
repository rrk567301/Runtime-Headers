@interface TSUPointerSet : NSSet {
    struct __CFSet { } *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getObjects:(id *)a0;
- (unsigned long long)count;
- (id)member:(id)a0;
- (id)allObjects;
- (id)objectEnumerator;
- (id)setByAddingObject:(id)a0;
- (id)setByAddingObjectsFromArray:(id)a0;
- (id)setByAddingObjectsFromSet:(id)a0;
- (id)initWithCFSet:(struct __CFSet { } *)a0;

@end
