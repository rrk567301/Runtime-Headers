@class HDDatabaseSchemaManager, HDDatabaseMigrationTransaction, NSMutableArray, _HKBehavior;

@interface HDDatabaseMigrator : NSObject {
    BOOL _hasPerformedMigration;
    NSMutableArray *_migrationSteps;
}

@property (readonly, nonatomic) HDDatabaseMigrationTransaction *transaction;
@property (readonly, nonatomic) HDDatabaseSchemaManager *schemaManager;
@property (readonly, nonatomic) _HKBehavior *behavior;

- (void)crystal_addProtectedMigrationSteps;
- (id)butlerUnprotectedMigrationSteps;
- (void)dawn_addUnprotectedMigrationSteps;
- (void)sydney_addProtectedMigrationSteps;
- (id)eagleProtectedMigrationSteps;
- (void)sydney_addUnprotectedMigrationSteps;
- (id)erieProtectedMigrationSteps;
- (void)addLockstepMigrationForSchema:(id)a0 toVersion:(long long)a1 requiringVersion:(long long)a2 foreignKeyStatus:(long long)a3 handler:(id /* block */)a4;
- (id)okemoZursProtectedMigrationSteps;
- (void)addMigrationSteps:(id)a0;
- (unsigned long long)fetchLegacySyncIdentity:(id)a0 error:(id *)a1;
- (id)monarchUnprotectedMigrationSteps;
- (void)luck_addProtectedMigrationSteps;
- (id)whitetailProtectedMigrationSteps;
- (id)emetProtectedMigrationSteps;
- (id)cinarUnprotectedMigrationSteps;
- (id)emetUnprotectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 foreignKeys:(long long)a1 handler:(id /* block */)a2;
- (void)azul_addProtectedMigrationSteps;
- (void)sky_addUnprotectedMigrationSteps;
- (id)monarchProtectedMigrationSteps;
- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (void)crystal_addUnprotectedMigrationSteps;
- (long long)performHFDMigrationToVersion:(long long)a0 handler:(id /* block */)a1 error:(id *)a2;
- (BOOL)executeSQLStatements:(id)a0 error:(id *)a1;
- (void)azul_addUnprotectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (void).cxx_destruct;
- (id)whitetailUnprotectedMigrationSteps;
- (void)invalidate;
- (void)yukon_addUnprotectedMigrationSteps;
- (id)tigrisProtectedMigrationSteps;
- (id)erieUnprotectedMigrationSteps;
- (void)future_addProtectedMigrationSteps;
- (void)addMigrationForSchema:(id)a0 toVersion:(long long)a1 foreignKeyStatus:(long long)a2 handler:(id /* block */)a3;
- (long long)migrateFromVersion:(long long)a0 toVersion:(long long)a1 error:(id *)a2;
- (id)init;
- (id)boulderProtectedMigrationSteps;
- (id)tigrisUnprotectedMigrationSteps;
- (id)okemoZursUnprotectedMigrationSteps;
- (void)peace_addProtectedMigrationSteps;
- (void)luck_addUnprotectedMigrationSteps;
- (id)corryUnprotectedMigrationSteps;
- (void)peace_addUnprotectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1;
- (void)dawn_addProtectedMigrationSteps;
- (id)initWithTransaction:(id)a0;
- (long long)_corry_rewriteHFDStep1WithError:(id *)a0;
- (void)future_addUnprotectedMigrationSteps;
- (id)corryProtectedMigrationSteps;
- (void)sky_addProtectedMigrationSteps;
- (void)addPrimaryMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1 foreignKeys:(long long)a2;
- (void)yukon_addProtectedMigrationSteps;
- (id)cinarProtectedMigrationSteps;
- (id)butlerProtectedMigrationSteps;
- (long long)_corry_rewriteHFDStep2WithError:(id *)a0;
- (id)eagleUnprotectedMigrationSteps;

@end
