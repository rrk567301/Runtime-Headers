@class NSDate, NSMutableDictionary, CKVGlobalInfoLog, CKVSettings, NSObject, CKVFilesystemBase;
@protocol OS_dispatch_queue;

@interface CKVIndexManager : NSObject <KVSkitAccessProvider> {
    CKVFilesystemBase *_filesystemBase;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_migrationStartTime;
    NSMutableDictionary *_instanceLogCache;
    NSMutableDictionary *_readOnlyDatabaseCache;
    NSMutableDictionary *_readOnlySkitCache;
    CKVGlobalInfoLog *_globalLog;
}

@property (readonly, nonatomic) CKVSettings *settings;

+ (id)sharedReaderInstance;

- (id)init;
- (void).cxx_destruct;
- (unsigned short)performMaintenance;
- (BOOL)supportsMultiUser;
- (void)_clearAllCaches;
- (id)accessReadOnlySkitForUser:(id)a0;
- (BOOL)setItems:(id)a0 error:(id *)a1;
- (id)initWithFilesystemBase:(id)a0 settings:(id)a1 isWriter:(BOOL)a2;
- (id)_openReadWriteDatabaseOrCreate:(BOOL)a0 atDataDirectory:(id)a1 description:(id)a2;
- (id)_writeOnlySkitAccessAtDataDirectory:(id)a0 description:(id)a1 flushThreshold:(unsigned long long)a2;
- (void)_speechProfileAccessForUser:(id)a0 usingBlock:(id /* block */)a1;
- (void)_speechProfileAccessAtDataDirectory:(id)a0 userId:(id)a1 description:(id)a2 usingBlock:(id /* block */)a3;
- (id)_instanceLogAtDataDirectory:(id)a0;
- (id)_dataDirectoryURLForUser:(id)a0;
- (BOOL)_dataDirectoryExists:(id)a0;
- (id)_localDataDirectoryURL;
- (id)_localDatabaseFileURL;
- (id)_localSkitDirectoryURL;
- (id)userIdHash:(id)a0;
- (int)_protectionClassForDataDirectory:(id)a0;
- (id)_snapshotDirectoryURL;
- (void)_loadGlobalLog;
- (void)resetWithFilesystemBase:(id)a0;
- (void)closeAllConnections;
- (void)_clearAllCachedAccessAtDataDirectory:(id)a0;
- (void)_clearCachedDatabaseAccessAtDataDirectory:(id)a0;
- (void)_clearCachedSkitAccessAtDataDirectory:(id)a0;
- (void)_cacheAllLocalAccess;
- (id)_cachedReadOnlyDatabaseAccessAtDataDirectoryURL:(id)a0;
- (id)accessReadOnlyDatabaseForUser:(id)a0;
- (id)accessReadOnlyDatabaseForAllUsers;
- (id)_accessReadOnlyDatabaseForAllUsers;
- (id)_cachedReadOnlySkitAccessAtDataDirectoryURL:(id)a0;
- (BOOL)_resetAllState;
- (BOOL)resetAllState;
- (BOOL)_destroyStateAtDataDirectory:(id)a0;
- (void)_verifyAllManagedDataDirectories;
- (BOOL)submitDatabaseTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_executeDatabaseTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)submitSkitRebuildTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_executeSkitRebuildTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_executeSkitRebuildTransactionAtDataDirectory:(id)a0 description:(id)a1 usingBlock:(id /* block */)a2;
- (unsigned short)submitDatabaseAndSkitTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned short)_executeDatabaseAndSkitTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_destroySkitAtDataDirectory:(id)a0;
- (BOOL)_verifySkitAtDataDirectory:(id)a0 description:(id)a1;
- (void)registerSpeechProfileUpdateForUser:(id)a0 originAppId:(id)a1 itemType:(long long)a2 fieldTypes:(id)a3 options:(unsigned short)a4;
- (BOOL)rebuildSpeechProfileForUser:(id)a0;
- (BOOL)_rebuildSpeechProfileForUser:(id)a0;
- (BOOL)_destroySpeechProfileAtDataDirectory:(id)a0;
- (BOOL)initiateMigration:(BOOL)a0;
- (BOOL)_initiateMigration:(BOOL)a0;
- (BOOL)_shouldRunMigration;
- (void)completeMigration;
- (void)performIndexVerification;
- (void)_verifyIndexesAtDataDirectory:(id)a0 description:(id)a1 userId:(id)a2 clean:(BOOL)a3;
- (BOOL)deleteDataForUser:(id)a0;
- (BOOL)deleteDataForUser:(id)a0 deviceId:(id)a1 ifMatching:(BOOL)a2 didDelete:(BOOL *)a3;
- (BOOL)_deleteDataForUser:(id)a0 deviceId:(id)a1 ifMatching:(BOOL)a2 didDelete:(BOOL *)a3;
- (BOOL)_shouldCleanupDatabaseAtDataDirectory:(id)a0 instanceLog:(id)a1;
- (id)captureProfileSnapshot:(id)a0;
- (void)_cleanupSnapshotDirectory;
- (BOOL)_purgeProfileSnapshots;
- (unsigned char)storedEnablementOptions;
- (BOOL)updateStoredEnablementOptions:(unsigned char)a0;
- (id)storedLanguageCodes;
- (BOOL)updateStoredLanguageCodes:(id)a0;

@end
