@interface ULCLDatabaseMigrator : NSObject

@property (nonatomic) struct ULDatabaseStoreInterface { void /* function */ **x0; } *dbStore;
@property (nonatomic) BOOL migrateAllData;

- (struct unique_ptr<CLSqliteDatabase, std::default_delete<CLSqliteDatabase>> { struct CLSqliteDatabase *x0; })_connectToLocationdDatabase:(const void *)a0;
- (void)_logStatsForExportedDatabase:(struct ULSqliteDatabase { struct CLSqliteDatabase *x0; } *)a0;
- (void)_logStatsForLocalDatabase;
- (BOOL)_migrateData:(struct ULSqliteDatabase { struct CLSqliteDatabase *x0; } *)a0;
- (BOOL)_migrateTableUsingPaging:(struct ULSqliteDatabase { struct CLSqliteDatabase *x0; } *)a0 tableName:(const char *)a1 migrationLimit:(unsigned int)a2 pageSize:(unsigned int)a3 copyPageBlock:(id /* block */)a4;
- (id)initWithDbStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a0;
- (BOOL)migrateCLDatabaseFromPath:(id)a0;

@end
