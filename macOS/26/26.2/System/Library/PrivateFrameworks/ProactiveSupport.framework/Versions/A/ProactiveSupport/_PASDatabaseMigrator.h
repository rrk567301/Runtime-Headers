@class _PASLock;

@interface _PASDatabaseMigrator : NSObject {
    _PASLock *_contexts;
}

- (BOOL)_canContinueMigratingWithContexts:(id)a0;
- (BOOL)_anyContextHasMismatchedVersionWithContexts:(id)a0;
- (unsigned char)_runQuery:(id)a0 context:(id)a1 database:(id)a2;
- (id)initWithMigrationObjects:(id)a0;
- (unsigned char)_migrateOneStepToVersion:(unsigned int)a0 contexts:(id)a1;
- (unsigned char)migrateDatabasesToVersion:(unsigned int)a0;
- (void).cxx_destruct;
- (id)_contextForMigrationObject:(id)a0;
- (unsigned char)migrateDatabases;
- (unsigned char)_clearDatabase:(id)a0;
- (id)description;
- (unsigned char)_skipFromZeroSchemaWithContexts:(id)a0;
- (unsigned char)unmigrateDatabases;
- (BOOL)_allContextsAtVersionZeroWithContexts:(id)a0;
- (BOOL)_anyContextHasFutureVersionWithContexts:(id)a0;
- (unsigned char)_unmigrateDatabasesWithContexts:(id)a0;
- (id)init;
- (BOOL)migrationNeeded;
- (unsigned char)_runQueries:(id)a0 nextVersion:(unsigned int)a1 context:(id)a2;
- (BOOL)_migrationNeededWithContexts:(id)a0 toVersion:(unsigned int)a1;
- (void)_prepareContexts:(id)a0;
- (unsigned char)_migrateDatabasesWithContexts:(id)a0 toVersion:(unsigned int)a1;

@end
