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
- (id)fetchEventCountersForRequestGroup:(id)a0;
- (void)resetEventCountersForRequestGroup:(id)a0;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1 withValue:(unsigned long long)a2;
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)a0;
- (unsigned long long)fetchEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)removeCounterGroupsBasedOnPredicate:(id /* block */)a0;
- (id)counterGroupForName:(id)a0;
- (void)addObserver:(id)a0 forEventName:(id)a1 requestGroup:(id)a2;
- (id)fetchAllEventCounters;
- (void)resetAllEventCounters;
- (void)resetEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (id)initWithEventCountersStorage:(id)a0 saveInterval:(double)a1;
- (id)unarchiveEventCounters;
- (id)counterGroupForSpecifier:(id)a0;
- (void)removeCounterGroupForSpecifier:(id)a0;
- (void)_removeCounterGroupForSpecifier:(id)a0;
- (id)_fetchAllEventCounters;
- (void)removeCounterGroupForName:(id)a0;

@end
