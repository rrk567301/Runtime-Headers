@class HDDatabaseSchemaManager, HDDatabaseMigrationTransaction, NSMutableArray, _HKBehavior;

@interface HDDatabaseMigrator : NSObject {
    BOOL _hasPerformedMigration;
    NSMutableArray *_migrationSteps;
}

@property (readonly, nonatomic) HDDatabaseMigrationTransaction *transaction;
@property (readonly, nonatomic) HDDatabaseSchemaManager *schemaManager;
@property (readonly, nonatomic) _HKBehavior *behavior;

- (void)invalidate;
- (void)sydney_addUnprotectedMigrationSteps;
- (id)boulderProtectedMigrationSteps;
- (void)crystal_addUnprotectedMigrationSteps;
- (void)crystal_addProtectedMigrationSteps;
- (void)sky_addProtectedMigrationSteps;
- (BOOL)executeSQLStatements:(id)a0 error:(id *)a1;
- (unsigned long long)fetchLegacySyncIdentity:(id)a0 error:(id *)a1;
- (id)tigrisUnprotectedMigrationSteps;
- (void)addMigrationSteps:(id)a0;
- (id)emetProtectedMigrationSteps;
- (id)corryProtectedMigrationSteps;
- (id)butlerUnprotectedMigrationSteps;
- (id)eagleUnprotectedMigrationSteps;
- (id)whitetailProtectedMigrationSteps;
- (void)azul_addUnprotectedMigrationSteps;
- (void)future_addUnprotectedMigrationSteps;
- (void)yukon_addProtectedMigrationSteps;
- (void)addPrimaryMigrationSteps;
- (long long)performHFDMigrationToVersion:(long long)a0 handler:(id /* block */)a1 error:(id *)a2;
- (void)luck_addProtectedMigrationSteps;
- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (void)sky_addUnprotectedMigrationSteps;
- (void)future_addProtectedMigrationSteps;
- (id)erieProtectedMigrationSteps;
- (void)peace_addProtectedMigrationSteps;
- (id)eagleProtectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1;
- (void).cxx_destruct;
- (id)monarchProtectedMigrationSteps;
- (id)cinarUnprotectedMigrationSteps;
- (void)luck_addUnprotectedMigrationSteps;
- (long long)_corry_rewriteHFDStep2WithError:(id *)a0;
- (id)okemoZursUnprotectedMigrationSteps;
- (void)peace_addUnprotectedMigrationSteps;
- (void)sydney_addProtectedMigrationSteps;
- (id)tigrisProtectedMigrationSteps;
- (id)okemoZursProtectedMigrationSteps;
- (id)emetUnprotectedMigrationSteps;
- (void)azul_addProtectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 foreignKeys:(long long)a1 handler:(id /* block */)a2;
- (void)addMigrationForSchema:(id)a0 toVersion:(long long)a1 foreignKeyStatus:(long long)a2 handler:(id /* block */)a3;
- (id)erieUnprotectedMigrationSteps;
- (id)butlerProtectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (id)init;
- (long long)_corry_rewriteHFDStep1WithError:(id *)a0;
- (id)monarchUnprotectedMigrationSteps;
- (id)corryUnprotectedMigrationSteps;
- (void)yukon_addUnprotectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1 foreignKeys:(long long)a2;
- (void)dawn_addUnprotectedMigrationSteps;
- (id)cinarProtectedMigrationSteps;
- (long long)migrateFromVersion:(long long)a0 toVersion:(long long)a1 error:(id *)a2;
- (id)whitetailUnprotectedMigrationSteps;
- (void)dawn_addProtectedMigrationSteps;
- (void)addLockstepMigrationForSchema:(id)a0 toVersion:(long long)a1 requiringVersion:(long long)a2 foreignKeyStatus:(long long)a3 handler:(id /* block */)a4;
- (id)initWithTransaction:(id)a0;

@end
