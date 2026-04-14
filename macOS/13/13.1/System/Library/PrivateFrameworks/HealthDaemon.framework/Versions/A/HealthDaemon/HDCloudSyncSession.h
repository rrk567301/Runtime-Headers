@class NSSet, HDCloudSyncSequenceRecord, NSArray;

@interface HDCloudSyncSession : HDSyncSession {
    NSSet *_excludedSyncStores;
    NSArray *_filteredOrderedSyncEntities;
}

@property (retain, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord;

- (void).cxx_destruct;
- (id)newChangeWithSyncEntityClass:(Class)a0 version:(struct { int x0; int x1; })a1;
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)a0;
- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)a0;
- (id)syncPredicate;
- (BOOL)requiresSyncForChangesFromAnchorRangeMap:(id)a0;
- (id)excludedSyncStores;
- (void)setExcludedSyncStores:(id)a0;

@end
