@interface EFMutableInt64Set : NSObject <NSCopying, NSMutableCopying> {
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    long long *_storage;
}

+ (id)indexSetWithIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0;
+ (id)indexSet;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)addIndex:(long long)a0;
- (BOOL)containsIndex:(long long)a0;
- (unsigned long long)count;
- (long long)firstIndex;
- (long long)lastIndex;
- (void)addIndexes:(id)a0;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (unsigned long long)getIndexes:(long long *)a0 maxCount:(unsigned long long)a1 inIndexRange:(struct _EFInt64Range { long long x0; unsigned long long x1; } *)a2;
- (long long)indexGreaterThanIndex:(long long)a0;
- (void)removeAllIndexes;
- (void)removeIndex:(long long)a0;
- (void)removeIndexes:(id)a0;
- (unsigned long long)_enumerateIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; } *)a0 maxCount:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)_garbageCollectStorageIfNecessary;
- (void)_incrementStorageIfNecessaryForCount:(unsigned long long)a0;
- (long long)_insertionPositionOfIndex:(long long)a0;
- (long long)_positionOfIndex:(long long)a0;
- (id)commaSeparatedString;
- (id)getIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0 maxCount:(unsigned long long)a1;
- (id)getMaxCountOfIndexes:(unsigned long long)a0;
- (void)intersectIndexes:(id)a0;

@end
