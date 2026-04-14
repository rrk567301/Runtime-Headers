@class AFInstanceContext, NSMutableDictionary;

@interface SOClockTimerManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
}

+ (void)warmUp;

- (void)checkIn;
- (id)dismissTimerWithIdentifier:(id)a0;
- (id)addTimer:(id)a0;
- (id)initWithInstanceContext:(id)a0;
- (void)dealloc;
- (id)removeTimer:(id)a0;
- (id)init;
- (id)_registeredObservations;
- (void)removeHandlerForEvent:(long long)a0;
- (id)updateTimer:(id)a0;
- (id)timers;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;
- (void).cxx_destruct;

@end
