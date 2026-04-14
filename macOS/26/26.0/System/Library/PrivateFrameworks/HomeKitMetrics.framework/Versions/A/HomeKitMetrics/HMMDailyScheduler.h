@class NSString, NSHashTable, NSDate, NSUserDefaults;
@protocol HMMLogEventSubmitting, HMMXPCActivityInterface;

@interface HMMDailyScheduler : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy) id /* block */ dateFactory;
@property (readonly, nonatomic) NSString *xpcActivityIdentifier;
@property (readonly, nonatomic) NSString *preferencesKey;
@property (readonly, nonatomic) NSUserDefaults *preferencesStore;
@property (retain, nonatomic) NSHashTable *mutableTaskRunners;
@property (retain, nonatomic) NSHashTable *mutableBookends;
@property (retain, nonatomic) id<HMMXPCActivityInterface> xpcActivityInterface;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (retain, nonatomic) NSDate *lastRunTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_registerActivity;
- (id)initWithIdentifier:(id)a0 preferencesKey:(id)a1 logEventSubmitter:(id)a2;
- (void)registerBookend:(id)a0;
- (void)registerDailyTaskRunner:(id)a0;
- (void)runHomeutilTasks;
- (id)statusSummary;
- (id)_criteriaForActivity;
- (void)_handleCheckInForActivity:(id)a0;
- (void)_runActivity:(id)a0;
- (void)_runTasksForHomeutil:(BOOL)a0;
- (id)bookends;
- (id)initWithIdentifier:(id)a0 preferencesKey:(id)a1 preferencesStore:(id)a2 logEventSubmitter:(id)a3 xpcActivityInterface:(id)a4 dateFactory:(id /* block */)a5;
- (void)runDailyTasks;
- (id)taskRunners;

@end
