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

+ (id)workQueue;
+ (id)sharedInstance;
+ (id)allArchivePaths;
+ (id)archiveForDate:(id)a0;
+ (id)archiveEntriesWithComparisons:(id)a0;
+ (void)systemTimeChangedByOffset:(double)a0;
+ (id)lastArchivePath;
+ (id)archiveEntriesFinished;
+ (id)archiveEntriesUnfinished;
+ (id)storageQueue;

- (void)migrate;
- (void)cleanup;
- (void)enable;
- (void)disable;
- (void)trimCleanEnergyLog;
- (void)deprecateTablesEPSQL;
- (void)trimBackgroundProcessingLog;
- (void)runArchiveJobs;
- (void)deprecateTables;
- (void)registerForArchivingNotificationUsingBlock:(id /* block */)a0;
- (id)getArchivingCriteria;
- (BOOL)isInterrupted;
- (void).cxx_destruct;
- (void)recover;
- (void)runActivityWithLastCompletedDate:(id)a0;
- (void)trimExtendedPersistenceLog;
- (void)scheduleArchiveJobs;
- (void)deprecateTablesXCSQL;
- (void)trimXcodeOrganizerLog;
- (void)runInitialActivity;
- (BOOL)eliglibleToVacuumEPSQLForDate:(id)a0;
- (id)init;
- (void)migrateArchive:(id)a0;
- (void)deprecateTablesBGSQL;
- (void)handleFailure:(long long)a0 forArchiveEntry:(id)a1;
- (void)dealloc;

@end
