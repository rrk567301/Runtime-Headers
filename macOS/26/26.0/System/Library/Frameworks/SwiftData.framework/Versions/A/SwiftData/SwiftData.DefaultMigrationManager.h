@class NSArray;

@interface SwiftData.DefaultMigrationManager : NSStagedMigrationManager {
    void /* unknown type, empty encoding */ schema;
    void /* unknown type, empty encoding */ migrationPlan;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ caughtError;
    void /* unknown type, empty encoding */ migrationManager;
}

@property (nonatomic, readonly) NSArray *stages;

- (void).cxx_destruct;
- (BOOL)_validateStages:(id *)a0;
- (id)initWithMigrationStages:(id)a0;

@end
