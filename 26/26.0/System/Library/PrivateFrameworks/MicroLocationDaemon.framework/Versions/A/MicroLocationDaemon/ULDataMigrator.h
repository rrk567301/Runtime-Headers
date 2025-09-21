@interface ULDataMigrator : NSObject

@property (nonatomic) struct ULDatabaseStoreInterface { void /* function */ **x0; } *dbStore;
@property (nonatomic) struct ULDatabaseManagementInterface { void /* function */ **x0; } *dbManagement;

- (BOOL)migrateMiloData;
- (long long)_getCAMigrationErrorTypeForLastMigrationStateAfterMaxFailures:(int)a0;
- (BOOL)_initializeMigrationStatusMetricsDict:(id)a0 forType:(long long)a1;
- (BOOL)_migrateMiloDataTransaction;
- (void)_sendCoreAnalyticsEventForMigrationIfNecessary:(long long)a0;
- (id)initWithDbStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a0 andDbManagement:(struct ULDatabaseManagementInterface { void /* function */ **x0; } *)a1;

@end
