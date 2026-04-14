@class RTVisitStore, RTDarwinNotificationHelper, NSArray, RTPlatform, RTLifeCycleManager, NSObject, RTLearnedLocationStore, RTXPCActivityManager;
@protocol OS_dispatch_source;

@interface RTPurgeManager : RTService

@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningDispatchSource;
@property (nonatomic) long long pressureState;
@property (retain, nonatomic) RTDarwinNotificationHelper *notificationHelper;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (weak, nonatomic) RTLifeCycleManager *lifeCycleManager;
@property (readonly, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) NSArray *purgers;
@property (retain, nonatomic) RTVisitStore *visitStore;
@property (readonly, nonatomic) RTXPCActivityManager *xpcActivityManager;

+ (id)purgeTypeToString:(long long)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_purge:(id /* block */)a0;
- (id)_determinePruneDate:(id)a0 boundaryInterval:(id)a1;
- (id)_cacheDateDependencyMomentsWithDateInterval:(id)a0;
- (id)_lastVisitWithError:(id *)a0;
- (id)_firstUnlabeledLearnedVisitWithError:(id *)a0;
- (void)purge:(id /* block */)a0;
- (id)_dailyReferenceDate:(id)a0;
- (id)_lastLabeledLearnedVisitWithError:(id *)a0;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)clearRoutineWithHandler:(id /* block */)a0;
- (void)onCoreLocationPrivacyReset;
- (id)init;
- (void)handleLanguageChangeNotification;
- (void)_unregisterForMemoryPressureWarnings;
- (void)_handleLanguageChangeNotification;
- (void).cxx_destruct;
- (id)_longTermReferenceDate:(id)a0;
- (id)_selectPruneDateFromReferenceDateDict:(id)a0 purger:(id)a1 type:(long long)a2;
- (void)dealloc;
- (id)_shortTermReferenceDate:(id)a0;
- (void)_purgeWithType:(long long)a0 referenceDate:(id)a1 handler:(id /* block */)a2;
- (id)_cacheDateDependencyUnlabeledLearnedVisitWithDateInterval:(id)a0;
- (void)_registerForMemoryPressureWarnings;
- (id)_cacheDateDependencyLabeledLearnedVisitWithDateInterval:(id)a0;
- (id)_generatePeriodicPurgeReferenceDateDict;
- (id)initWithDefaultsManager:(id)a0 learnedLocationStore:(id)a1 lifeCycleManager:(id)a2 platform:(id)a3 purgers:(id)a4 visitStore:(id)a5 xpcActivityManager:(id)a6;
- (id)_cacheDateDependencyForVisitWithDateInterval:(id)a0;

@end
