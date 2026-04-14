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

- (void)loadState;
- (void)saveState;
- (void)requestUpdate;
- (void)scheduleRegularUpdate;
- (void)requestCompleteRefresh;
- (void)resetState;
- (void)loadStateAndScheduleUpdate;
- (void)performScheduledActivityWithIdentifier:(id)a0;
- (BOOL)shouldInitiateRegularUpdateCycle;
- (void)beganUpdateCycle;
- (void)scheduleRetry;
- (void)requestRetry;
- (void).cxx_destruct;
- (double)nextUpdateTimeIntervalForAttemptCount:(unsigned long long)a0;
- (double)timeBetweenSyncs;
- (id)initWithDelegate:(id)a0 assetType:(id)a1;
- (BOOL)shouldRequestCompleteRefresh;
- (void)completedUpdateCycleWithError:(id)a0;
- (id)init;

@end
