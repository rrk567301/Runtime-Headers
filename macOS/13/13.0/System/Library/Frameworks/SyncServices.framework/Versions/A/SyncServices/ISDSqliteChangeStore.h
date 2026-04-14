@class NSString, NSMapTable, NSMutableIndexSet, ISDSqliteChangeStoreDatabase;

@interface ISDSqliteChangeStore : NSObject {
    unsigned int _greatestEnumeratedToGeneration;
    long long _numberEnumerated;
    unsigned long long _maxToEnumerate;
    unsigned long long _fromRow;
    long long _lastRowEnumerated;
    int _numGenerationsToRetain;
    NSString *_path;
    NSMutableIndexSet *_enumeratedChanges;
    unsigned long long _flushCount;
    NSMapTable *_changesMap;
    NSMapTable *_referencesRowsMap;
    ISDSqliteChangeStoreDatabase *_db;
}

+ (id)defaultFileName;

- (void)dealloc;
- (void)compact;
- (void)resetState;
- (void)closeDatabase;
- (void)enableSqliteTracing:(id)a0;
- (void)disableSqliteTracing;
- (void)setSqliteCacheSize:(long long)a0;
- (void)disableFlush;
- (void)enableFlush;
- (void)dropIndexes;
- (void)recreateIndexes;
- (void)replaceRecordId:(id)a0 withRecordId:(id)a1;
- (void)replaceRelationshipTupleId:(id)a0 withRelationshipTupleId:(id)a1;
- (void)setDirtyCoderDelegate:(id)a0;
- (id)dirtyCoderDelegate;
- (void)clearSpuriousUnresolvedReferencesToPhantomsInIdMapper:(id)a0;
- (void)enumerateAddsForEntityNames:(id)a0 asArgumentToFunction:(void /* function */ *)a1 context:(void *)a2;
- (BOOL)enumerateAddsForEntityNames:(id)a0 state:(long long *)a1 maxToEnumerate:(long long)a2 asArgumentToFunction:(void /* function */ *)a3 context:(void *)a4;
- (void)enumerateChangesForEntityNames:(id)a0 asArgumentToFunction:(void /* function */ *)a1 context:(void *)a2;
- (void)appendChange:(id)a0;
- (unsigned long long)removeEnumeratedChanges;
- (void)removeAllChangesForEntityNames:(id)a0;
- (id)entityNamesOfAddedRecords;
- (unsigned int)earliestFromGenerationOfAddedRecordsForEntityName:(id)a0;
- (BOOL)enumerateChangesForEntityNames:(id)a0 changeType:(int *)a1 state:(long long *)a2 maxToEnumerate:(long long)a3 asArgumentToFunction:(void /* function */ *)a4 context:(void *)a5;
- (void)updateChangePropertiesForChange:(id)a0;
- (id)newSetOfDeletedRecordIdsForEntityNames:(id)a0;
- (void)recycleDatabaseConnection;
- (void)_insertChange:(id)a0;
- (id)initWithPath:(id)a0 forClientWithIdentifier:(id)a1 delegate:(id)a2;
- (id)initWithDataDirectory:(id)a0 forClientWithIdentifier:(id)a1 delegate:(id)a2;
- (id)initWithDataDirectory:(id)a0 forClientWithIdentifier:(id)a1;
- (void)flushTempChanges;
- (BOOL)_enumerateChangesOfType:(int)a0 forEntityNames:(id)a1 state:(long long *)a2 maxToEnumerate:(long long)a3 asArgumentToFunction:(void /* function */ *)a4 context:(void *)a5;
- (unsigned long long)removeEnumeratedChanges:(int)a0;
- (void)deleteChanges:(id)a0;
- (unsigned long long)numberOfUnprocessedChanges;
- (unsigned long long)numberOfProcessedChanges;
- (unsigned long long)numberOfPendingChangesForEntities:(id)a0;
- (unsigned int)greatestEnumeratedToGeneration;
- (void)setGreatestEnumeratedToGeneration:(unsigned int)a0;
- (unsigned long long)enumerateChangesFromRow;
- (BOOL)rowWasEnumerated;
- (BOOL)changeExistsWhichReferencesRecordWithId:(id)a0 referringChanges:(id)a1;
- (BOOL)changeExistsWhichReferencesRecordWithId:(id)a0;
- (unsigned long long)enumeratedChangesCount;
- (void)enumerateProcessedChangesForEntityNames:(id)a0 asArgumentToFunction:(void /* function */ *)a1 context:(void *)a2;
- (unsigned long long)purgeProcessedChangesLessThanToGeneration:(unsigned int)a0;
- (void)removeAllProcessedChangesForEntityNames:(id)a0;
- (unsigned int)earliestFromGenerationOfProcessedRecordsForEntityName:(id)a0;
- (unsigned int)latestFromGenerationOfProcessedRecordsForEntityName:(id)a0;
- (void)addIndexToIndexSetOfEnumeratedChanges:(long long)a0;
- (id)indexSetOfEnumeratedChanges;
- (int)numGenerationsToRetain;
- (void)setNumGenerationsToRetain:(int)a0;

@end
