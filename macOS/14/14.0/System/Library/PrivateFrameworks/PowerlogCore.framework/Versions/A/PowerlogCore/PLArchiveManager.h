@class NSString, NSMutableArray, NSDate;

@interface PLArchiveManager : NSObject <PLArchiveJobManager>

@property double interval;
@property double mustRunInterval;
@property double EPSQLVacuumInterval;
@property double PLSQLDBDuration;
@property double EPSQLDBDuration;
@property double CESQLDBDuration;
@property double archiveRetention;
@property (retain) NSMutableArray *archiveJobs;
@property (nonatomic) BOOL interrupted;
@property (retain) NSMutableArray *notificationBlocks;
@property (retain) NSDate *lastEPSQLVacuumDate;
@property BOOL monotonicResetOccurred;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)workQueue;
+ (id)storageQueue;
+ (id)allArchivePaths;
+ (id)lastArchivePath;
+ (id)archiveEntriesFinished;
+ (id)archiveEntriesUnfinished;
+ (id)archiveEntriesWithComparisons:(id)a0;
+ (void)systemTimeChangedByOffset:(double)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (void)disable;
- (void)enable;
- (BOOL)isInterrupted;
- (void)migrate;
- (void)recover;
- (void)deprecateTables;
- (void)migrateArchive:(id)a0;
- (void)deprecateTablesCESQL;
- (void)deprecateTablesEPSQL;
- (BOOL)eliglibleToVacuumEPSQLForDate:(id)a0;
- (id)getArchivingCriteria;
- (void)handleFailure:(long long)a0 forArchiveEntry:(id)a1;
- (void)registerForArchivingNotificationUsingBlock:(id /* block */)a0;
- (void)runActivityWithLastCompletedDate:(id)a0;
- (void)runArchiveJobs;
- (void)runInitialActivity;
- (void)scheduleArchiveJobs;
- (void)trimCleanEnergyLog;
- (void)trimExtendedPersistenceLog;

@end
