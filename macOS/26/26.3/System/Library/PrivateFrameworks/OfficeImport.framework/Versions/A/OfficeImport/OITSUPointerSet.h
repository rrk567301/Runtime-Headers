@interface OITSUPointerSet : NSSet {
    struct __CFSet { } *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (unsigned long long)count;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)getObjects:(id *)a0;
- (id)member:(id)a0;
- (id)allObjects;
- (id)objectEnumerator;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)setByAddingObject:(id)a0;
- (id)setByAddingObjectsFromArray:(id)a0;
- (id)setByAddingObjectsFromSet:(id)a0;
- (id)initWithCFSet:(struct __CFSet { } *)a0;

@end
