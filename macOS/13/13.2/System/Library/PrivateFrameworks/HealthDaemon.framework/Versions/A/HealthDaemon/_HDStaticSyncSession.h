@interface _HDStaticSyncSession : HDSyncSession

- (id)newChangeWithSyncEntityClass:(Class)a0 version:(struct { int x0; int x1; })a1;
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)a0;
- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)a0;

@end
