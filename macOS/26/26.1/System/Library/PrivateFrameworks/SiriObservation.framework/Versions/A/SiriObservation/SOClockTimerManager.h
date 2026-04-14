@class AFInstanceContext, NSMutableDictionary;

@interface SOClockTimerManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
}

+ (void)warmUp;

- (id)timers;
- (void)checkIn;
- (id)initWithInstanceContext:(id)a0;
- (id)addTimer:(id)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (void)removeHandlerForEvent:(long long)a0;
- (id)updateTimer:(id)a0;
- (void)dealloc;
- (id)removeTimer:(id)a0;
- (id)_registeredObservations;
- (void).cxx_destruct;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;
- (id)init;

@end
