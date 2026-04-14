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
+ (id)archiveEntriesWithComparisons:(id)a0;
+ (id)archiveEntriesFinished;
+ (id)lastArchivePath;
+ (id)allArchivePaths;
+ (id)storageQueue;
+ (id)archiveForDate:(id)a0;
+ (id)archiveEntriesUnfinished;
+ (void)systemTimeChangedByOffset:(double)a0;

- (void)migrate;
- (void)enable;
- (void)deprecateTablesXCSQL;
- (void)disable;
- (void)trimBackgroundProcessingLog;
- (void)runArchiveJobs;
- (void)handleFailure:(long long)a0 forArchiveEntry:(id)a1;
- (void)trimExtendedPersistenceLog;
- (id)init;
- (void)registerForArchivingNotificationUsingBlock:(id /* block */)a0;
- (void)migrateArchive:(id)a0;
- (id)getArchivingCriteria;
- (BOOL)eliglibleToVacuumEPSQLForDate:(id)a0;
- (void)runActivityWithLastCompletedDate:(id)a0;
- (void)cleanup;
- (void)deprecateTablesEPSQL;
- (void).cxx_destruct;
- (void)recover;
- (void)dealloc;
- (void)deprecateTables;
- (void)scheduleArchiveJobs;
- (void)trimXcodeOrganizerLog;
- (void)deprecateTablesBGSQL;
- (BOOL)isInterrupted;
- (void)runInitialActivity;
- (void)trimCleanEnergyLog;

@end
