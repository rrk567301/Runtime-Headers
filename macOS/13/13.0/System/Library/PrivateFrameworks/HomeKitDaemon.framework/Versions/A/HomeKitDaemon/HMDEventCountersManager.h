@class NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue, HMDEventCountersStoring;

@interface HMDEventCountersManager : HMFObject <HMDEventCounterContext> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMDEventCountersManager *sharedEventCountersManager;

@property (retain, nonatomic) NSMutableDictionary *counterGroups;
@property (retain, nonatomic) NSDate *lastSaveTime;
@property (readonly) id<HMDEventCountersStoring> counterStorage;
@property (nonatomic) double saveInterval;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)_save;
- (void)forceSave;
- (void)counterChanged;
- (id)initWithEventCountersStorage:(id)a0 saveInterval:(double)a1;
- (id)counterGroupForName:(id)a0;
- (id)counterGroupForSpecifier:(id)a0;
- (id)counterGroupsForPredicate:(id /* block */)a0;
- (void)removeCounterGroupForName:(id)a0;
- (void)removeCounterGroupForSpecifier:(id)a0;
- (void)removeCounterGroupsBasedOnPredicate:(id /* block */)a0;
- (void)_removeCounterGroupForSpecifier:(id)a0;
- (void)addObserver:(id)a0 forEventName:(id)a1 requestGroup:(id)a2;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1 withValue:(unsigned long long)a2;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (unsigned long long)fetchEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (id)fetchEventCountersForRequestGroup:(id)a0;
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)a0;
- (id)fetchAllEventCounters;
- (void)resetEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)resetEventCountersForRequestGroup:(id)a0;
- (void)resetAllEventCounters;
- (id)_fetchAllEventCounters;
- (id)unarchiveEventCounters;

@end
