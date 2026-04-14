@interface TSUIndexSetObj : NSObject <NSCopying> {
    struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _indexSet;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)indexSet;
- (void)removeIndexes:(id)a0;
- (id)initWithIndexSet:(id)a0;
- (id)init;
- (void)removeIndex:(long long)a0;
- (void)addIndex:(long long)a0;
- (void)removeAllIndexes;
- (void)enumerateRangesUsingBlock:(id /* block */)a0;
- (id).cxx_construct;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (unsigned long long)hash;
- (void)addIndexes:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsIndex:(long long)a0;
- (unsigned long long)countOfIndexesInRange:(struct TSUIndexRangeStruct { long long x0; long long x1; })a0;
- (long long)firstIndex;
- (long long)lastIndex;
- (long long)indexGreaterThanOrEqualToIndex:(long long)a0;
- (void)addIndexesInRange:(struct TSUIndexRangeStruct { long long x0; long long x1; })a0;
- (BOOL)containsIndexes:(id)a0;
- (BOOL)containsIndexesInRange:(struct TSUIndexRangeStruct { long long x0; long long x1; })a0;
- (long long)indexGreaterThanIndex:(long long)a0;
- (long long)indexLessThanIndex:(long long)a0;
- (long long)indexLessThanOrEqualToIndex:(long long)a0;
- (BOOL)intersectsIndexesInRange:(struct TSUIndexRangeStruct { long long x0; long long x1; })a0;
- (void)removeIndexesInRange:(struct TSUIndexRangeStruct { long long x0; long long x1; })a0;
- (void)enumerateIndexesInRange:(struct TSUIndexRangeStruct { long long x0; long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)initWithIndexSetCpp:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a0;
- (id)initWithNSIndexSet:(id)a0;
- (long long)nthIndex:(unsigned long long)a0;

@end
