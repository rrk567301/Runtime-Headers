@class NSSet, NSMutableDictionary, NSString, EDSearchableIndexSchedulerState, NSObject;
@protocol OS_os_log, OS_dispatch_queue, EDSearchableIndexSchedulable;

@interface EDSearchableIndexScheduler : NSObject <EFLoggable, EDSearchableIndexSchedulableDelegate>

@property (class, readonly, nonatomic) NSSet *deferrableActivityTypes;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL scheduledDeferralCheck;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexingStateQueue;
@property (retain, nonatomic) EDSearchableIndexSchedulerState *state;
@property (retain, nonatomic) NSMutableDictionary *activities;
@property (retain, nonatomic) NSMutableDictionary *tasks;
@property BOOL requireClassA;
@property (nonatomic, getter=isScheduling) BOOL scheduling;
@property (readonly, weak, nonatomic) id<EDSearchableIndexSchedulable> schedulable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskTypes;
+ (BOOL)isDeferrableActivityType:(id)a0;
+ (id)activityTypes;
+ (BOOL)isTurboModeIndexingEnabled;

- (void)searchableIndexSchedulable:(id)a0 didIndexItemCount:(long long)a1 lastItemDateReceived:(id)a2;
- (void)searchableIndexSchedulable:(id)a0 didGenerateImportantPowerEventWithIdentifier:(id)a1 eventData:(id)a2;
- (void)indexingDidSuspendForSearchableIndexSchedulable:(id)a0;
- (BOOL)isDataSourceIndexingPermitted;
- (void)_beginIndexingForTaskType:(id)a0 task:(id)a1;
- (void)_startScheduling;
- (void)dealloc;
- (void)_enableIndexingForActivityType:(id)a0;
- (double)maintenanceIndexingTime;
- (void)_enableIndexingForTaskType:(id)a0;
- (id /* block */)_xpcCriteriaBuilderBlockForActivityType:(id)a0;
- (void)_stopScheduling;
- (void)_periodicallyCheckForDeferralIfNecessary;
- (void)deferIndexingForActivityType:(id)a0;
- (BOOL)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id)a0;
- (BOOL)isIndexingEnabledForActivityType:(id)a0;
- (double)otherIndexingTime;
- (void)indexingDidResumeForSearchableIndexSchedulable:(id)a0;
- (void)indexingDidFinishForSearchableIndexSchedulable:(id)a0 backlogComplete:(BOOL)a1;
- (void)_stopIndexingForActivityType:(id)a0 shouldDeferIfPossible:(BOOL)a1;
- (void)_logIndexingPowerEventWithIdentifier:(id)a0 additionalEventData:(id)a1 usePersistentLog:(BOOL)a2;
- (id)_xpcActivityIdentifierForActivityType:(id)a0;
- (void)_stopAllIndexingBacklogComplete:(BOOL)a0;
- (void)_stopIndexingForTaskType:(id)a0 requestRetry:(BOOL)a1 backlogComplete:(BOOL)a2;
- (void)_registerActivityForType:(id)a0 builder:(id /* block */)a1 runner:(id /* block */)a2;
- (void)_disableIndexingForActivityType:(id)a0 defer:(BOOL)a1;
- (id)initWithSchedulable:(id)a0;
- (void)searchableIndexSchedulable:(id)a0 didGeneratePowerEventWithIdentifier:(id)a1 eventData:(id)a2;
- (void)_deferActivitiesIfNecessary;
- (void)_disableIndexingForTaskType:(id)a0;
- (void)searchableIndexSchedulable:(id)a0 didIndexForTime:(double)a1;
- (BOOL)isIndexingEnabledForTaskType:(id)a0;
- (void).cxx_destruct;
- (void)beginIndexingForActivityType:(id)a0 activity:(id)a1;

@end
