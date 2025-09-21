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
- (void)closeDatabase;
- (void)addMessageHash:(id)a0;
- (unsigned long long)_currentLocalTime;
- (void)_performInitialHousekeeping;
- (void)_runCleanup;
- (void)_setDatabaseCloseTimerOnIvarQueue;
- (void)_startCleanupTimer;
- (char)containsMessageHash:(id)a0;
- (void)updateCreationDateForHash:(id)a0;

@end
