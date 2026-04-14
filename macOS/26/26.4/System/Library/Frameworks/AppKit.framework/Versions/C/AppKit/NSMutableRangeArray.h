@interface NSMutableRangeArray : NSMutableArray {
    unsigned long long _count;
    unsigned long long _capacity;
    struct _NSRange { unsigned long long x0; unsigned long long x1; } *_ranges;
}

+ (id)array;
+ (id)arrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)arrayWithRanges:(const struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1;

- (void)removeObjectAtIndex:(unsigned long long)a0;
- (BOOL)isEqualToArray:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)objectsAtIndexes:(id)a0;
- (void)removeLastObject;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeAllObjects;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)init;
- (unsigned long long)count;
- (void)dealloc;
- (void)removeLastRange;
- (void)_growIfNecessary;
- (void)_setCapacity:(unsigned long long)a0;
- (void)addRangesFromArray:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })firstRange;
- (unsigned long long)indexOfFirstRangeContainingOrFollowing:(unsigned long long)a0;
- (id)initWithRanges:(const struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1;
- (void)insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atIndex:(unsigned long long)a1;
- (void)insertRanges:(id)a0 atIndexes:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })lastRange;
- (id)rangesAtIndexes:(id)a0;
- (void)removeRangeAtIndex:(unsigned long long)a0;
- (void)removeRangesAtIndexes:(id)a0;
- (void)replaceRangeAtIndex:(unsigned long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
