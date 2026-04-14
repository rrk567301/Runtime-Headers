@class HDDatabaseSchemaManager, HDDatabaseMigrationTransaction, NSMutableArray, _HKBehavior;

@interface HDDatabaseMigrator : NSObject {
    BOOL _hasPerformedMigration;
    NSMutableArray *_migrationSteps;
}

@property (readonly, nonatomic) HDDatabaseMigrationTransaction *transaction;
@property (readonly, nonatomic) HDDatabaseSchemaManager *schemaManager;
@property (readonly, nonatomic) _HKBehavior *behavior;

- (void)invalidate;
- (BOOL)executeSQLStatements:(id)a0 error:(id *)a1;
- (void)addPrimaryMigrationSteps;
- (void)future_addUnprotectedMigrationSteps;
- (id)okemoZursUnprotectedMigrationSteps;
- (void)yukon_addUnprotectedMigrationSteps;
- (void)peace_addProtectedMigrationSteps;
- (void)crystal_addUnprotectedMigrationSteps;
- (void)azul_addUnprotectedMigrationSteps;
- (id)tigrisUnprotectedMigrationSteps;
- (void)addLockstepMigrationForSchema:(id)a0 toVersion:(long long)a1 requiringVersion:(long long)a2 foreignKeyStatus:(long long)a3 handler:(id /* block */)a4;
- (id)erieUnprotectedMigrationSteps;
- (void)azul_addProtectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1 foreignKeys:(long long)a2;
- (id)cinarProtectedMigrationSteps;
- (id)eagleProtectedMigrationSteps;
- (id)init;
- (void)peace_addUnprotectedMigrationSteps;
- (id)eagleUnprotectedMigrationSteps;
- (void)luck_addProtectedMigrationSteps;
- (id)boulderProtectedMigrationSteps;
- (long long)migrateFromVersion:(long long)a0 toVersion:(long long)a1 error:(id *)a2;
- (void)addMigrationTo:(long long)a0 foreignKeys:(long long)a1 handler:(id /* block */)a2;
- (id)whitetailProtectedMigrationSteps;
- (void)addMigrationForSchema:(id)a0 toVersion:(long long)a1 foreignKeyStatus:(long long)a2 handler:(id /* block */)a3;
- (void)addMigrationSteps:(id)a0;
- (void)yukon_addProtectedMigrationSteps;
- (id)butlerProtectedMigrationSteps;
- (void)dawn_addUnprotectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (id)monarchUnprotectedMigrationSteps;
- (void).cxx_destruct;
- (id)erieProtectedMigrationSteps;
- (void)sydney_addUnprotectedMigrationSteps;
- (id)initWithTransaction:(id)a0;
- (id)butlerUnprotectedMigrationSteps;
- (id)corryUnprotectedMigrationSteps;
- (id)okemoZursProtectedMigrationSteps;
- (void)luck_addUnprotectedMigrationSteps;
- (void)crystal_addProtectedMigrationSteps;
- (id)emetUnprotectedMigrationSteps;
- (id)emetProtectedMigrationSteps;
- (id)cinarUnprotectedMigrationSteps;
- (id)corryProtectedMigrationSteps;
- (long long)_corry_rewriteHFDStep2WithError:(id *)a0;
- (long long)_corry_rewriteHFDStep1WithError:(id *)a0;
- (void)dawn_addProtectedMigrationSteps;
- (id)tigrisProtectedMigrationSteps;
- (void)sky_addProtectedMigrationSteps;
- (id)monarchProtectedMigrationSteps;
- (long long)performHFDMigrationToVersion:(long long)a0 handler:(id /* block */)a1 error:(id *)a2;
- (void)future_addProtectedMigrationSteps;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1;
- (id)whitetailUnprotectedMigrationSteps;
- (unsigned long long)fetchLegacySyncIdentity:(id)a0 error:(id *)a1;
- (void)sydney_addProtectedMigrationSteps;
- (void)sky_addUnprotectedMigrationSteps;

@end
