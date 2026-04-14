@class HDDatabaseSchemaManager, HDDatabaseMigrationTransaction, NSMutableArray, _HKBehavior;

@interface HDDatabaseMigrator : NSObject {
    BOOL _hasPerformedMigration;
    NSMutableArray *_migrationSteps;
}

@property (readonly, nonatomic) HDDatabaseMigrationTransaction *transaction;
@property (readonly, nonatomic) HDDatabaseSchemaManager *schemaManager;
@property (readonly, nonatomic) _HKBehavior *behavior;

- (id)whitetailProtectedMigrationSteps;
- (long long)migrateFromVersion:(long long)a0 toVersion:(long long)a1 error:(id *)a2;
- (void)azul_addUnprotectedMigrationSteps;
- (id)butlerUnprotectedMigrationSteps;
- (unsigned long long)fetchLegacySyncIdentity:(id)a0 error:(id *)a1;
- (void)addMigrationTo:(long long)a0 foreignKeys:(long long)a1 handler:(id /* block */)a2;
- (void)addMigrationForSchema:(id)a0 toVersion:(long long)a1 foreignKeyStatus:(long long)a2 handler:(id /* block */)a3;
- (void)crystal_addUnprotectedMigrationSteps;
- (id)whitetailUnprotectedMigrationSteps;
- (id)okemoZursProtectedMigrationSteps;
- (void)dawn_addUnprotectedMigrationSteps;
- (id)eagleUnprotectedMigrationSteps;
- (void)sky_addUnprotectedMigrationSteps;
- (id)cinarProtectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (id)erieProtectedMigrationSteps;
- (long long)_corry_rewriteHFDStep2WithError:(id *)a0;
- (void)sydney_addProtectedMigrationSteps;
- (void)invalidate;
- (BOOL)executeSQLStatements:(id)a0 error:(id *)a1;
- (void)luck_addProtectedMigrationSteps;
- (id)monarchUnprotectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1;
- (id)boulderProtectedMigrationSteps;
- (void)peace_addProtectedMigrationSteps;
- (id)tigrisProtectedMigrationSteps;
- (void)addLockstepMigrationForSchema:(id)a0 toVersion:(long long)a1 requiringVersion:(long long)a2 foreignKeyStatus:(long long)a3 handler:(id /* block */)a4;
- (id)monarchProtectedMigrationSteps;
- (void)azul_addProtectedMigrationSteps;
- (void)sydney_addUnprotectedMigrationSteps;
- (id)emetProtectedMigrationSteps;
- (void)future_addProtectedMigrationSteps;
- (void)dawn_addProtectedMigrationSteps;
- (id)corryProtectedMigrationSteps;
- (long long)performHFDMigrationToVersion:(long long)a0 handler:(id /* block */)a1 error:(id *)a2;
- (id)okemoZursUnprotectedMigrationSteps;
- (void)sky_addProtectedMigrationSteps;
- (id)emetUnprotectedMigrationSteps;
- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (void)future_addUnprotectedMigrationSteps;
- (long long)_corry_rewriteHFDStep1WithError:(id *)a0;
- (void).cxx_destruct;
- (id)erieUnprotectedMigrationSteps;
- (void)addMigrationSteps:(id)a0;
- (id)corryUnprotectedMigrationSteps;
- (id)cinarUnprotectedMigrationSteps;
- (void)luck_addUnprotectedMigrationSteps;
- (void)addPrimaryMigrationSteps;
- (id)tigrisUnprotectedMigrationSteps;
- (void)yukon_addProtectedMigrationSteps;
- (void)crystal_addProtectedMigrationSteps;
- (id)eagleProtectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1 foreignKeys:(long long)a2;
- (void)peace_addUnprotectedMigrationSteps;
- (void)yukon_addUnprotectedMigrationSteps;
- (id)initWithTransaction:(id)a0;
- (id)init;
- (id)butlerProtectedMigrationSteps;

@end
