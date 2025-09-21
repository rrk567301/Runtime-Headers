@class NSSet, NSString, NSMutableDictionary, EDSearchableIndexBudgetConfiguration, NSObject, EDSearchableIndexSchedulerState;
@protocol OS_os_log, OS_dispatch_queue, EDSearchableIndexSchedulable;

@interface EDSearchableIndexScheduler : NSObject <EFLoggable, EDSearchableIndexSchedulableDelegate>

@property (class, readonly, nonatomic) NSSet *deferrableActivityTypes;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) char scheduledDeferralCheck;
@property (copy, nonatomic) NSString *budgetTimeUserDefaultsKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexingStateQueue;
@property (retain, nonatomic) EDSearchableIndexSchedulerState *state;
@property (retain, nonatomic) NSMutableDictionary *activities;
@property (retain, nonatomic) NSMutableDictionary *tasks;
@property (readonly) long long budgetedItemCountRemaining;
@property char requireClassA;
@property (nonatomic, getter=isScheduling) char scheduling;
@property (readonly, weak, nonatomic) id<EDSearchableIndexSchedulable> schedulable;
@property (readonly, nonatomic) EDSearchableIndexBudgetConfiguration *budgetConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityTypes;
+ (id)budgetTimeUserDefaultsKeyForIndexName:(id)a0;
+ (char)isDeferrableActivityType:(id)a0;
+ (char)isTurboModeIndexingEnabled;
+ (id)taskTypes;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_beginIndexingForTaskType:(id)a0 task:(id)a1;
- (void)_enableIndexingForActivityType:(id)a0;
- (void)_stopScheduling;
- (void)indexingDidFinishForSearchableIndexSchedulable:(id)a0 backlogComplete:(char)a1;
- (double)_budgetTimeFromUserDefaults;
- (void)_deferActivitiesIfNecessary;
- (void)_disableIndexingForActivityType:(id)a0 defer:(char)a1;
- (void)_disableIndexingForTaskType:(id)a0;
- (void)_enableIndexingForTaskType:(id)a0;
- (void)_logIndexingPowerEventWithIdentifier:(id)a0 additionalEventData:(id)a1 usePersistentLog:(char)a2;
- (void)_periodicallyCheckForDeferralIfNecessary;
- (void)_registerActivityForType:(id)a0 builder:(id /* block */)a1 runner:(id /* block */)a2;
- (void)_saveBudgetTimeToUserDefaults:(double)a0;
- (void)_startScheduling;
- (void)_stopAllIndexingBacklogComplete:(char)a0;
- (void)_stopIndexingForActivityType:(id)a0 shouldDeferIfPossible:(char)a1;
- (void)_stopIndexingForTaskType:(id)a0 requestRetry:(char)a1 backlogComplete:(char)a2;
- (id)_xpcActivityIdentifierForActivityType:(id)a0;
- (id /* block */)_xpcCriteriaBuilderBlockForActivityType:(id)a0;
- (void)beginIndexingForActivityType:(id)a0 activity:(id)a1;
- (long long)budgetedItemCountRemainingForSearchableIndexSchedulable:(id)a0;
- (double)budgetedTimeRemaining;
- (double)budgetedTimeRemainingForSearchableIndexSchedulable:(id)a0;
- (void)deferIndexingForActivityType:(id)a0;
- (char)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id)a0;
- (void)indexingDidResumeForSearchableIndexSchedulable:(id)a0;
- (void)indexingDidSuspendForSearchableIndexSchedulable:(id)a0;
- (id)initWithSchedulable:(id)a0 budgetConfiguration:(id)a1;
- (char)isDataSourceIndexingPermitted;
- (char)isIndexingEnabledForActivityType:(id)a0;
- (char)isIndexingEnabledForTaskType:(id)a0;
- (double)maintenanceIndexingTime;
- (double)otherIndexingTime;
- (void)searchableIndexSchedulable:(id)a0 didGenerateImportantPowerEventWithIdentifier:(id)a1 eventData:(id)a2;
- (void)searchableIndexSchedulable:(id)a0 didGeneratePowerEventWithIdentifier:(id)a1 eventData:(id)a2;
- (void)searchableIndexSchedulable:(id)a0 didIndexForTime:(double)a1;
- (void)searchableIndexSchedulable:(id)a0 didIndexItemCount:(long long)a1 lastItemDateReceived:(id)a2;

@end
