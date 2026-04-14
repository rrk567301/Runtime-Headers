@class NSSet, HMDPersistentStore, NSMutableDictionary, NSObject;
@protocol HMMUptimeProvider, HMDEventCountersManagerDelegate, OS_dispatch_queue;

@interface HMDEventCountersManager : HMFObject <HMDEventCounterContext> {
    HMDPersistentStore *_persistentStore;
    NSMutableDictionary *_counterGroups;
    double _lastSaveTime;
    BOOL _pendingSave;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) NSSet *allowedSpecifierClasses;
@property (class, readonly, nonatomic) double defaultSaveInterval;

@property (readonly, nonatomic) double saveInterval;
@property (readonly, nonatomic) id<HMMUptimeProvider> uptimeProvider;
@property (readonly, nonatomic) id<HMDEventCountersManagerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (void)counterChanged;
- (id)initWithFlatFileStoragePath:(id)a0 dateProvider:(id)a1 startupContainerName:(id)a2 uptimeProvider:(id)a3 error:(id *)a4;
- (id)initWithDelegate:(id)a0 saveInterval:(double)a1 uptimeProvider:(id)a2;
- (void)removeCounterGroupForName:(id)a0;
- (unsigned long long)fetchEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)addObserver:(id)a0 forEventName:(id)a1 requestGroup:(id)a2;
- (id)initWithDelegate:(id)a0;
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)a0;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1 withValue:(unsigned long long)a2;
- (id)fetchAllEventCounters;
- (id)counterGroupForSpecifier:(id)a0;
- (id)initWithCoreDataStoragePath:(id)a0 dateProvider:(id)a1 startupContainerName:(id)a2 uptimeProvider:(id)a3 error:(id *)a4;
- (void)_save;
- (id)initWithStorage:(id)a0 saveInterval:(double)a1 uptimeProvider:(id)a2;
- (void)_removeCounterGroupForSpecifier:(id)a0;
- (id)counterGroupsForPredicate:(id /* block */)a0;
- (id)fetchEventCountersForRequestGroup:(id)a0;
- (id)initWithDateProvider:(id)a0 startupContainerName:(id)a1 uptimeProvider:(id)a2;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)forceSave;
- (void)resetEventCountersForRequestGroup:(id)a0;
- (void)removeCounterGroupsBasedOnPredicate:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_fetchAllEventCounters;
- (id)counterGroupForName:(id)a0;
- (void)removeCounterGroupForSpecifier:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)resetAllEventCounters;
- (id)init;

@end
