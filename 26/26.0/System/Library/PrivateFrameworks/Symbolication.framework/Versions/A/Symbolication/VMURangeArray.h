@interface VMURangeArray : NSObject <NSCopying> {
    unsigned int _count;
    struct _VMURange { unsigned long long x0; unsigned long long x1; } *_ranges;
    unsigned int _max;
    BOOL _sorted;
}

- (void)sort;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; } *)ranges;
- (BOOL)containsRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)count;
- (void)setCapacity:(unsigned int)a0;
- (id)init;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })range;
- (BOOL)intersectsRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (id)description;
- (BOOL)containsLocation:(unsigned long long)a0;
- (void)addRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned int)a0;
- (id)initWithRanges:(const struct _VMURange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned int)a1;
- (void)insertRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 atIndex:(unsigned int)a1;
- (void)removeRangeAtIndex:(unsigned int)a0;
- (void)removeAllRanges;
- (void)addRanges:(id)a0;
- (unsigned long long)indexForLocation:(unsigned long long)a0;
- (BOOL)intersectsLocation:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })largestRange;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeForLocation:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })subrangeNotExcludedBySelfForRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)sumLengths;

@end
