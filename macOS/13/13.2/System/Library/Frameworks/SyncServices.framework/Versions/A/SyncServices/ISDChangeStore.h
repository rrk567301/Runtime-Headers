@class NSString, NSMutableDictionary, NSMutableSet, NSMutableIndexSet, NSMutableArray;

@interface ISDChangeStore : NSObject {
    NSString *_path;
    NSMutableArray *_addChanges;
    NSMutableArray *_changes;
    NSMutableDictionary *_recordIdReferences;
    NSMutableSet *_enumeratedRecordIds;
    unsigned long long _flushCount;
    BOOL _dirty;
    BOOL _didSkipRecordsWhenEnumerating;
    id _dirtyCoderDelegate;
    NSMutableDictionary *_addedChangeIndex;
    NSMutableDictionary *_modifiedChangeIndex;
    NSMutableIndexSet *_deletedAddedRecordIdsIndex;
}

+ (id)defaultFileName;

- (void)dealloc;
- (void)finalize;
- (unsigned long long)count;
- (id)initWithPath:(id)a0;
- (void)compact;
- (void)flush;
- (void)resetState;
- (id)initWithDataDirectory:(id)a0;
- (void)disableFlush;
- (void)enableFlush;
- (void)replaceRecordId:(id)a0 withRecordId:(id)a1;
- (void)replaceRelationshipTupleId:(id)a0 withRelationshipTupleId:(id)a1;
- (void)setDirtyCoderDelegate:(id)a0;
- (id)dirtyCoderDelegate;
- (id)initWithDataDirectory:(id)a0 delegate:(id)a1;
- (void)disableFlushAndLockImmediately;
- (void)addReferenceToChange:(id)a0 forRecordId:(id)a1;
- (void)indexRecordIds:(id)a0;
- (id)changesWithReferenceToRecordId:(id)a0;
- (void)clearSpuriousUnresolvedReferencesToPhantomsInIdMapper:(id)a0;
- (void)enumerateChangesInArray:(id)a0 forEntityNames:(id)a1 asArgumentToFunction:(void /* function */ *)a2 context:(void *)a3;
- (void)enumerateAddsForEntityNames:(id)a0 asArgumentToFunction:(void /* function */ *)a1 context:(void *)a2;
- (BOOL)enumerateAddsForEntityNames:(id)a0 state:(long long *)a1 maxToEnumerate:(long long)a2 asArgumentToFunction:(void /* function */ *)a3 context:(void *)a4;
- (void)enumerateChangesForEntityNames:(id)a0 asArgumentToFunction:(void /* function */ *)a1 context:(void *)a2;
- (void)appendDeleteChange:(id)a0;
- (void)appendAddChange:(id)a0;
- (void)appendModifyChange:(id)a0;
- (void)appendChange:(id)a0;
- (unsigned long long)removeEnumeratedChanges;
- (void)_removeChangesForEntityNames:(id)a0 fromArray:(id)a1;
- (void)removeAllChangesForEntityNames:(id)a0;
- (id)entityNamesOfAddedRecords;
- (unsigned int)earliestFromGenerationOfAddedRecordsForEntityName:(id)a0;

@end
