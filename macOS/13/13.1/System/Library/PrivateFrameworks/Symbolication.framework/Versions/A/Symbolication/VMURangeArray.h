@interface VMURangeArray : NSObject <NSCopying> {
    unsigned int _count;
    struct _VMURange { unsigned long long x0; unsigned long long x1; } *_ranges;
    unsigned int _max;
    BOOL _sorted;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned int)a0;
- (unsigned int)count;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })range;
- (void)setCapacity:(unsigned int)a0;
- (id)initWithRanges:(const struct _VMURange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned int)a1;
- (void)insertRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 atIndex:(unsigned int)a1;
- (void)removeRangeAtIndex:(unsigned int)a0;
- (void)addRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (void)sort;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; } *)ranges;
- (BOOL)intersectsRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addRanges:(id)a0;
- (unsigned long long)indexForLocation:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeForLocation:(unsigned long long)a0;
- (void)removeAllRanges;
- (BOOL)intersectsLocation:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })subrangeNotExcludedBySelfForRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })largestRange;
- (unsigned long long)sumLengths;

@end
