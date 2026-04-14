@class NSString, DDSBackgroundActivityScheduler, NSDate;
@protocol DDSRemoteSyncStateDelegate;

@interface DDSRemoteSyncState : NSObject <DDSBackgroundActivitySchedulerDelegate>

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long syncStatus;
@property (nonatomic) unsigned long long attemptCount;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) DDSBackgroundActivityScheduler *scheduler;
@property (weak, nonatomic) id<DDSRemoteSyncStateDelegate> delegate;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, copy) NSString *metadataSyncStatePreferenceKey;
@property (readonly, copy) NSString *scheduleUpdateIdentifier;
@property (readonly, copy) NSString *scheduleRetryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildVersionString;
+ (double)timeIntervalUntilNextRegularUpdate;

- (void)requestUpdate;
- (id)initWithDelegate:(id)a0 assetType:(id)a1;
- (void)saveState;
- (void)loadState;
- (void)requestRetry;
- (double)nextUpdateTimeIntervalForAttemptCount:(unsigned long long)a0;
- (void)resetState;
- (void)completedUpdateCycleWithError:(id)a0;
- (void)beganUpdateCycle;
- (void)requestCompleteRefresh;
- (BOOL)shouldInitiateRegularUpdateCycle;
- (void).cxx_destruct;
- (BOOL)shouldRequestCompleteRefresh;
- (void)loadStateAndScheduleUpdate;
- (void)scheduleRetry;
- (id)init;
- (void)scheduleRegularUpdate;
- (double)timeBetweenSyncs;
- (void)performScheduledActivityWithIdentifier:(id)a0;

@end
