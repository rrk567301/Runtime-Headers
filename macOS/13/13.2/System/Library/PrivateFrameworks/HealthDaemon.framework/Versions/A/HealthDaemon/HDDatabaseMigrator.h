@class HDDatabaseSchemaManager, HDDatabaseMigrationTransaction, NSMutableArray, _HKBehavior;

@interface HDDatabaseMigrator : NSObject {
    BOOL _hasPerformedMigration;
    NSMutableArray *_migrationSteps;
}

@property (readonly, nonatomic) HDDatabaseMigrationTransaction *transaction;
@property (readonly, nonatomic) HDDatabaseSchemaManager *schemaManager;
@property (readonly, nonatomic) _HKBehavior *behavior;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (id)initWithTransaction:(id)a0;
- (BOOL)executeSQLStatements:(id)a0 error:(id *)a1;
- (id)whitetailUnprotectedMigrationSteps;
- (id)whitetailProtectedMigrationSteps;
- (void)yukon_addUnprotectedMigrationSteps;
- (void)yukon_addProtectedMigrationSteps;
- (id)monarchUnprotectedMigrationSteps;
- (id)monarchProtectedMigrationSteps;
- (id)boulderUnprotectedMigrationSteps;
- (id)boulderProtectedMigrationSteps;
- (id)erieUnprotectedMigrationSteps;
- (id)erieProtectedMigrationSteps;
- (void)peace_addUnprotectedMigrationSteps;
- (void)peace_addProtectedMigrationSteps;
- (void)azul_addUnprotectedMigrationSteps;
- (void)azul_addProtectedMigrationSteps;
- (id)emetUnprotectedMigrationSteps;
- (id)emetProtectedMigrationSteps;
- (void)sky_addUnprotectedMigrationSteps;
- (void)sky_addProtectedMigrationSteps;
- (id)butlerUnprotectedMigrationSteps;
- (id)butlerProtectedMigrationSteps;
- (id)cinarUnprotectedMigrationSteps;
- (id)cinarProtectedMigrationSteps;
- (void)sydney_addUnprotectedMigrationSteps;
- (void)sydney_addProtectedMigrationSteps;
- (void)future_addUnprotectedMigrationSteps;
- (void)future_addProtectedMigrationSteps;
- (void)addPrimaryMigrationSteps;
- (void)addMigrationTo:(long long)a0 foreignKeys:(long long)a1 handler:(id /* block */)a2;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1;
- (void)addMigrationTo:(long long)a0 function:(void /* function */ *)a1 foreignKeys:(long long)a2;
- (void)addMigrationForSchema:(id)a0 toVersion:(long long)a1 foreignKeyStatus:(long long)a2 handler:(id /* block */)a3;
- (void)addLockstepMigrationForSchema:(id)a0 toVersion:(long long)a1 requiringVersion:(long long)a2 foreignKeyStatus:(long long)a3 handler:(id /* block */)a4;
- (void)addMigrationSteps:(id)a0;
- (long long)migrateFromVersion:(long long)a0 toVersion:(long long)a1 error:(id *)a2;
- (long long)performHFDMigrationToVersion:(long long)a0 handler:(id /* block */)a1 error:(id *)a2;
- (unsigned long long)fetchLegacySyncIdentity:(id)a0 error:(id *)a1;
- (id)okemoZursUnprotectedMigrationSteps;
- (id)okemoZursProtectedMigrationSteps;
- (id)eagleUnprotectedMigrationSteps;
- (id)eagleProtectedMigrationSteps;
- (id)tigrisUnprotectedMigrationSteps;
- (id)tigrisProtectedMigrationSteps;
- (id)corryUnprotectedMigrationSteps;
- (id)corryProtectedMigrationSteps;
- (long long)_corry_rewriteHFDStep1WithError:(id *)a0;
- (long long)_corry_rewriteHFDStep2WithError:(id *)a0;

@end
