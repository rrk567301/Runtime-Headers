@interface VMUNonOverlappingRangeArray : VMURangeArray

- (void)mergeRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 excludingRanges:(id)a1;
- (id)subtract:(id)a0 mergeRanges:(BOOL)a1;
- (void)mergeRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_mergeAllBitsOfRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 excludingRanges:(id)a1 mergeRanges:(BOOL)a2;
- (void)mergeRanges:(id)a0;
- (void)addOrExtendRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (void)sortAndMergeRanges;
- (void)mergeRanges:(id)a0 excludingRanges:(id)a1;

@end
