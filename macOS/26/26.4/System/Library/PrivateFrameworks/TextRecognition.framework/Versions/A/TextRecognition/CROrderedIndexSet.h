@class NSArray, NSMutableArray, NSMutableOrderedSet;

@interface CROrderedIndexSet : NSObject

@property (retain) NSArray *sourceArray;
@property (retain) NSMutableArray *indexedObjects;
@property (retain) NSMutableOrderedSet *indicesSet;
@property (readonly) unsigned long long count;
@property (readonly) NSArray *indices;

- (id)initWithArray:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)addIndex:(unsigned long long)a0;
- (id)objects;
- (void).cxx_destruct;
- (void)addAllIndices;
- (void)addIndexSet:(id)a0;
- (void)addIndices:(id)a0;
- (id)subIndexSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
