@interface CKPackageTableBase : CKSQLiteTable {
    unsigned long long _nextIndex;
}

- (id)insertObject:(id)a0;
- (unsigned long long)cachedCountWithNoDatabaseAccess;
- (id)entryWithIndex:(unsigned long long)a0 error:(id *)a1;
- (id)fetchEntryBatchWithStartingIndex:(unsigned long long)a0 error:(id *)a1;
- (id)finishInitializing;

@end
