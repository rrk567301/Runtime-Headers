@class NSString, DDSBackgroundActivityScheduler, NSDate;
@protocol DDSRemoteSyncStateDelegate;

@interface DDSRemoteSyncState : NSObject <DDSBackgroundActivitySchedulerDelegate>

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long syncStatus;
@property (nonatomic) unsigned long long attemptCount;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) DDSBackgroundActivityScheduler *scheduler;
@property (weak, nonatomic) id<DDSRemoteSyncStateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildVersionString;
+ (double)timeIntervalUntilNextRegularUpdate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)resetState;
- (void)loadState;
- (void)requestUpdate;
- (void)performScheduledActivityWithIdentifier:(id)a0;
- (void)scheduleRegularUpdate;
- (void)scheduleRetry;
- (BOOL)shouldRequestCompleteRefresh;
- (BOOL)shouldInitiateRegularUpdateCycle;
- (void)beganUpdateCycle;
- (void)completedUpdateCycleWithError:(id)a0;
- (void)requestRetry;
- (void)requestCompleteRefresh;
- (void)saveState;
- (double)nextUpdateTimeIntervalForAttemptCount:(unsigned long long)a0;
- (double)timeBetweenSyncs;

@end
