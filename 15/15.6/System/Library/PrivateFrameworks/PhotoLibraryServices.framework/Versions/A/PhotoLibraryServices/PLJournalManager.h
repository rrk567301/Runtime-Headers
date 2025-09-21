@class NSPersistentHistoryToken;

@interface PLJournalManager : PLJournalManagerCore {
    NSPersistentHistoryToken *_currentHistoryToken;
    _Atomic BOOL _ignoreHistoryDuringSnapshot;
}

+ (id)journalManagerWithClass:(Class)a0 libraryServiceManager:(id)a1;

- (void).cxx_destruct;
- (id)currentHistoryToken;
- (char)_enumerateJournalEntriesFromHistoryToken:(id)a0 latestHistoryToken:(id *)a1 withManagedObjectContext:(id)a2 journalEntryBlock:(id /* block */)a3 shouldStopBlock:(id /* block */)a4 error:(id *)a5;
- (id)_existingObjectWithID:(id)a0 managedObjectContext:(id)a1;
- (void)_loadHistoryTokenIfNecessary;
- (char)_needsFullSnapshot;
- (char)_needsPartialSnapshot:(id)a0;
- (void)clearHistoryToken;
- (void)clearIgnoreHistoryDuringSnapshot;
- (char)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 error:(id *)a2;
- (char)needsSnapshot;
- (char)performFullSnapshotAppend:(char)a0 createOnlyIfNecessary:(char)a1 withManagedObjectContext:(id)a2 entryLimitBlock:(id /* block */)a3 error:(id *)a4;
- (char)performFullSnapshotAppend:(char)a0 createOnlyIfNecessary:(char)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
- (char)performPartialSnapshotForPayloadClassIDs:(id)a0 append:(char)a1 createOnlyIfNecessary:(char)a2 withManagedObjectContext:(id)a3 error:(id *)a4;
- (char)performSnapshotIfNecessaryAppend:(char)a0 withManagedObjectContext:(id)a1 error:(id *)a2;
- (char)replayFromCurrentHistoryTokenWithManagedObjectContext:(id)a0 updatedPayloadClassIDs:(id)a1 error:(id *)a2;
- (void)setIgnoreHistoryDuringSnapshot;

@end
