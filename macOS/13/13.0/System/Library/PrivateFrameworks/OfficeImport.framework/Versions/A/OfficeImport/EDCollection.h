@class NSMutableArray;

@interface EDCollection : NSObject <NSCopying> {
    NSMutableArray *mObjects;
}

+ (id)collection;
+ (id)collectionWithObject:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)addObject:(id)a0;
- (void)removeAllObjects;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (BOOL)isEqualToCollection:(id)a0;
- (unsigned long long)addOrEquivalentObject:(id)a0;

@end
