@class NSDictionary, NSMutableDictionary;
@protocol HMDEventCounterContext;

@interface HMDEventCounterGroup : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *mutableEventCounters;
@property (retain, nonatomic) id<HMDEventCounterContext> context;
@property (readonly, nonatomic) NSDictionary *eventCounters;
@property (readonly, nonatomic) unsigned long long summedEventCounters;

- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)forceSave;
- (void)incrementEventCounterForEventName:(id)a0;
- (unsigned long long)fetchEventCounterForEventName:(id)a0;
- (id)_getOrCreateEventCounterForEventName:(id)a0;
- (void)incrementEventCounterForEventName:(id)a0 withValue:(unsigned long long)a1;
- (BOOL)_resetEventCounterForEventName:(id)a0;
- (void)resetEventCounterForEventName:(id)a0;
- (id)initWithContext:(id)a0 serializedEventCounters:(id)a1;
- (void)addObserver:(id)a0 forEventName:(id)a1;
- (void)resetEventCounters;

@end
