@interface _PXArrayNoIncrementalChangeDetails : PXArrayChangeDetails

- (char)hasIncrementalChanges;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)a0;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)a0;

@end
