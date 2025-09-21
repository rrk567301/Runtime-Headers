@class NSString, NSMutableArray, NSDate;

@interface PLArchiveManager : NSObject <PLArchiveJobManager>

@property double interval;
@property double mustRunInterval;
@property double archiveRetention;
@property double PLSQLDBDuration;
@property double CESQLDBDuration;
@property double EPSQLDBDuration;
@property double EPSQLVacuumInterval;
@property (retain) NSDate *lastEPSQLVacuumDate;
@property double XCSQLDBDuration;
@property double BGSQLDBDuration;
@property (retain) NSMutableArray *archiveJobs;
@property (nonatomic) BOOL interrupted;
@property (retain) NSMutableArray *notificationBlocks;
@property BOOL monotonicResetOccurred;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)workQueue;
+ (void)systemTimeChangedByOffset:(double)a0;
+ (id)archiveEntriesUnfinished;
+ (id)archiveEntriesFinished;
+ (id)lastArchivePath;
+ (id)archiveEntriesWithComparisons:(id)a0;
+ (id)archiveForDate:(id)a0;
+ (id)allArchivePaths;
+ (id)storageQueue;

- (void)migrate;
- (void)disable;
- (void)enable;
- (void)cleanup;
- (void)deprecateTablesEPSQL;
- (void)dealloc;
- (void)runInitialActivity;
- (id)getArchivingCriteria;
- (void)recover;
- (void)runArchiveJobs;
- (void)scheduleArchiveJobs;
- (void)deprecateTables;
- (void)trimCleanEnergyLog;
- (id)init;
- (void)migrateArchive:(id)a0;
- (void)runActivityWithLastCompletedDate:(id)a0;
- (void)deprecateTablesXCSQL;
- (void)trimExtendedPersistenceLog;
- (void)registerForArchivingNotificationUsingBlock:(id /* block */)a0;
- (void)handleFailure:(long long)a0 forArchiveEntry:(id)a1;
- (void)trimXcodeOrganizerLog;
- (void)trimBackgroundProcessingLog;
- (BOOL)isInterrupted;
- (void)deprecateTablesBGSQL;
- (BOOL)eliglibleToVacuumEPSQLForDate:(id)a0;
- (void).cxx_destruct;

@end
