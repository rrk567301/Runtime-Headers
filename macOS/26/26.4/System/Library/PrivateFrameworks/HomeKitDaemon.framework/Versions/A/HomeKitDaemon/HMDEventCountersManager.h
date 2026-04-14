@class NSSet, HMDPersistentStore, NSMutableDictionary, NSObject;
@protocol HMMUptimeProvider, OS_dispatch_queue, HMDEventCountersManagerDelegate;

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
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<HMDEventCountersManagerDelegate> delegate;

- (void)_save;
- (id)counterGroupForSpecifier:(id)a0;
- (id)initWithDelegate:(id)a0 saveInterval:(double)a1 uptimeProvider:(id)a2;
- (id)initWithDelegate:(id)a0;
- (id)counterGroupForName:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)counterGroupsForPredicate:(id /* block */)a0;
- (id)fetchAllEventCounters;
- (id)_fetchAllEventCounters;
- (id)fetchEventCountersForRequestGroup:(id)a0;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1 withValue:(unsigned long long)a2;
- (void)removeCounterGroupForSpecifier:(id)a0;
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)a0;
- (void)addObserver:(id)a0 forEventName:(id)a1 requestGroup:(id)a2;
- (unsigned long long)fetchEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void).cxx_destruct;
- (void)counterChanged;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)removeCounterGroupForName:(id)a0;
- (void)resetAllEventCounters;
- (void)resetEventCountersForRequestGroup:(id)a0;
- (void)_removeCounterGroupForSpecifier:(id)a0;
- (void)removeCounterGroupsBasedOnPredicate:(id /* block */)a0;
- (void)forceSave;

@end
