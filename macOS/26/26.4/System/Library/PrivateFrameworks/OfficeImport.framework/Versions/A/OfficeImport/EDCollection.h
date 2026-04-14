@class NSMutableArray;

@interface EDCollection : NSObject <NSCopying, NSFastEnumeration> {
    NSMutableArray *mObjects;
}

+ (id)collection;
+ (id)collectionWithObject:(id)a0;

- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)initWithObject:(id)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)addObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)removeAllObjects;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)init;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)addOrEquivalentObject:(id)a0;
- (BOOL)isEqualToCollection:(id)a0;

@end
