@class NSMutableDictionary, KVDictionaryLog;

@interface KVSetChangeRegistry : NSObject {
    KVDictionaryLog *_log;
    NSMutableDictionary *_pendingUpdates;
    BOOL _pendingClear;
}

+ (id)_keyForSet:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)clearAllEntriesAndCommit:(id *)a0;
- (BOOL)commitAllEntryUpdates:(id *)a0;
- (id)entryForSet:(id)a0 error:(id *)a1;
- (id)initWithFilename:(id)a0 directory:(id)a1 protectionClass:(int)a2 error:(id *)a3;
- (BOOL)_clear:(id *)a0;
- (void)clearAllEntries;
- (BOOL)cleanupWithAllSets:(id)a0 error:(id *)a1;
- (void)rollbackAllEntryUpdates;

@end
