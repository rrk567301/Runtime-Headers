@class NSURL, NSSQLCore, NSMutableDictionary, NSSQLiteStatement, NSDictionary, NSObject, NSSQLitePrefetchRequestCache, NSMutableArray, NSString, NSMutableSet, NSArray, NSSQLEntity, NSSQLSaveChangesRequestContext;
@protocol OS_dispatch_queue;

@interface NSSQLiteConnection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSSQLCore *_sqlCore;
    NSURL *_workingURL;
    NSString *_dbPath;
    char _transactionIsOpen;
    char _transactionIsCurrentlyReadOnly;
    char _useSyntaxColoredLogging;
    NSSQLiteStatement *_sqlStatement;
    NSArray *_columnsToFetch;
    NSArray *_metadataColumns;
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_vmstatement;
    int _rowsProcessedCount;
    unsigned int _lastEntityKey;
    NSSQLEntity *_finalEntity;
    NSSQLEntity *_lastEntity;
    struct sqlite3_stmt { } *_fetchPKStatement;
    struct sqlite3_stmt { } *_updatePKStatement;
    NSSQLiteStatement *_beginStatement;
    NSSQLiteStatement *_commitStatement;
    NSSQLiteStatement *_rollbackStatement;
    struct __CFDictionary { } *_vmCachedStatements;
    NSMutableDictionary *_pragmaSettings;
    NSMutableSet *_mObjectIDsUpdatedByTriggers;
    NSMutableArray *_mObjectIDsInsertedByDATriggers;
    NSMutableArray *_mObjectIDsUpdatededByDATriggers;
    NSSQLSaveChangesRequestContext *_saveRequest;
    struct __CFDictionary { } *_statementCachesByEntity;
    NSSQLitePrefetchRequestCache *_prefetchRequestCache;
    struct __CFDictionary { } *_cachedEntityUpdateStatements;
    struct __CFDictionary { } *_cachedEntityConstrainedValuesUpdateStatements;
    double _timeOutOption;
    double _timeOutIncrement;
    void *_extraBuffersForRegisteredFunctions[5];
    NSString *_dbPathRegisteredWithBackupd;
    long long _vacuumTracker;
    NSMutableArray *_temporaryTables;
    struct __sqliteConnectionFlags { unsigned char _readyToBind : 1; unsigned char _fetchInProgress : 1; unsigned char _fileSystemType : 2; unsigned char _proxyLocking : 1; unsigned char _vacuumSetupNeeded : 1; unsigned char _usingWAL : 1; unsigned char _disallowReconnect : 1; unsigned char _isWriter : 1; unsigned char _didSnapshotRecovery : 1; unsigned char _hasTransactionStringTable : 1; unsigned char _isQueryGenTracking : 1; unsigned int _reserved : 20; } _sqliteConnectionFlags;
    unsigned long long _debugInode;
    NSMutableArray *_activeGenerations;
    NSMutableDictionary *_transactionStringName;
    NSMutableDictionary *_usedIndexes;
    long long _cachedPageSize;
    id /* block */ _scheduledCheckpoint;
    struct sqlite3_stmt { } *_indexUsedStatement;
    NSDictionary *_sqlCoreOptions;
}

+ (void)initialize;

- (void)dealloc;
- (void)execute;
- (id)initForSQLCore:(id)a0;
- (id)adapter;
- (id)initAsQueryGenerationTrackingConnectionForSQLCore:(id)a0;
- (int)registerCurrentQueryGenerationWithStore:(id)a0;
- (void)setExclusiveLockingMode:(char)a0;
- (id)sqlStatement;

@end
