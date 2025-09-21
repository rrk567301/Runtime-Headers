@class HDDatabaseSchemaManager, HDDatabaseMigrationTransaction, NSMutableArray, _HKBehavior;

@interface HDDatabaseMigrator : NSObject {
    BOOL _hasPerformedMigration;
    NSMutableArray *_migrationSteps;
}

@property (readonly, nonatomic) HDDatabaseMigrationTransaction *transaction;
@property (readonly, nonatomic) HDDatabaseSchemaManager *schemaManager;
@property (readonly, nonatomic) _HKBehavior *behavior;

- (void)yukon_addUnprotectedMigrationSteps;
- (id)corryProtectedMigrationSteps;
- (void)azul_addUnprotectedMigrationSteps;
- (void)addLockstepMigrationForSchema:(id)a0 toVersion:(long long)a1 requiringVersion:(long long)a2 foreignKeyStatus:(long long)a3 handler:(id /* block */)a4;
- (id)erieUnprotectedMigrationSteps;
- (void)crystal_addProtectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (void)peace_addProtectedMigrationSteps;
- (BOOL)executeSQLStatements:(id)a0 error:(id *)a1;
- (void)future_addProtectedMigrationSteps;
- (void)invalidate;
- (void)azul_addProtectedMigrationSteps;
- (long long)performHFDMigrationToVersion:(long long)a0 handler:(id /* block */)a1 error:(id *)a2;
- (id)butlerProtectedMigrationSteps;
- (void)dawn_addProtectedMigrationSteps;
- (void)sky_addProtectedMigrationSteps;
- (id)tigrisProtectedMigrationSteps;
- (void)sydney_addUnprotectedMigrationSteps;
- (id)cinarProtectedMigrationSteps;
- (id)corryUnprotectedMigrationSteps;
- (id)init;
- (id)okemoZursUnprotectedMigrationSteps;
- (long long)_corry_rewriteHFDStep2WithError:(id *)a0;
- (id)eagleProtectedMigrationSteps;
- (id)whitetailProtectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1 foreignKeys:(long long)a2;
- (void)peace_addUnprotectedMigrationSteps;
- (void)sydney_addProtectedMigrationSteps;
- (unsigned long long)fetchLegacySyncIdentity:(id)a0 error:(id *)a1;
- (id)boulderProtectedMigrationSteps;
- (id)monarchProtectedMigrationSteps;
- (void)addPrimaryMigrationSteps;
- (id)whitetailUnprotectedMigrationSteps;
- (void)crystal_addUnprotectedMigrationSteps;
- (id)butlerUnprotectedMigrationSteps;
- (void)dawn_addUnprotectedMigrationSteps;
- (id)okemoZursProtectedMigrationSteps;
- (id)cinarUnprotectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1;
- (id)eagleUnprotectedMigrationSteps;
- (void)sky_addUnprotectedMigrationSteps;
- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (id)erieProtectedMigrationSteps;
- (id)monarchUnprotectedMigrationSteps;
- (id)emetProtectedMigrationSteps;
- (void)yukon_addProtectedMigrationSteps;
- (void)addMigrationSteps:(id)a0;
- (long long)migrateFromVersion:(long long)a0 toVersion:(long long)a1 error:(id *)a2;
- (id)initWithTransaction:(id)a0;
- (id)emetUnprotectedMigrationSteps;
- (void)future_addUnprotectedMigrationSteps;
- (long long)_corry_rewriteHFDStep1WithError:(id *)a0;
- (void).cxx_destruct;
- (void)addMigrationForSchema:(id)a0 toVersion:(long long)a1 foreignKeyStatus:(long long)a2 handler:(id /* block */)a3;
- (id)tigrisUnprotectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 foreignKeys:(long long)a1 handler:(id /* block */)a2;
- (void)luck_addUnprotectedMigrationSteps;
- (void)luck_addProtectedMigrationSteps;

@end
