@class BRCSharedServerChangeState, NSString, NSMutableDictionary, NSData, NSDate;

@interface BRCServerPersistedState : NSObject <NSSecureCoding, NSCopying, PQLBindable> {
    NSMutableDictionary *_pendingMigrations;
    BOOL _needsSave;
    NSData *_originalServerPersistedState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastSyncDownDate;
@property (nonatomic) long long nextRank;
@property (retain) BRCSharedServerChangeState *sharedDatabaseChangeState;
@property (nonatomic) unsigned long long minLastUsedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithState:(id)a0;
- (void)abortMigrationsOfMigrationKey:(id)a0;
- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (id)_stateToData;
- (void)saveToDB:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dataPendingSave;
- (BOOL)mangledIDIsPendingMigration:(id)a0;
- (id)dumpMigrationQueriesForMangledID:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)initiateMigrationQueryForMangledIDs:(id)a0 key:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)migrationQueryForMangledID:(id)a0 key:(id)a1 didUpdateWithCursor:(id)a2;
- (id)migrationQueryKeyForMangledID:(id)a0 continuationCursor:(id *)a1;
- (id)init;

@end
