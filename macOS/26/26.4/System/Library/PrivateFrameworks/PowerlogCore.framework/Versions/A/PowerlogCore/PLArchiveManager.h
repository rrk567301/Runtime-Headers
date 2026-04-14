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

+ (id)storageQueue;
+ (id)sharedInstance;
+ (id)workQueue;
+ (id)archiveEntriesWithComparisons:(id)a0;
+ (void)systemTimeChangedByOffset:(double)a0;
+ (id)archiveEntriesUnfinished;
+ (id)allArchivePaths;
+ (id)archiveForDate:(id)a0;
+ (id)archiveEntriesFinished;
+ (id)lastArchivePath;

- (void)cleanup;
- (void)enable;
- (void)migrate;
- (void)disable;
- (void)deprecateTablesXCSQL;
- (void)trimCleanEnergyLog;
- (BOOL)eliglibleToVacuumEPSQLForDate:(id)a0;
- (void)runActivityWithLastCompletedDate:(id)a0;
- (void)handleFailure:(long long)a0 forArchiveEntry:(id)a1;
- (void)registerForArchivingNotificationUsingBlock:(id /* block */)a0;
- (void)migrateArchive:(id)a0;
- (void)runArchiveJobs;
- (void).cxx_destruct;
- (void)runInitialActivity;
- (id)init;
- (void)scheduleArchiveJobs;
- (BOOL)isInterrupted;
- (void)trimExtendedPersistenceLog;
- (void)trimBackgroundProcessingLog;
- (void)recover;
- (void)deprecateTables;
- (void)deprecateTablesBGSQL;
- (void)trimXcodeOrganizerLog;
- (void)deprecateTablesEPSQL;
- (void)dealloc;
- (id)getArchivingCriteria;

@end
