@class NSError, HDDatabaseMigrationTransaction, HDSQLiteDatabase;

@interface HDSydneyHFDMigrator : NSObject <HDHFDataStoreMigrationTransaction, HDHFDataStoreDelegate>

@property (retain, nonatomic) HDDatabaseMigrationTransaction *transaction;
@property (nonatomic) char corruptionRebuildCompleted;
@property (copy, nonatomic) NSError *verificationError;
@property (retain, nonatomic) NSError *migrationError;
@property (readonly, nonatomic) HDSQLiteDatabase *protectedDatabase;

- (void).cxx_destruct;
- (void)HFDataStore:(id)a0 detectedCorruptionOfType:(long long)a1 code:(int)a2 error:(id)a3 shouldPromptUser:(char)a4 initialRebuildState:(long long)a5 updatedRebuildState:(long long)a6;
- (void)HFDataStore:(id)a0 setInteger:(long long)a1 forKey:(id)a2;
- (void)HFDataStoreDidPerformRebuild:(id)a0 didDecompressArchivedHFD:(char)a1 didOpenArchivedHFD:(char)a2 didOpenMovedAsideHFD:(char)a3 recoveryAnalytics:(id)a4 duration:(double)a5;
- (long long)HFDataStore:(id)a0 integerForKey:(id)a1;
- (void)HFDataStoreDetectedOutOfSpace:(id)a0;
- (id)activeTransactionForCurrentThreadForHFDataStore:(id)a0 forWriting:(char)a1;
- (id)allSeriesEntityClassesForDataStore:(id)a0;
- (char)allowHFDMigration:(id)a0;
- (void)didMigrateHFDataStore:(id)a0 fromState:(long long)a1 toState:(long long)a2 success:(char)a3 error:(id)a4;
- (id)initWithMigrationTransaction:(id)a0;
- (char)migrateDataForHFDataStore:(id)a0 from:(const void *)a1 to:(void *)a2 recoveryAnalytics:(id)a3 error:(id *)a4;
- (char)migrateDataForHFDataStore:(id)a0 toSQLiteFrom:(const void *)a1 error:(id *)a2;
- (long long)migrateHFD:(id *)a0;
- (void)requestRebuildTransactionForHFDataStore:(id)a0;

@end
