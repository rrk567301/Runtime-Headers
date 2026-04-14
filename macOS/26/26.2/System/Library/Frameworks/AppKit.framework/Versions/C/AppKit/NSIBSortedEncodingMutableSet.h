@class NSMutableArray;

@interface NSIBSortedEncodingMutableSet : NSMutableSet {
    NSMutableArray *storageArray;
    id /* block */ comparator;
    BOOL needsSorting;
}

- (unsigned long long)count;
- (id)objectEnumerator;
- (void)getObjects:(id *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (Class)classForCoder;
- (id)allObjects;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (void)addObject:(id)a0;
- (void)dealloc;
- (id)initWithSet:(id)a0 comparator:(id /* block */)a1;
- (void)sortStorageArray;

@end
