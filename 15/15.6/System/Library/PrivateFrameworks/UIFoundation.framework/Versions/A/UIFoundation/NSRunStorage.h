@interface NSRunStorage : NSObject <NSCopying> {
    unsigned long long _count;
    unsigned long long _elementSize;
    unsigned long long _numBlocks;
    unsigned long long _maxBlocks;
    unsigned long long _indexDeltaStartBlock;
    long long _indexDelta;
    struct _NSRunBlock { unsigned long long x0; unsigned char x1[0]; } *_runs;
    unsigned long long _cachedBlock;
    struct _NSRange { unsigned long long location; unsigned long long length; } _cachedBlockRange;
    unsigned long long _gapBlockIndex;
}

+ (void)initialize;
+ (void)_setConsistencyCheckingEnabled:(char)a0 superCheckEnabled:(char)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (id)initWithElementSize:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (void)_moveGapAndMergeWithBlockRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_allocData:(unsigned long long)a0;
- (void)_consistencyCheck:(long long)a0;
- (void)_consistencyError:(long long)a0 startAtZeroError:(char)a1 cacheError:(char)a2 inconsistentBlockError:(char)a3;
- (void)_deallocData;
- (void)_ensureCapacity:(unsigned long long)a0;
- (void)_moveGapToBlockIndex:(unsigned long long)a0;
- (void)_reallocData:(unsigned long long)a0;
- (void *)elementAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (unsigned long long)elementSize;
- (id)initWithRunStorage:(id)a0;
- (void)insertElement:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 coalesceRuns:(char)a2;
- (void)removeElementsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 coalesceRuns:(char)a1;
- (void)replaceElementsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withElement:(void *)a1 coalesceRuns:(char)a2;

@end
