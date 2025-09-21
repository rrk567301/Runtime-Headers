@interface HDQuantitySeriesHFDMigrationEntity : NSObject <HDSeriesHFDMigrationEntity>

+ (char)migrateDataFromDataStore:(const void *)a0 to:(void *)a1 database:(id)a2 recoveryAnalytics:(id)a3 error:(id *)a4;
+ (char)migrateDataToSQLFromStore:(const void *)a0 database:(id)a1 error:(id *)a2;

@end
