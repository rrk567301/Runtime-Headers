@interface NSMutableRangeArray : NSMutableArray {
    unsigned long long _count;
    unsigned long long _capacity;
    struct _NSRange { unsigned long long x0; unsigned long long x1; } *_ranges;
}

+ (id)array;
+ (id)arrayWithRanges:(const struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1;
+ (id)arrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (BOOL)isEqualToArray:(id)a0;
- (id)objectsAtIndexes:(id)a0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })firstRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })lastRange;
- (unsigned long long)indexOfFirstRangeContainingOrFollowing:(unsigned long long)a0;
- (id)initWithRanges:(const struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1;
- (id)rangesAtIndexes:(id)a0;
- (void)_setCapacity:(unsigned long long)a0;
- (void)_growIfNecessary;
- (void)insertRanges:(id)a0 atIndexes:(id)a1;
- (void)removeRangesAtIndexes:(id)a0;
- (void)insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atIndex:(unsigned long long)a1;
- (void)removeRangeAtIndex:(unsigned long long)a0;
- (void)addRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addRangesFromArray:(id)a0;
- (void)removeLastRange;
- (void)replaceRangeAtIndex:(unsigned long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
