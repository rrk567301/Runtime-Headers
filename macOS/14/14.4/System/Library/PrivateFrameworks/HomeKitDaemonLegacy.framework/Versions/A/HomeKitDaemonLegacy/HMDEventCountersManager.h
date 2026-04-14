@class NSObject, NSSet, HMDPersistentStore, NSMutableDictionary, HMMDateProvider, HMMCountersManager;
@protocol HMMUptimeProvider, HMDEventCountersStoring, OS_dispatch_queue;

@interface HMDEventCountersManager : HMFObject <HMDEventCounterContext> {
    HMDPersistentStore *_persistentStore;
    NSMutableDictionary *_counterGroups;
    double _lastSaveTime;
    BOOL _pendingSave;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) NSSet *allowedSpecifierClasses;

@property (readonly, nonatomic) id<HMDEventCountersStoring> counterStorage;
@property (readonly, nonatomic) double saveInterval;
@property (readonly, nonatomic) id<HMMUptimeProvider> uptimeProvider;
@property (readonly, nonatomic) HMMCountersManager *bridgedCountersManager;
@property (readonly, nonatomic) HMMDateProvider *bridgedDateProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)_save;
- (void)removeCounterGroupForSpecifier:(id)a0;
- (id)_fetchAllEventCounters;
- (void)_removeCounterGroupForSpecifier:(id)a0;
- (void)addObserver:(id)a0 forEventName:(id)a1 requestGroup:(id)a2;
- (void)counterChanged;
- (id)counterGroupForName:(id)a0;
- (id)counterGroupForSpecifier:(id)a0;
- (id)counterGroupsForPredicate:(id /* block */)a0;
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)a0;
- (id)fetchAllEventCounters;
- (unsigned long long)fetchEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (id)fetchEventCountersForRequestGroup:(id)a0;
- (void)forceSave;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1 withValue:(unsigned long long)a2;
- (id)initWithBridgedCountersManager:(id)a0 bridgedDateProvider:(id)a1;
- (id)initWithEventCountersStorage:(id)a0 bridgedCountersManager:(id)a1 bridgedDateProvider:(id)a2;
- (id)initWithEventCountersStorage:(id)a0 bridgedCountersManager:(id)a1 bridgedDateProvider:(id)a2 saveInterval:(double)a3 uptimeProvider:(id)a4;
- (void)removeCounterGroupForName:(id)a0;
- (void)removeCounterGroupsBasedOnPredicate:(id /* block */)a0;
- (void)resetAllEventCounters;
- (void)resetEventCountersForRequestGroup:(id)a0;
- (id)unarchiveEventCounters;

@end
