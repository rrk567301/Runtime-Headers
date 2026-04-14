@class NSString, ISDRecordIdMapper, ISDRecordStore, ISDSqliteChangeStore;

@interface ISDClientState : NSObject <ISDChangeSource> {
    NSString *_dataDirectory;
    NSString *_clientId;
    ISDRecordStore *_recordStore;
    ISDRecordIdMapper *_recordIdMapper;
    ISDSqliteChangeStore *_changeStore;
    id _resetHandler;
    unsigned long long _flushCount;
    id _dirtyCoderDelegate;
    BOOL _isLocalClientType;
    BOOL _isTransferClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordIdMapperForClientWithIdentifier:(id)a0 inDataDirectory:(id)a1;

- (void)dealloc;
- (void)compact;
- (void)vacuum;
- (id)clientId;
- (id)resetHandler;
- (void)setResetHandler:(id)a0;
- (void)rollbackChanges;
- (void)disableSqliteTracing;
- (id)recordStore;
- (void)disableFlush;
- (void)enableFlush;
- (void)dropIndexes;
- (void)recreateIndexes;
- (void)replaceRecordId:(id)a0 withRecordId:(id)a1;
- (void)replaceRelationshipTupleId:(id)a0 withRelationshipTupleId:(id)a1;
- (void)setDirtyCoderDelegate:(id)a0;
- (id)dirtyCoderDelegate;
- (void)disableFlushAndLockImmediately;
- (void)enumerateAddsForEntityNames:(id)a0 asArgumentToFunction:(void /* function */ *)a1 context:(void *)a2;
- (BOOL)enumerateAddsForEntityNames:(id)a0 state:(long long *)a1 maxToEnumerate:(long long)a2 asArgumentToFunction:(void /* function */ *)a3 context:(void *)a4;
- (void)enumerateChangesForEntityNames:(id)a0 asArgumentToFunction:(void /* function */ *)a1 context:(void *)a2;
- (unsigned long long)removeEnumeratedChanges;
- (void)removeAllChangesForEntityNames:(id)a0;
- (id)entityNamesOfAddedRecords;
- (unsigned int)earliestFromGenerationOfAddedRecordsForEntityName:(id)a0;
- (void)enableSqliteTracing;
- (void)releaseState;
- (id)commonClientId;
- (BOOL)isConflictManager;
- (BOOL)isUndoManager;
- (id)unacceptedRecordIdsForEntityName:(id)a0;
- (BOOL)enumerateChangesForEntityNames:(id)a0 changeType:(int *)a1 state:(long long *)a2 maxToEnumerate:(long long)a3 asArgumentToFunction:(void /* function */ *)a4 context:(void *)a5;
- (void)updateChangePropertiesForChange:(id)a0;
- (id)newSetOfDeletedRecordIdsForEntityNames:(id)a0;
- (void)recycleDatabaseConnection;
- (id)initWithClientDataDirectory:(id)a0 clientId:(id)a1 clientType:(id)a2 clientIsTransferType:(BOOL)a3;
- (id)initWithClientDataDirectory:(id)a0 clientId:(id)a1 clientType:(id)a2;
- (BOOL)didCreateRecordStore;
- (BOOL)didCreateRecordIdMapper;
- (BOOL)didCreateChangeStore;
- (id)recordIdMapper;
- (id)changeStore;
- (BOOL)isLocalClientType;
- (BOOL)isTransferClient;

@end
