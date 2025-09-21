@interface SYDPlistToCoreDataMigrator : NSObject

+ (char)isSharedIPad;
+ (void)addPlistURLsAndStoreIdentifiersForBundleRecord:(id)a0 toDictionary:(id)a1 uncontainerizedSyncedPreferencesDirectoryURL:(id)a2;
+ (void)addPlistURLsAndStoreIdentifiersForKnownDaemonsToDictionary:(id)a0 uncontainerizedSyncedPreferencesDirectoryURL:(id)a1;
+ (void)addPlistURLsForBundleIdentifier:(id)a0 defaultStoreIdentifier:(id)a1 additionalStoreIdentifiers:(id)a2 toDictionary:(id)a3 syncedPreferencesDirectoryURL:(id)a4;
+ (id)allPossibleStorePlistURLsWithLibraryDirectoryURL:(id)a0;
+ (id)keyValueStorePlistFromURL:(id)a0 error:(id *)a1;
+ (id)knownDaemons;
+ (char)migrateAllPlistsIfNecessaryToCoreDataStore:(id)a0 deleteMigratedPlists:(char)a1 error:(id *)a2;
+ (char)migrateAllPlistsIfNecessaryToCoreDataStore:(id)a0 deleteMigratedPlists:(char)a1 libraryDirectoryURL:(id)a2 error:(id *)a3;
+ (char)migrateAllPlistsToCoreDataStore:(id)a0 deleteMigratedPlists:(char)a1 libraryDirectoryURL:(id)a2 error:(id *)a3;
+ (char)migratePlist:(id)a0 forStoreWithIdentifier:(id)a1 toCoreDataStore:(id)a2 error:(id *)a3;
+ (char)shouldIncrementFailureCountForError:(id)a0;
+ (char)shouldStopMigrationAfterError:(id)a0;
+ (char)shouldUseTransactionForPlistAtURL:(id)a0;

@end
