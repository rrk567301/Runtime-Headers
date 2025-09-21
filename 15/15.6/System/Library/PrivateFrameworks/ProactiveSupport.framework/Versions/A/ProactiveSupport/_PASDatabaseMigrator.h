@class _PASLock;

@interface _PASDatabaseMigrator : NSObject {
    _PASLock *_contexts;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned char)_clearDatabase:(id)a0;
- (char)_allContextsAtVersionZeroWithContexts:(id)a0;
- (char)_anyContextHasFutureVersionWithContexts:(id)a0;
- (char)migrationNeeded;
- (id)_contextForMigrationObject:(id)a0;
- (char)_anyContextHasMismatchedVersionWithContexts:(id)a0;
- (char)_canContinueMigratingWithContexts:(id)a0;
- (unsigned char)_migrateDatabasesWithContexts:(id)a0 toVersion:(unsigned int)a1;
- (unsigned char)_migrateOneStepToVersion:(unsigned int)a0 contexts:(id)a1;
- (char)_migrationNeededWithContexts:(id)a0 toVersion:(unsigned int)a1;
- (void)_prepareContexts:(id)a0;
- (unsigned char)_runQueries:(id)a0 nextVersion:(unsigned int)a1 context:(id)a2;
- (unsigned char)_runQuery:(id)a0 context:(id)a1 database:(id)a2;
- (unsigned char)_skipFromZeroSchemaWithContexts:(id)a0;
- (unsigned char)_unmigrateDatabasesWithContexts:(id)a0;
- (id)initWithMigrationObjects:(id)a0;
- (unsigned char)migrateDatabases;
- (unsigned char)migrateDatabasesToVersion:(unsigned int)a0;
- (unsigned char)unmigrateDatabases;

@end
