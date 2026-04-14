@class NSMutableArray, NSMutableIndexSet;

@interface TSPReferenceOrderedSet : NSObject <NSCopying, NSMutableCopying> {
    unsigned long long _capacity;
    NSMutableArray *_items;
    NSMutableIndexSet *_objectsIndexSet;
    NSMutableIndexSet *_removedObjectsIndexSet;
    NSMutableIndexSet *_lazyReferencesIndexSet;
    NSMutableIndexSet *_removedLazyReferencesIndexSet;
}

@property (readonly, nonatomic) unsigned long long count;

- (BOOL)removeItem:(id)a0;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (BOOL)addItem:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allObjects;
- (void).cxx_destruct;
- (BOOL)containsItem:(id)a0;
- (void)minusSet:(id)a0;
- (id)init;
- (void)unionSet:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;

@end
