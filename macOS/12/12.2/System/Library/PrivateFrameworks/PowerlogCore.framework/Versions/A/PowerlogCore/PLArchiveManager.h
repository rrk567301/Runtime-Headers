@class NSString, NSMutableArray, NSDate;

@interface PLArchiveManager : NSObject <PLArchiveJobManager>

@property double interval;
@property double mustRunInterval;
@property double EPSQLTrimInterval;
@property double PLSQLDBDuration;
@property double EPSQLDBDuration;
@property double archiveRetention;
@property (retain) NSMutableArray *archiveJobs;
@property (nonatomic) BOOL interrupted;
@property (retain) NSMutableArray *notificationBlocks;
@property (retain) NSDate *lastEPSQLTrimDate;
@property BOOL monotonicResetOccurred;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)workQueue;
+ (id)storageQueue;
+ (id)archiveEntriesFinished;
+ (id)allArchivePaths;
+ (id)lastArchivePath;
+ (void)systemTimeChangedByOffset:(double)a0;
+ (id)archiveEntriesUnfinished;
+ (id)archiveEntriesWithComparisons:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (void)disable;
- (void)enable;
- (BOOL)isInterrupted;
- (void)migrate;
- (void)recover;
- (void)handleFailure:(long long)a0 forArchiveEntry:(id)a1;
- (void)runInitialActivity;
- (id)getArchivingCriteria;
- (void)runActivityWithLastCompletedDate:(id)a0;
- (void)deprecateTables;
- (void)scheduleArchiveJobs;
- (void)runArchiveJobs;
- (void)trimExtendedPersistenceLog;
- (BOOL)eliglibleToTrimEPSQLForDate:(id)a0;
- (void)migrateArchive:(id)a0;
- (void)registerForArchivingNotificationUsingBlock:(id /* block */)a0;

@end
