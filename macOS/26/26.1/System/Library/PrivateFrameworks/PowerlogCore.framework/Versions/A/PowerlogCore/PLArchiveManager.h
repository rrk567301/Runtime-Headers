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
+ (id)archiveEntriesWithComparisons:(id)a0;
+ (id)workQueue;
+ (id)archiveForDate:(id)a0;
+ (id)lastArchivePath;
+ (id)archiveEntriesFinished;
+ (void)systemTimeChangedByOffset:(double)a0;
+ (id)archiveEntriesUnfinished;
+ (id)storageQueue;
+ (id)allArchivePaths;

- (void)disable;
- (void)migrate;
- (void)enable;
- (id)getArchivingCriteria;
- (void)cleanup;
- (BOOL)eliglibleToVacuumEPSQLForDate:(id)a0;
- (BOOL)isInterrupted;
- (void)runArchiveJobs;
- (void)runInitialActivity;
- (void)deprecateTablesXCSQL;
- (void)handleFailure:(long long)a0 forArchiveEntry:(id)a1;
- (void)deprecateTablesBGSQL;
- (void)migrateArchive:(id)a0;
- (void)deprecateTablesEPSQL;
- (void)recover;
- (void)dealloc;
- (void)runActivityWithLastCompletedDate:(id)a0;
- (void)registerForArchivingNotificationUsingBlock:(id /* block */)a0;
- (void)trimBackgroundProcessingLog;
- (void)deprecateTables;
- (void)trimExtendedPersistenceLog;
- (void).cxx_destruct;
- (void)scheduleArchiveJobs;
- (void)trimXcodeOrganizerLog;
- (id)init;
- (void)trimCleanEnergyLog;

@end
