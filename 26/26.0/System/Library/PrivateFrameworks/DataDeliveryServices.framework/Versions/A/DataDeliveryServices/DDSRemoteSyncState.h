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

- (void)resetState;
- (void)saveState;
- (void)loadState;
- (BOOL)shouldRequestCompleteRefresh;
- (void)requestCompleteRefresh;
- (double)timeBetweenSyncs;
- (double)nextUpdateTimeIntervalForAttemptCount:(unsigned long long)a0;
- (void)performScheduledActivityWithIdentifier:(id)a0;
- (void)completedUpdateCycleWithError:(id)a0;
- (id)initWithDelegate:(id)a0 assetType:(id)a1;
- (void)requestRetry;
- (void)loadStateAndScheduleUpdate;
- (id)init;
- (void)beganUpdateCycle;
- (void)scheduleRetry;
- (void)requestUpdate;
- (void)scheduleRegularUpdate;
- (BOOL)shouldInitiateRegularUpdateCycle;
- (void).cxx_destruct;

@end
