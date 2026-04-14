@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDSMessageHashStore : NSObject

@property (nonatomic) unsigned long long initialProcessTime;
@property (nonatomic) unsigned long long initialServerTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *databaseCloseTimer;
@property (nonatomic) double databaseLastUpdateTime;
@property (retain, nonatomic) NSMutableArray *recentlySeenHashes;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_performInitialHousekeeping;
- (void)_startCleanupTimer;
- (void)_setDatabaseCloseTimerOnIvarQueue;
- (unsigned long long)_currentLocalTime;
- (void)closeDatabase;
- (void)_runCleanup;
- (BOOL)containsMessageHash:(id)a0;
- (void)addMessageHash:(id)a0;
- (void)updateCreationDateForHash:(id)a0;

@end
